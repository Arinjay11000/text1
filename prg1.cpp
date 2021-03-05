#include<iostream>
using namespace std;


    struct node
    {
        int data;
        node* next;
    };

    struct node *head=0;
   struct node *temp=0;
   void enter()
   {
       int k,n;
    cout<<"enter no. of node"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    node *newnode=new node();
     cin>>k;
     newnode->data=k;
     
    newnode->next=0;
if(head==0)
{ 
    head=temp=newnode;  
}
else
{
temp->next=newnode;
temp=newnode;
}
    }
}
void display()
{
temp=head;
while(temp!=0)

	cout<<temp->data;
	temp=temp->next;
}
int main()
{

	enter();
	display();
}