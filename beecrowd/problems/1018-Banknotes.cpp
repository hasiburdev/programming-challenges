#include<iostream>
using namespace std;

#define endl "\n"

int main() {

	long int n, initial_value;
	int n100, n50, n20, n10, n5, n2, n1;
	cin >> n;

	initial_value = n;
	n100 = n / 100;
	n -= n100 * 100;
	n50 = n / 50;
	n -= n50 * 50;
	n20 = n / 20;
	n -= n20 * 20;
	n10 = n / 10;
	n -= n10 * 10;
	n5 = n / 5;
	n -= n5 * 5;
	n2 = n / 2;
	n -= n2 * 2;
	n1 = n / 1;

	cout << initial_value << endl;
	cout << n100 << " nota(s) de R$ 100,00" << endl;
	cout << n50 << " nota(s) de R$ 50,00" << endl;
	cout << n20 << " nota(s) de R$ 20,00" << endl;
	cout << n10 << " nota(s) de R$ 10,00" << endl;
	cout << n5 << " nota(s) de R$ 5,00" << endl;
	cout << n2 << " nota(s) de R$ 2,00" << endl;
	cout << n1 << " nota(s) de R$ 1,00" << endl;

	return 0;
}