#include<bits/stdc++.h>
#define ll long long int
#define FASTIO {\
				ios_base::sync_with_stdio(false);\
				cin.tie(NULL);\
				cout.tie(NULL);\
				}
#define ff(n) for(ll i=0;i<n;i++)
using namespace std;
int main() {
	FASTIO ll test; cin>>test;
	while(test--) {
		ll g;
		cin>>g;
		while(g--) {
			ll i,n,q;
			cin>>i>>n>>q;
			ll res=n/2;
			if(n%2!=0 && i!=q) res=n/2+1;
			cout<<res<<endl;
		}
	}
	return 0;
}
