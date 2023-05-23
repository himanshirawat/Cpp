#include<bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k <= n) {
            cout << k << '\n';
        } 
	    else {
            int ans = 0;
            k = k- n;
            int t = (k - 1) / (n - 1);
            k = k-(t * (n - 1));
            if (t % 2 == 0) {
                ans = n - k;
            } 
		    else {
                ans = 1 + k;
            }
        cout << ans << '\n';
    }
  }
  return 0;
}