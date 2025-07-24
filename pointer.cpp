#include<iostream>
void updateValue(int *numptr){
    *numptr = 20;
}
void updateList(int *valuePtr, int size){
    for(int i=0;i<size;i++){
        valuePtr[i]*=10;
    }
}
int main(){

    int i;
    int a[5]={12,56,85,45,55};
    int v;
    std::cout<<"please enter :";
    std::cin>>v;
    int *ptr=&v;
    if(*ptr%2==0){
        std::cout<<"偶數\n";
    } else{
        std::cout<<"奇數\n";
    }

 

    


    int num=10;
    int *numPtr = &num;
    int numCallByValue;
    numCallByValue = num;
    num = 11;


    std::cout<<"num call by value "<<numCallByValue<<std::endl;
    std::cout<<&num<<numCallByValue<<std::endl;
    std::cout<<*numPtr<<std::endl;
    std::cout<<numPtr<<std::endl;
    updateValue(&num);
    std::cout<<num<<std::endl;



    return 0;
}