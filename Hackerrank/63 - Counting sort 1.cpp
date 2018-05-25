#include <bits/stdc++.h>

using namespace std;

vector <int> countingSort(vector <int> arr) {
    // Complete this function
    
    vector<int> b(100,0);
    int temp;
    
    for(int i = 0; i < arr.size(); i++){
        temp = arr.at(i);
        b.at(temp)++;
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
    vector <int> result = countingSort(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
