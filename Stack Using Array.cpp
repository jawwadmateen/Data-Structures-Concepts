#include <iostream>
using namespace std;
class stack
{
	public:
	int size;
	int top;
	int *s;
	stack()
	{
		top=-1;
	}
	void push(int s2[],int x)
	{
		if(top==size-1)
		{
			cout<<"Stack Overflow"<<endl;
		}
		else
		{
			top++;
			s2[top]=x;
		}
	}
	int pop(int s2[])
	{
		int x;
		x=-1;
		if(top==-1)
		{
			cout<<"Stack Underflow"<<endl;
		}
		else
		{
			
			x=s2[top];
			top--;
		}
		return x;
	}
	int peek(int s2[],int pos)
	{
		if(top-pos+1<0)
		{
			cout<<"Invalid Position"<<endl;
			return 0;
		}
		else
		{
			int index;
			index=top-pos+1;
			int x;
			x=s2[index];
			return x;
		}
	}
	int stacktop(int s2[])
	{
		int x;
		if(top==-1)
		{
			return 0;
		}
		else
		{
			x=s2[top];
			return x;
		}
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
};
int main()
{
	stack s1;
    int n;
	cout<<"Enter size of stack"<<endl;
	cin>>n;
	s1.size=n;
	int arr[s1.size];
	s1.push(arr,10);
	s1.push(arr,12);
	cout<<s1.peek(arr,2);
	cout<<s1.stacktop(arr)<<endl;
	cout<<s1.isEmpty();
	
	
	
	
	 
}
