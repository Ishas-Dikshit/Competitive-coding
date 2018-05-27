#include <bits/stdc++.h>

using namespace std;

vector <int> icecreamParlor(int m, vector <int> arr) {
    // Complete this function
    vector<int> b;
    for(int i = 0; i< arr.size()-1; i++){
        for(int j = i+1; j< arr.size(); j++)
        if(arr[i] + arr[j] == m){
            b.push_back(i+1);
            b.push_back(j+1);
            break;
        }
    }
    return b;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int m;
        cin >> m;
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
           cin >> arr[arr_i];
        }
        vector <int> result = icecreamParlor(m, arr);
        for (ssize_t i = 0; i < result.size(); i++) {
            cout << result[i] << (i != result.size() - 1 ? " " : "");
        }
        cout << endl;


    }
    return 0;
}