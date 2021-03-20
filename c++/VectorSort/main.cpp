#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>



int main(){
    int size;
    std::cin >> size;
    std::vector<int> vec;

    for (int i = 0; i < size; i++){
        int input;
        std::cin >> input;
        vec.push_back(input);
    }
    
    std::sort(vec.begin(), vec.end());
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        std::cout << *it << " ";
    }

    return 0;
}