#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,m,a[20];
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
    }
    for(int j=n;j>0;j--)
    {
    	if(a[j]==m)
    	{
    		cout<<j+1;
    		break;
		}	
	}
	getch();
	return 0;
}
