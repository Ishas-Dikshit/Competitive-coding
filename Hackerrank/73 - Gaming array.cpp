#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the gamingArray function below.
int gamingArray(vector<int> arr) {
    long long int max;
    long long int k = 0;
    int val;
    max = arr[0];
    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i] >max){
            max = arr[i];
            k++;
        }
    }

    if(k %2==1){
        val = 1;
    }else{
        val = 0;
    }
    return val;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        int arr_count;
        cin >> arr_count;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split_string(arr_temp_temp);

        vector<int> arr(arr_count);

        for (int i = 0; i < arr_count; i++) {
            int arr_item = stoi(arr_temp[i]);

            arr[i] = arr_item;
        }
    string r;
        int result = gamingArray(arr);
        if(result == 1){
            r = "ANDY";
        }else{
            r = "BOB";
        }

        fout << r << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}