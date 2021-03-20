#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;


int main(){

    set<int> set;


    int queries;
    cin >> queries;

    for (int i = 0; i < queries; i++){
        int method, x;
        cin >> method >> x;

        switch (method){
        case 1:
            set.insert(x);
            break;
        
        case 2:
            set.erase(x);
            break;
    
        case 3:
            if(set.end() == set.find(x)){
                cout << "No" << endl;
            }else{
                cout << "Yes" << endl;
            }
            break;
    
        default:
            break;
        }
    }
    return 0;
}