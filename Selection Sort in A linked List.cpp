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
	void selectionsort(node *ptr2)
	{
	    node *p;
	    node *q;
	    node *r;
	    int  temp1;
	    int key;
	    p=ptr2;
	    q=ptr2;
	    r=ptr2;
	    while(p)
	    {
	    	r=p;
	        q=p->next;
	    	while(q)
	    	 {
	    	 	
	    		if((q->data)<(r->data))
	    		{
	    			r=q;
	    			
				}
				q=q->next;
			}
			temp1=p->data;
			p->data=r->data;
			r->data=temp1;
			p=p->next;
		}
		
	}
	void display(node *e)
	{
		while(e)
		{
			cout<<e->data<<" ";
			e=e->next;
		}
	}
};
int main()
{
	sll l1;
	l1.createsll();
	l1.selectionsort(l1.head);
	l1.display(l1.head);
	
}
