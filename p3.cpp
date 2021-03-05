#include<iostream>
using namespace std;
struct node
{
int data;
struct node *next;	
};

struct node *head=0;
struct node *temp=0;
void enter(int n)
{
	
for(int i=1;i<=n;i++)
	{
        int k;
		node *newnode = new node;
		cout<<"enter data\n";
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
		int count=0;
	

	void print()
	{
		temp=head;
	while(temp!=0)
	{
		count++;
		cout<<"=>"<<temp->data;
		temp=temp->next;
	}
	cout<<"=> null \n";
	cout<<"number of node \n "<<count;
      }
      int main()
	  {
	  	int k;
	  	cout<<"enter number of node";
	  	cin>>k;
	  	enter(k);
	  	print();
	  	
	  }