#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    vector<int> vec;
    cin >> size;    //Input size

    for (int i = 0; i < size; i++){ //Input values
        int input;
        cin >> input;
        vec.push_back(input);
    }

    int pos;
    cin >> pos;    //input pos;

    vec.erase(vec.begin() + pos - 1);

    int left, right;
    cin >>  left >> right;  //Input left, right

    vec.erase(vec.begin() + left - 1, vec.begin() + right - 1);
    
    cout << vec.size() << endl;
    
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }
    return 0;
}
