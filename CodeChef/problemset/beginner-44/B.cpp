#include<iostream>
using namespace std;

int main() {
    int t, A, B, max;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> A >> B;
        max = A > B ? A: B;
        cout << 7 - max << endl;
    }
    return 0;
}