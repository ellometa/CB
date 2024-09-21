#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, c;   cin >> n >> c;
    int arr[n+1];
	int sum=0;
	int sumsq=0;
	for (int i=1; i<=n; i++) {
		cin>>arr[i];
		sum+=arr[i];
		sumsq+=arr[i]*arr[i];
	}
	int r=1000000000/sqrt(n);
	int l=0;
	int ans;
	while (l<=r) {
		int mid=(l+r)/2;
		int C=4*n*mid*mid;
		C+=sum*4*mid;
		C+=sumsq;
		if (C<=c) {
			ans=mid;
			l=mid+1;
		}
		else {
			r=mid-1;
		}
	}
	cout<<ans<<endl;


}

int32_t main() {
    IOS;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}