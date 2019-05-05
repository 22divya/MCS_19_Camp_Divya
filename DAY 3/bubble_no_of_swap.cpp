#include<iostream>
#include<conio.h>
using namespace std;
int bubble(int a[],int n)
{   int cnt=0,temp;
	for(int k=0;k<n-1;k++)
	{
	  for(int i=0;i<n-k-1;i++)
	  {
	  	if(a[i]>a[i+1])
		  {
		  	temp=a[i];
		  	a[i]=a[i+1];
		  	a[i+1]=temp;
		  	cnt+=1;
		  }
	  }	
	}
	return(cnt);
}
int main()
{
	int arr[10],s,i,nswap;
	cin>>s;
	for(i=0;i<s;i++)
	{
	cin>>arr[i];	
	}
	nswap=bubble(arr,s);
	cout<<nswap;
	getch();
	
}


