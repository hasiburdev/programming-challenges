#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
  
    int t = 1;
    /*is Single Test case?*/ cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void solve()
{
	int product_code1, product_code2, amount1, amount2;
	double  price1, price2, total;
	cin >> product_code1 >> amount1 >> price1;
	cin >> product_code2 >> amount2 >> price2;
	total = price1 * amount1 + price2 * amount2;
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
}
