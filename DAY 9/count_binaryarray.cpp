// C++ program to Count 
// the number of 1's and 0's 
// in a binary array 

#include <bits/stdc++.h> 
#include<conio.h>
using namespace std; 

// Function to check 
// if bit is 1 or not 
bool isOne(int i) 
{ 
	if (i == 1) 
		return true; 
	else
		return false; 
} 

// Driver Code 
int main() 
{ 

	int a[] = { 1, 0, 0, 1, 0, 0, 1 }; 

	int n = sizeof(a) / sizeof(a[0]); 

	int count_of_one = count_if(a, a + n, isOne); 

	cout << "1's: " << count_of_one << endl; 
	cout << "0's: " << (n - count_of_one) << endl; 
    getch();
	return 0; 
} 

