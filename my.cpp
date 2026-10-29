#include<iostream>
#include<cstdio>

int add (int a , int b ) {

    return a + b;
};


int (*myfunction) (int a , int b);





const char* qwe[]  = {"vova","petia","kasia","nazik"};

char name = 'p';
std::string names = "vova";

enum Names {vova = 1, petia = 2, alex = 3};

int main (){

    
myfunction = &add;


std::cout<<&qwe[0]<<std::endl;
std::cout<<&qwe[1]<<std::endl;
std::cout<<&qwe[2]<<std::endl;
std::cout<<&qwe[3]<<std::endl;

for (int i = 0 ; i<= 4; i++) {
    std::cout<<&qwe[i]<<std::endl;
}




    return 0;
}