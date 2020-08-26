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
		ll n;
		cin>>n;
		vvn(arr,n);
		ff(i,n) cin>>arr[i];
		sort(arr.begin(),arr.end());
		ll res=LLONG_MAX;
		ff(i,n-1) {
			res=min(res,arr[i+1]-arr[i]);
		}
		cout<<res<<'\n';
	}
	return 0;
}
