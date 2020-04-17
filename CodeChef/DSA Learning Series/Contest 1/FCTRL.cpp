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
		ll n;
		cin>>n;
		ll count=0;
		while(n>=5) {
			count+=(n/5);
			n/=5;
		}
		cout<<count<<endl;
	}
	return 0;
}
