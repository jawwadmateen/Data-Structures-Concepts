#include <iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
class stack
{
	public:
	node *temp;
	node *ptr;
	node *top;
	stack()
	{
		top=NULL;
	}
	void push(int x)
	{
		if(top==NULL)
		{
			temp=new node;
			temp->next=NULL;
			temp->data=x;
			top=temp;
		}
		else
		{
		
		temp=new node;
		if(temp==NULL)
		{
			cout<<"Stack Overflow"<<endl;
			
		}
		else
		{
			temp->data=x;
			temp->next=top;
			top=temp;
			
		}
	}
	}
	int pop()
	{
		if(top==NULL)
		{
			cout<<"Stack is empty"<<endl;
			return 0;
			
		}
		else
		{
		   ptr=top;
		   top=top->next;
		   int x;
		   x=ptr->data;
		   delete ptr;
		   return x;
		}
	}
	int stacktop()
	{
		if(top)
		{
			return top->data;
		}
	}
	int peek(int pos)
	{
		node *p;
		p=top;
		for(int i=0;p!=NULL && i<pos-1;i++)
		{
			p=p->next;
		}
		if(p!=NULL)
		{
			int x;
			x=p->data;
			return x;
		}
		else
		{
			return 0;
		}
	}
	int isEmpty()
	{
		if(top==NULL)
		{
			cout<<"Stack is Empty"<<endl;
			return 1;
		}
		else
		{
			return 0;
		}
		
		
	}
	int isFull()
	{
		temp=new node;
		if(temp==NULL)
		{
			cout<<"Stack is FULL"<<endl;
			return 1;
		}
		else
		{
			delete temp;
			return 0;
		}
	}
};
int main()
{
	stack s1;
	s1.push(10);
	s1.push(11);
	s1.push(12);
	//cout<<"Peeking "<<s1.peek(3)<<endl;
	cout<<"After Popping "<<s1.pop()<<endl;
	cout<<"After Popping "<<s1.pop()<<endl;
	cout<<"After Popping "<<s1.pop()<<endl;
	s1.push(13);
	cout<<"After Popping "<<s1.pop()<<endl;
	cout<<s1.isEmpty();
	
}
