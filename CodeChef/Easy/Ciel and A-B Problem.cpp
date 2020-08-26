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
	FASTIO
	ll a,b;
	cin>>a>>b;
	ll temp=(a-b)%10;
	temp==9?(temp=8):(temp+=1);
	ll res=(a-b)/10;
	res=res*10+temp;
	cout<<res<<'\n';
	return 0;
}
