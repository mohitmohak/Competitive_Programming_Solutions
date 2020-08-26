#include<bits/stdc++.h>
#define FASTIO {\
				ios_base::sync_with_stdio(false);\
				cin.tie(NULL);\
				}
#define ll long long int				
#define ff(i,n) for(ll i=0;i<n;i++)
#define vv(arr) vector<ll> arr
#define vvn(arr,n) vector<ll> arr(n)
#define mm(mp) map<ll,ll> mp
#define umm(mp) unordered_map<ll,ll> mp
#define pb push_back
#define mod 1000000007
using namespace std;
int main() {
	FASTIO ll test; cin>>test;
	while(test--) {
		ll n,m;
		cin>>n>>m;
		ll arr[m];
		ff(i,m) cin>>arr[i];
		sort(arr,arr+m);
		ll index=0,turn=1;
		vv(a);
		vv(c);
		for(ll i=1;i<=n;i++) {
			if(index<m && arr[index]==i) index++;
			else {
				if(turn==1) {
					c.pb(i);
					turn=2;
				}
				else {
					a.pb(i);
					turn=1;
				}
			}
		}
		ff(i,c.size()) cout<<c[i]<<" ";
		cout<<'\n';
		ff(i,a.size()) cout<<a[i]<<" ";
		cout<<'\n';
	}
	return 0;
}
