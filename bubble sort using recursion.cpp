#include <iostream>
using namespace std;
int recsort(int s,int a,int p);
int arr1[5]={6,1,8,3,2};
int recsort(int s,int a,int p)
{
  int temp,i,j,k;
  temp=0;
  if(a<s)
  {
if((p<(s-a-1)))
{
  if(arr1[p]<arr1[p+1])
  {
  	temp=arr1[p];
  	arr1[p]=arr1[p+1];
  	arr1[p+1]=temp;
  	p++;
  	recsort(s,a,p);
  }
  else
  {
  	p++;
  	recsort(s,a,p);
  }
  
  
}
else
{
  	a++;
  	recsort(s,a,0);
}
 }
 else 
 return 0;
}

int main()
{
	int i;
	int size=5;
	recsort(size,0,0);
	cout<<"Sorted Array"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr1[i]<<" ";
	}
	
	
}
