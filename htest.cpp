#include<iostream>
#include<vector>
void updateValue(int *numptr){
    *numptr = 20;
}
bool updateList(int *valuePtr, int *arr, int size){
    if(*valuePtr!=size &&*valuePtr<1){
        std::cout<<"輸入錯誤!"<<std::endl;
        return false;
    }
    for(int i=1;i<*valuePtr;i++){
        arr[i]+=arr[i-1];
    }
    return true;
}
bool b(std::vector<int> *value){
    //if((*value).size()<1){
    if(value->size()<1){
        return false;
    }
    for (int i = 0; i < value->size(); i++){
        (*value)[i]=(*value)[i-1]+(*value)[i];
    }
    return true;
}
bool c(std::vector<int> &value){
    if(value.size()<1){
        return false;
    }
    for (int i = 0; i < value.size(); i++){
        value[i]=value[i-1]+value[i];
    }
    return true;
}