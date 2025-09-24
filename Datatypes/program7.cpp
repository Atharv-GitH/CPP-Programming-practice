#include<iostream>

int main(){

    int x = 10; // value initialization

    int y(20);  // direact initialization

    std::cout << x << std::endl;

    std::cout << x << std::endl;

    int z {30}; // uniform or brace initialization it is part of list initi. came in cpp11 version

    std::cout << x << std::endl;
    
    return 0;
}
