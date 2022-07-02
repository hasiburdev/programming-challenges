#include<iostream>
#include<cmath>
#include<bits/stdc++.h>

using namespace std;

int main() {
	double x1, y1, x2, y2, distance;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	distance = sqrt(pow((x1 -x2), 2) + pow((y1 - y2), 2));
	cout << fixed << setprecision(4) << distance << endl;
	return 0;
}