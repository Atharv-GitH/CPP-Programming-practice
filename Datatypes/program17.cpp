#include<iostream>

int main(){

	int y = 20;
	int x = 10;

	std::cout << x << std::endl;	// 10				
	std::cout << y << std::endl;	// 20

	int * const ptr = &x;

	std::cout << *ptr << std::endl;	// 10

	x = 30;

	std::cout << x << std::endl;	// 30			
	
	*ptr = 50;
	
	//ptr = &y; --> error

	std::cout << x << std::endl;	// 50			
	
	std::cout << *ptr << std::endl; // 50
}	

