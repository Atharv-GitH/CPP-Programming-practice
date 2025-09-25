#include<iostream>

int main(){

	int y = 20;
	int x = 10;

	std::cout << x << std::endl;				
	std::cout << y << std::endl;

	int const * const ptr = &x;

	std::cout << *ptr << std::endl;

	x = 30;

	std::cout << x << std::endl;				
	
	//*ptr = 50; --> error
	
	//ptr = &y; --> error
	
	x = 50;		// no error becz x is const in perspective of ptr it is not const directly

	std::cout << *ptr << std::endl;				
	std::cout << x << std::endl;				
}	

