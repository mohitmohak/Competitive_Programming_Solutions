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
		string s;
		cin>>s;
		ll start[26]={0};
		ll end[26]={0};
		ff(s.length()/2) {
			start[s[i]-97]++;
			end[s[s.length()-1-i]-97]++;
		}
		bool check=true;
		ff(26) {
			if(start[i]!=end[i]) {
				check=false;
				break;
			}
		}
		if(check) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
