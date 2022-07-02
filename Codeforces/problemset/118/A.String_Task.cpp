#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main() {
    optimize();

    string s, answer;

    cin >> s;
    for ( auto c: s) {
        c = tolower(c);
        if(!isVowel(c)) {
            answer += '.';
            answer += c;
        }
    }
    cout << answer << endl;
 
    return 0;
}