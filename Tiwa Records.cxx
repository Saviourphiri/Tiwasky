#include <iostream>
using namespace std;

int main( ) {
	  int number;
	  
	  
	  do {
	  	 cout << "Enter  a positivenumber: ";
	  	 cin >> number;
	  } while (number <= 0);
	  
	  cout << "You entered a positive number: " << number << endl;
	  
	  return 0;
	  
}