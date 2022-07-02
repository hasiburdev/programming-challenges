#include<iostream>
using namespace std;

int main() {
    int t, cost, number_of_weeks;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin>> number_of_weeks >> cost;
        cout << number_of_weeks * cost << endl;
    }
    return 0;
}