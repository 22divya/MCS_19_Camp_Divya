#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    int low=2, high, i, flag,count=0;
    cin>>high;
    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
           { 
            count++;
		   }
            
	 ++low;
    }
    cout<<count;
    getch();
    return 0;
}
