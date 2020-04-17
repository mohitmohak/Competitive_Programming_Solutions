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
		ll arr[n];
		ff(n) cin>>arr[i];
		ll count=1;
		for(ll i=1;i<n;i++) {
			if(arr[i]<=arr[i-1]) count++;
			else arr[i]=arr[i-1];
		}
		cout<<count<<endl;
	}
	return 0;
}
