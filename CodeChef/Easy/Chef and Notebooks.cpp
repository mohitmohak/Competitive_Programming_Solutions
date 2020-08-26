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
		ll x,y,k,n;
		cin>>x>>y>>k>>n;
		ll p[n],c[n];
		ff(i,n) cin>>p[i]>>c[i];
		x-=y;
		bool check=false;
		ff(i,n) {
			if(x<=p[i] && c[i]<=k) {
				check=true;
				break;
			}
		}
		if(check) cout<<"LuckyChef"<<'\n';
		else cout<<"UnluckyChef"<<'\n';
	}
	return 0;
}
