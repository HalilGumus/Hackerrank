#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {

    map <string, int> map;

    int queries;
    cin >> queries;

    for (int i = 0; i < queries; i++){
        int method, y;
        string x;

        cin >> method >> x;

        switch (method){
        case 1:
            cin >> y;
            map[x] = map[x] + y;
            break;
        case 2:
            map.erase(x);
            break;
        case 3:
            if(map[x]){
                cout << map[x] << endl;
            }else{
                cout << 0 << endl;
            }
            break;
        
        default:
            break;
        }
    }
    return 0;
}