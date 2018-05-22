#include <bits/stdc++.h>

using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s) {
    int l = s.size();
    int i=0;
    int j = l-1;
    int c = 0;
    while(i != l/2){
        int temp;
        if(s[i] != s[j]){
                temp = abs(s[i] - s[j]);
                c = c + temp;
            
        }
        i++;
        j--;
    }
    return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}