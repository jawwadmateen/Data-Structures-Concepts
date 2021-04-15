#include <iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
	
};
class cll
{
	public:
	node *temp;
	node *ptr;
	node *head;
	int num;
	void createcll()
	{
		cout<<"Enter the number of nodes you want to enter"<<endl;
		cin>>num;
		int arr[num];
		cout<<"Enter the data for the nodes"<<endl;
		for(int i=0;i<num;i++)
		{
			cin>>arr[i];
		}
		temp=new node;
		temp->data=arr[0];
		temp->next=temp;
		head=temp;
		ptr=temp;
		for(int i=1;i<num;i++)
		{
			temp=new node;
		    temp->data=arr[i];
		    temp->next=head;
		    ptr->next=temp;
		    ptr=temp;
		    
		}
		
	}
	void insertnodeatfront()
	{
	   node *ptr1;
	   ptr1=head;
	   do
	   {
	   	 ptr1=ptr1->next;
	   }while(ptr1->next!=head);
	   int g;
	   cout<<"\nEnter data for node"<<endl;
	   cin>>g;
	   temp=new node;
	   temp->data=g;
	   temp->next=head;
	   head=temp;
	   ptr1->next=temp;
	}
	void displaycll()
	{
		node *ptr1;
		ptr1=head;
		do
		{
			cout<<ptr1->data<<" ";
			ptr1=ptr1->next;
		}while(ptr1!=head);
	}
	void insertnodeatlast()
	{
		node *ptr1;
		int g;
		ptr1=head;
		do
		{
			ptr1=ptr1->next;
		}while(ptr1->next!=head);
		cout<<"\nEnter data for node"<<endl;
		cin>>g;
		temp=new node;
		temp->data=g;
		ptr1->next=temp;
		temp->next=head;
	}
	void insertnodeatpos(int pos)
	{
		if(pos==0)
		{
		   node *ptr1;
	   ptr1=head;
	   do
	   {
	   	 ptr1=ptr1->next;
	   }while(ptr1->next!=head);
	   int g;
	   cout<<"\nEnter data for node"<<endl;
	   cin>>g;
	   temp=new node;
	   temp->data=g;
	   temp->next=head;
	   head=temp;
	   ptr1->next=temp;	
		}
		else
		{
		node *ptr1;
		int g;
		ptr1=head;
		for(int i=0;i<pos;i++)
		{
			ptr=ptr1;
			ptr1=ptr1->next;
		}
		cout<<"\nEnter data for new node"<<endl;
		cin>>g;
		temp=new node;
		temp->data=g;
		ptr->next=temp;
		temp->next=ptr1;
	}
		
		
	}
	void deletenodeatfront()
	{
		int g;
		node *ptr1=head;
		node *ptr2=head;
		do
		{
			ptr1=ptr1->next;
		}while(ptr1->next!=head);
		head=head->next;
		delete ptr1;
		ptr1->next=head;
		
	}
	void deletenodeatlast()
	{
		node *ptr1;
		ptr1=head;
		do
		{
		  ptr=ptr1;
		  ptr1=ptr1->next;	
		}while(ptr1->next!=head);
		delete ptr1;
		ptr->next=head;
		
	}
	void deleteatpos(int pos)
	{
		node *ptr1;
		ptr1=head;
		for(int i=0;i<pos;i++)
		{
			ptr=ptr1;
			ptr1=ptr1->next;
		}
		ptr->next=ptr1->next;
		delete ptr1;
		
	}
};
int main()
{
	cll l1;
	l1.createcll();
	l1.insertnodeatfront();
	l1.displaycll();
	l1.insertnodeatlast();
	l1.displaycll();
	l1.insertnodeatpos(0);
	l1.displaycll();
	l1.deletenodeatfront();
	cout<<"\n";
	l1.displaycll();
	l1.deletenodeatlast();
	cout<<"\n";
	l1.displaycll();
	l1.deleteatpos(3);
	cout<<"\n";
	l1.displaycll();
	
}
