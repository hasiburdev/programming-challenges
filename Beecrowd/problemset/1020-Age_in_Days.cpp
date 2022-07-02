#include<iostream>
using namespace std;

#define endl "\n"

int main() {
	int n, years, months, days;
	cin >> n;
	years = n / 365;
	n-=365 * years;
	months = n/30;
	n-=30 * months;
	days = n;
	cout << years << " ano(s)" << endl;
	cout << months << " mes(es)" << endl;
	cout << days << " dia(s)" << endl;
	return 0;
}