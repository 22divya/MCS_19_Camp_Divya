// CPP Program to print the 
// 'n' lobes of DNA pattern 
#include <bits/stdc++.h> 
#include<conio.h>
using namespace std; 

// Function to print upper half 
// of the DNA or the upper lobe 
void printUpperHalf(string str) 
{ 
	char first, second; 
	int pos = 0; 
	
	// Each half of the DNA is made of 
	// combination of two compounds 
	for (int i = 1; i <= 4; i++) { 

		// Taking the two carbon 
		// compounds from the string 
		first = str[pos]; 
		second = str[pos + 1]; 
		pos += 2; 
		
		for (int j = 4 - i; j >= 1; j--) 
			cout << " "; 
		cout << first; 
		for (int j = 1; j < i; j++) 
			cout << "--"; 
		cout << second << endl; 
	} 
} 

// Function to print lower half 
// of the DNA or the lower lobe 
void printLowerHalf(string str) 
{ 
	char first, second; 
	int pos = 0; 
	for (int i = 1; i <= 4; i++) { 

		first = str[pos]; 
		second = str[pos + 1]; 
		pos += 2; 
		
		for (int j = 1; j < i; j++) 
			cout << " "; 
		cout << first; 
		for (int j = 4 - i; j >= 1; j--) 
			cout << "--"; 
		cout << second << endl; 
	} 
} 

// Function to print 'n' parts of DNA 
void printDNA(string str[], int n) 
{ 
	for (int i = 0; i < n; i++) { 

		int x = i % 6; 
		
		// Calling for upperhalf 
		if (x % 2 == 0) 
			printUpperHalf(str[x]); 
		else
		
			// Calling for lowerhalf 
			printLowerHalf(str[x]); 
	} 
} 

// Driver function 
int main() 
{ 

	int n = 8; 
	
	// combinations stored in the array 
	string DNA[] = { "ATTAATTA", "TAGCTAGC", "CGCGATAT", 
				"TAATATGC", "ATCGTACG", "CGTAGCAT" }; 
	printDNA(DNA, n); 
	getch();
	return 0; 
} 

