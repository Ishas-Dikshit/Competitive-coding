#include <bits/stdc++.h>

using namespace std;

int maximumToys(vector <int> prices, int k) {
    // Complete this function
    int count = 0;
    sort(prices.begin(),prices.end());
        for(int i = 0 ; i < prices.size(); i++){
            if(prices[i] < k){
                k = k- prices[i];
               count++; 
            }
        }

    return count;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> prices(n);
    for(int prices_i = 0; prices_i < n; prices_i++){
       cin >> prices[prices_i];
    }
    int result = maximumToys(prices, k);
    cout << result << endl;
    return 0;
}