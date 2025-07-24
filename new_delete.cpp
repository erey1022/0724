#include<iostream>

int main(){
    int a = 3;
    
    int*p=new int;
    *p=3;
    std::cout<<*p<<std::endl;
    delete p;
    // std::cout<<*p<<std::endl;
    return 0;
}