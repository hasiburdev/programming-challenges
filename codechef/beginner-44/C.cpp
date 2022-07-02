#include<iostream>
using namespace std;

int main() {
    long long int t, N, X, total_calories, pvalue;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> N >> X;
        total_calories = X;
        for(long long i=1; i<N; i++) {
            total_calories += total_calories;        
        }
        cout << total_calories << endl;
        
    }
    return 0;nnet
}