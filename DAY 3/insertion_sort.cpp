#include<iostream>
#include<conio.h>
using namespace std;
void insertion(int a[],int n)
{ 
    int temp,j;
	for(int i=0;i<n;i++)
	{
		temp=a[i];
		j=i;
		
		while(j>0&&temp<a[j-1])
		{
			a[j]=a[j-1];
			j=j-1;
		}
		a[j]=temp;
	}
	
}

int main()
{
	int arr[10],s,i;
	cin>>s;
	for(i=0;i<s;i++)
	{
	cin>>arr[i];	
	}
	//int s=sizeof(arr)/sizeof(arr[0]);
	insertion(arr,s);
	for(int i=0;i<s;i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
	
}

