#ifndef htest_hpp
#define htest_hpp

#include <iostream>
#include <vector>

// 將指標所指的值設為 20
void updateValue(int *numptr);

// 將陣列依據 valuePtr 的值進行前綴和更新
bool updateList(int *valuePtr, int *arr, int size);

// 對 std::vector<int> 指標進行類似前綴和的操作
bool b(std::vector<int> *value);

// 對 std::vector<int> 參考進行類似前綴和的操作
bool c(std::vector<int> &value);

#endif // MY_FUNCTIONS_HPP
