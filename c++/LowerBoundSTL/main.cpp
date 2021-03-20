#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //first query for size of vector
    int size;
    cin >> size;

    vector<int> vec;
    //queries for values of vector
    for (int i = 0; i < size; i++)
    {
        int input;
        cin >> input;
        vec.push_back(input);
    }
    
    //query for numbers of output queries
    int output_queries;
    cin >> output_queries;

    for (int i = 0; i < output_queries; i++)
    {
        int input;
        cin >> input;

        //output of queries
        auto lower = lower_bound(vec.begin(), vec.end(), input);
        //cout << "Lower val: " << *lower << endl;
        if(*lower == input){
            int index = 0;
            for(auto it = vec.begin(); it != lower; it++){
                index++;
            }
            cout << "Yes " << index + 1 << endl;
        } else{
            int index = 0;
            for(auto it = vec.begin(); it != lower; it++){
                index++;
            }
            cout << "No " << index + 1 << endl;
        }
    }
    return 0;
}