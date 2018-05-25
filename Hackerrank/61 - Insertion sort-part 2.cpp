#include <bits/stdc++.h>

using namespace std;

void insertionSort2(int n, vector <int> arr) {
    // Complete this function
    for(int i = 2 ; i<= n; i++){
        sort(arr.begin(), arr.begin() + i);
        
        for(int j = 0 ; j<arr.size(); j++){
            cout<<arr.at(j)<<" ";
        }
        cout<<"\n";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    insertionSort2(n, arr);
    return 0;
}
