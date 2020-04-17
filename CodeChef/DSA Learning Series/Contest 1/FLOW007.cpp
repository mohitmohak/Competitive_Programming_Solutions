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
		ll reverse=0;
		while(n>0) {
			reverse=reverse*10+n%10;
			n/=10;
		}
		cout<<reverse<<endl;
	}
	return 0;
}
