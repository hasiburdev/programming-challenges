#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int distance;
	double fuel, avg_consumption;
	cin >> distance;
	cin >> fuel;
	avg_consumption = double(distance) / fuel;
	cout << fixed << setprecision(3) << avg_consumption << " km/l"<< endl;
	return 0;
}