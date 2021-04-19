#include<iostream>
#include <cstdio>
using namespace std;
class stack
{
	public:
	int top;
	int size;
	stack()
  {
  	 top=-1;
  }
  int isEmpty()
	{
		if(top==-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int isFull()
	{
		if(top==size-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
  void push(char arr[],int x)
  {
  	 if(top==size-1)
  	 {
  	 	cout<<"Stack Overflow"<<endl;
  	 	
	 }
	 else
	 {
	 	top++;
	 	arr[top]=x;
	 }
  }	
  int pop(char arr[])
  {
  	int x;
  	x=-1;
  	 if(top==-1)
  	 {
  	 	cout<<"Stack Underflow"<<endl;
	 }
	 else
	 {
	 	 
	 	 x=arr[top];
	 	 top--;
	 }
	 return x;
  }
  int peek(char arr[],int pos)
  {
  	 int x;
  	 x=-1;
  	 if(top-pos+1<0)
  	 {
  	 	 cout<<"Invalid Position"<<endl;
  	 	 return 0;
	 }
	 else
	 {
	 	int index;
	 	index=top-pos+1;
	 	x=arr[index];
	 }
	 return x;
  }
  char stacktop(char arr[])
  {
  	 int x;
  	 x=-1;
  	 if(top==-1)
  	 {
  	 	cout<<"Stack is Empty"<<endl;
  	 
	 }
	 else
	 {
	 	x=arr[top];
	 }
	 return x;
  	 
  }
  int bcheck(char arr[])
	{
	 int y;
	for(int i=0;arr[i]!='\0';i++)
	{
		char x;
		if(arr[i]=='(' || arr[i]=='{' || arr[i]=='[')
		{
			x=arr[i];
			push(arr,x);
		}
		else if(arr[i]==')')
		{
			if(isEmpty()==1)
			{
				return 0;
			}
			else
			{
				y=stacktop(arr);
				if(y=='{'||y=='[')
				{
					return 0;
				}
				pop(arr);
			}
		}
		else if(arr[i]=='}')
		{
			if(isEmpty()==1)
			{
				return 0;
			}
			else
			{
				y=stacktop(arr);
				if(y=='('||y=='[')
				{
					return 0;
				}
				pop(arr);
			}
		}
		else if(arr[i]==']')
		{
			if(isEmpty()==1)
			{
				return 0;
			}
			else
			{
				y=stacktop(arr);
				if(y=='{'||y=='(')
				{
					return 0;
				}
				pop(arr);
			}
		}
	}
	if(isEmpty())
	{
		return 1;
	}
	else 
	{
		return 0;
	}
   }
};
int main()
{
    stack s1;
    int n;
    cout<<"Enter the Size of stack"<<endl;
    cin>>n;
    s1.size=n;
    char arr1[n];
    cout<<"Enter the Equation"<<endl;
    fflush(stdin);
    gets(arr1);
	if(s1.bcheck(arr1))
	{
		cout<<"Balanced"<<endl;
	}
	else
	{
		cout<<"Not Balanced"<<endl;
	}
	
	
}

