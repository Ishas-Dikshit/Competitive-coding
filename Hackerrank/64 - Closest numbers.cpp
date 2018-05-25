#include <bits/stdc++.h>

using namespace std;

vector <int> closestNumbers(vector <int> arr) {
    // Complete this function
    sort(arr.begin(), arr.end());
    int min = arr[1] - arr[0];
    vector<int> b;
    for(int i = 0 ; i< arr.size()-1; i++){
        if(arr[i+1] - arr[i] < min){
            min = arr[i+1] - arr[i];
        }
    }
    for(int i = 0; i<arr.size()-1;i++){
        if(arr[i+1] - arr[i] == min){
            b.push_back(arr[i]);
            b.push_back(arr[i+1]);
        }
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = closestNumbers(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
