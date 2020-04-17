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
	FASTIO
	ll n;
	cin>>n;
	ll arr[n];
	ff(n) cin>>arr[i];
	sort(arr,arr+n);
	ll max=0;
	ff(n) {
		if(arr[i]*(n-i)>max) max=arr[i]*(n-i);
	}
	cout<<max<<endl;
	return 0;
}
