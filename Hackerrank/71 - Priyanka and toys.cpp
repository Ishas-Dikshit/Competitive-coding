#include <bits/stdc++.h>

using namespace std;

int toys(vector <int> w) {
    // Complete this function
   sort(w.begin(), w.end());
    int min = w[0];
    int container = 1;
    for(int i = 1 ; i < w.size(); i++){
            if(w.at(i) - min >4){
                container++;
                min = w.at(i);
            }
        }
    return container;
}

int main() {
    int n;
    cin >> n;
    vector<int> w(n);
    for(int w_i = 0; w_i < n; w_i++){
       cin >> w[w_i];
    }
    int result = toys(w);
    cout << result << endl;
    return 0;
}