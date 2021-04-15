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
	node *ptr;
	node *ptr1;
	node *temp;
	int num;
	void createsll()
	{
		cout<<"Enter the number of nodes you want"<<endl;
		cin>>num;
		int arr[num];
		cout<<"Enter the data for nodes"<<endl;
		for(int i=0;i<num;i++)
		{
			cin>>arr[i];
		}
		temp=new node;
		temp->data=arr[0];
		temp->next=NULL;
		head=temp;
		ptr=temp;
		for(int i=1;i<num;i++)
		{
			temp=new node;
			temp->data=arr[i];
			temp->next=NULL;
			ptr->next=temp;
			ptr=temp;
		}
		
	}
	void bubblesort()
	{
		node *p;
		p=head;
		node *q;
		int temp1;
		while(p)
		{
			q=p->next;
			while(q)
			{
				if(p->data>q->data)
				{
					temp1=p->data;
					p->data=q->data;
					q->data=temp1;
				}
				q=q->next;
				
			}
			p=p->next;
		}
	}
	void display(node *p)
	{
		while(p)
		{
			cout<<p->data<<" ";
			p=p->next;
		}
	}
};
int main()
{
    sll l1;
    l1.createsll();
    l1.bubblesort();
    l1.display(l1.head);
}
