#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ 
int i=0,sum=0;
    while(i<1000)
	{  
	    if((i%3==0)||(i%5==0))
		{
			sum+=i;
		}
		i++;
	}
	cout<<"sum="<<sum;
	getch();
}
