#include <bits/stdc++.h>

using namespace std;

int minimumAbsoluteDifference(int n, vector <int> arr) {
    // Complete this function
    
    sort(arr.begin() ,arr.end());
    int min = arr.at(1) - arr.at(0);
    for(int i = 1; i< arr.size()-1; i++){
        if(arr.at(i+1) - arr.at(i) < min){
            min = arr.at(i+1) - arr.at(i);
        }
    }
    return min;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = minimumAbsoluteDifference(n, arr);
    cout << result << endl;
    return 0;
}