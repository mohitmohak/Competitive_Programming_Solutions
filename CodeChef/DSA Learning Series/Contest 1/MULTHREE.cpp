#include<bits/stdc++.h>
#define ll long long int
#define FASTIO {\
				ios_base::sync_with_stdio(false);\
				cin.tie(NULL);\
				}
#define ff(n) for(ll i=0;i<n;i++)
using namespace std;
int main() {
	FASTIO ll test; cin>>test;
	while(test--) {
		ll k,d0,d1;
		cin>>k>>d0>>d1;
		ll s=d0+d1;
		ll times=(k-3)/4;
		ll times_sum=(2*s)%10+(4*s)%10+(8*s)%10+(16*s)%10;
		ll rem=(k-3)-times*4;
		ll sum=s+(s%10)+(times*times_sum);
		for(ll i=1;i<=rem;i++) {
			ll temp=pow(2.0,i);
			sum+=(temp*s)%10;
		}
		if(sum%3==0) cout<<"YES"<<'\n';
		else cout<<"NO"<<'\n';
	}
	return 0;
}
