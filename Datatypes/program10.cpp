#include<iostream>

int x = 100;

int main(){

    int x =10;

    std::cout << x << std::endl;    //10
    
    {

       int x = 20;
       
       std::cout << x << std::endl;     //20

       std::cout << ::x << std::endl;   //100
       
       x = 30;     // int x = 30; --> error :- double initialization
       
       std::cout << x << std::endl;     //30
    }

       std::cout << x << std::endl;     //10
 
       std::cout << ::x << std::endl;   //100
       
       return 0;
}
