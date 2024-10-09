#include <iostream>
using namespace std;

int main( ) {
	  int num;
	  cout << "Enter a positive integer: ";
	  cin >> num;
	  
	 
	 if (num <= 1) {
	 	cout << num << " is not a prime number:";
	 } else {
	 	 for (int i = 2; i <= num / 2; ++i)
{
	             if (num % i == 0) {
	             	cout << num << " is not a prime number:";
	             	return 0; // Exit the program if a divisor is founder
	             }

           }
	 
	       cout << num << " is a prime number:";
	       
	 }
	 
	 return 0;
	 
	 
}