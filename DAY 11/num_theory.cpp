#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
int main()
{
	int a,b,c,m,r1,r2,r3;
	cin>>a>>b>>c>>m;
	int g=GCD(c,m);
    if(g==1)
	{
		r1=pow(a,b);
		r2=r1/c;
		r3=r2%m;
		cout<<r3;
	}
	getch();
	
}
