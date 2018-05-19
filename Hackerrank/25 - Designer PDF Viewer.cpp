#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(vector <int> h, string word) {
    // Complete this function
    int l = word.size();
    int max = h[word[0]-97];
    int temp,area;
    for(int i = 0; i < word.size(); i++){
        temp = word[i] - 97;
        if(h[temp] > max){
            max = h[temp];
        }
    }
    area = max * l;
    return area;
}

int main() {
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int result = designerPdfViewer(h, word);
    cout << result << endl;
    return 0;
}