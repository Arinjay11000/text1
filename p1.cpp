#include<iostream>
using namespace std;
struct node
{
int data;
struct node *link;	
};
	struct node *head=0;
    struct node *temp=0;

void enter(int t)
{
	for(int i=1;i<=t;i++)
	{
	int k;
		node *newnode = new node();
			cout<<"enter data \n";
		    cin>>k;
		    newnode->data=k;
			newnode->link=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
	     temp->link=newnode;
	    temp=newnode;
	    } 
    }	
}
void display()
{
		temp=head;
	while(temp!=0)
{
	cout<<temp->data<<endl;
	temp=temp->link;
}
}
int main()
{
	int n;
	cout<<"enter no of link \n";
	cin>>n;
	enter(n);
	cout<<"***----------***"<<endl;
	display();
}