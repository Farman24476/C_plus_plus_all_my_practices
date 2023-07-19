#include<bits/stdc++.h>
using namespace std;

string containsRatul(const string& str) {
    string word;
    istringstream iss(str);
    while (iss >> word) {
        if (word == "Ratul") {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    string input;
    getline(cin, input);

    cout << containsRatul(input) << endl;
    return 0;
}
