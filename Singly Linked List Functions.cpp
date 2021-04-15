#include <iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
class sll
{
	public:
	node *head;
	node *temp;
	node *ptr;
	int num;
	void createsll()
	{
		int i,j,k;
		cout<<"Enter the number of nodes you want "<<endl;
		cin>>num;
		int arr[num];
		cout<<"Enter the data for the nodes"<<endl;
		for(i=0;i<num;i++)
		{
			cin>>arr[i];
		}
		temp=new node;
		temp->data=arr[0];
		temp->next=NULL;
		head=temp;
		ptr=temp;
		for(i=1;i<num;i++)
		{
			temp=new node;
			temp->data=arr[i];
			temp->next=NULL;
			ptr->next=temp;
			ptr=temp;
		}
		
		
	}
	void insertnodeatfront()
	{
		if(head==NULL)
		{
			cout<<"Operation not possible"<<endl;
			exit(1);
		}
		else
		{
		int d;
	    temp=new node;
	    cout<<"\n Enter data for new node"<<endl;
	    cin>>d;
	    temp->data=d;
	    temp->next=head;
	    head=temp;
	    }
	}
	void displaysll(node *p)
	{
		node *ptr1;
		ptr1=p;
		while(ptr1)
		{
			cout<<ptr1->data<<" ";
			ptr1=ptr1->next;
		}
	}
	void insertnodeatlast(node *p)
	{
		node *ptr1;
		ptr1=p;
		int d;
		while(ptr1->next)
		{
			ptr1=ptr1->next;
		}
		cout<<"\n Enter data for node"<<endl;
		cin>>d;
		temp=new node;
		temp->data=d;
		temp->next=NULL;
		ptr1->next=temp;
	}
	void deletenodeatfront(node *p)
	{
		node *ptr1;
		ptr1=p;
		head=head->next;
		delete ptr1;
	}
	void deletenodeatlast(node *p)
	{
		node *ptr1;
		node *ptr2;
		ptr1=p;
		while(ptr1->next!=NULL)
		{
			ptr2=ptr1;
			ptr1=ptr1->next;
		}
		ptr2->next=NULL;
		delete ptr1;
	}
	void deleteatpos(int pos)
	{
	    node *ptr1;
	    ptr1=head;
	    node *ptr2;
	    node *ptr3;
	    for(int i=0;i<pos;i++)
	    {
	    	ptr2=ptr1;
	    	ptr1=ptr1->next;
		}
		ptr3=ptr1->next;
	    delete ptr1;
	    ptr2->next=ptr3;	
	}
	void insertatpos(int pos)
	{
		node *ptr1;
	    ptr1=head;
	    node *ptr2;
	    node *ptr3;
	    int g;
	    for(int i=0;i<pos;i++)
	    {
	    	ptr2=ptr1;
	    	ptr1=ptr1->next;
		}
		temp=new node;
		cout<<"Enter data for node"<<endl;
		cin>>g;
		temp->data=g;
		temp->next=ptr1;
		ptr2->next=temp;
	}
};
int main()
{
	sll l1;
	l1.createsll();
	l1.displaysll(l1.head);
	l1.insertnodeatfront();
	l1.displaysll(l1.head);
	l1.insertnodeatlast(l1.head);
	l1.displaysll(l1.head);
	l1.deletenodeatfront(l1.head);
	cout<<"\nafter deletion from front"<<endl;
	l1.displaysll(l1.head);
	l1.deletenodeatlast(l1.head);
	cout<<"\n after deletion from last"<<endl;
	l1.displaysll(l1.head);
	l1.deleteatpos(3);
	cout<<"\nAfter deletion from specific position"<<endl;
	l1.displaysll(l1.head);
	l1.insertatpos(3);
	cout<<"After Insertion at specific position"<<endl;
	l1.displaysll(l1.head);
	
}
