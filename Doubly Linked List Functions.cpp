#include <iostream>
using namespace std;
class node
{
	public:
	int data;
	node *prev;
	node *next;
};
class dll
{
	public:
	node *head;
	node *temp;
	node *ptr;
	int num;
	void createdll()
	{
		int i,j,a;
		cout<<"Enter the number of nodes you want"<<endl;
		cin>>num;
		int arr[num];
		for(i=0;i<num;i++)
		{
			cin>>arr[i];
		}
		temp=new node;
		temp->data=arr[0];
		temp->prev=NULL;
		temp->next=NULL;
		ptr=temp;
		head=temp;
		for(i=1;i<num;i++)
		{
			temp=new node;
			temp->data=arr[i];
			temp->next=NULL;
			temp->prev=ptr;
			ptr->next=temp;
			ptr=temp;
		}
		
	}
	void insertnodefirst()
	{
		int g;
		cout<<"Enter the Data for node"<<endl;
		cin>>g;
	    temp=new node;
	    temp->data=g;
	    temp->next=head;
	    temp->prev=NULL;
	    head->prev=temp;
	    head=temp;
		
	}
	void displaydll(node *p)
	{
		node *ptr;
		ptr=p;
		while(ptr)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
	}
	void insertatend(node *p)
	{
	   node *ptr;
	   ptr=p;
	   int g;
	   while(ptr->next)
	   {
	   	 ptr=ptr->next;
	   	 
	   }
	   cout<<"\nEnter data for new node"<<endl;
	   cin>>g;
	   temp=new node;
	   temp->data=g;
	   ptr->next=temp;
	   temp->next=NULL;
	   temp->prev=ptr;  
	}
	void insertatpos(node *p,int pos)
	{
	   node *ptr;
	   node *ptr1;
	   node *ptr2;
	   int g;
	   ptr=p;
	   int i,j;
	   for(i=0;i<pos;i++)
	   {
	   	 ptr1=ptr;
	   	 ptr=ptr->next;
	   }
	   ptr2=ptr->next;
	   cout<<"\nEnter data for new node"<<endl;
	   cin>>g;
	   temp=new node;
	   temp->data=g;
	   temp->next=ptr;
	   temp->prev=ptr1;
	   ptr1->next=temp;
	   ptr->prev=temp;
	   
	}
	void deleteatfront()
	{
		node *ptr;
		ptr=head;
		head=head->next;
		head->prev=NULL;
		delete ptr;
	}
	void deletelast(node *p)
	{
		node *ptr;
		node *ptr1;
		node *ptr3;
		ptr=p;
		int g;
		while(ptr->next)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		 ptr1->next=NULL;
		 delete ptr;	
	}
	void deleteatpos(node *p,int pos)
	{
		node *ptr;
		node *ptr1;
		node *ptr3;
		ptr=p;
		int i,j;
		for(i=0;i<pos;i++)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		ptr3=ptr->next;
		ptr3->prev=ptr1;
		ptr1->next=ptr3;
		delete ptr;	
	}
	
	
};
int main()
{
	dll l1;
	l1.createdll();
	l1.displaydll(l1.head);
	cout<<"\nAfter insertion at front"<<endl;
	l1.insertnodefirst();
	l1.displaydll(l1.head);
	l1.insertatend(l1.head);
	cout<<"\nAfter insertion at end"<<endl;
	l1.displaydll(l1.head);
	l1.insertatpos(l1.head,3);
	l1.displaydll(l1.head);
	cout<<"\n after deletion at front"<<endl;
	l1.deleteatfront();
	l1.displaydll(l1.head);
	l1.deletelast(l1.head);
	cout<<"\n after deletion at last"<<endl;
	l1.displaydll(l1.head);
	cout<<"\nAfter Deletion at position "<<endl;
	l1.deleteatpos(l1.head,3);
	l1.displaydll(l1.head);
	
	
	
}
