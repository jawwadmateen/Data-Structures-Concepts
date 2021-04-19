#include <iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
	
	
};
class queue
{
	public:
	node *front;
	node *rear;
	node *temp;
	node *ptr;
	queue()
	{
		front=NULL;
		rear=NULL;
	}
	void enqueue(int x)
	{
		node *p=rear;
		temp=new node;
		if(temp==NULL)
		{
			cout<<"Queue is Full"<<endl;
		}
		else
		{
			if(front==NULL)
			{
				front=temp;
				rear=temp;
			}
			temp->data=x;
			temp->next=NULL;
			rear->next=temp;
			rear=temp;
		}
	}
	int dequeue()
	{
		int x;
		node *p;
		p=front;
		if(front==NULL)
		{
			cout<<"Queue is Empty"<<endl;
		}
		else
		{
		   x=p->data;
		   front=front->next;
		   delete p;
		}
		return x;
	}
};
int main()
{
	int i,j,k;
	queue q1;
	q1.enqueue(10);
	q1.enqueue(11);
	cout<<q1.dequeue()<<endl;
	cout<<q1.dequeue()<<endl;
	cout<<q1.dequeue()<<endl;
}

