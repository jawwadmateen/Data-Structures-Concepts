#include <iostream>
using namespace std;
int main()
{
	int x;
	int *p;
	int arr[6]={7,4,8,2,9,1};
	for(int i=1;i<6;i++)
	{
		int j=i-1;
		x=arr[i];
		while(j>-1 && arr[j]>x)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=x;
	}
	for(int i=0;i<6;i++)
	cout<<arr[i]<<" ";
}
