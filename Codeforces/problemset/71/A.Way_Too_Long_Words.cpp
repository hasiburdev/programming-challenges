#include <iostream>
using namespace std;

int main() {
	int n;
	string str;
	cin >> n;
	for(int i=0; i<=n; i++) {
		cin >> str;
		int len = str.length();
		if(len > 10) {
			int showLength = len-2;
			cout << str[0] << showLength << str[len -1] << endl;
		} else {
			cout << str << endl;			
		}
	}
	return 0;
}