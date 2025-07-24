#include<iostream>
#include"htest.hpp"
int main(){

    int a[5]={12,56,85,45,55};
    int v;
    std::cout<<"please enter size: ";
    std::cin>>v;
    std::cout<<v<<std::endl;
    updateList(&v,a,(sizeof(a)/4));
    for(int i=0;i<(sizeof(a)/4);i++){
        std::cout << a[i] << " "<<std::endl;
    }   
        
    std::vector<int> vec={12,56,85,45,55};
    std::cout<<vec.size()<<std::endl;
    b(&vec);
    return 0;

}