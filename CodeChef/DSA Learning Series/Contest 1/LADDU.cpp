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
		string origin;
		cin>>n>>origin;
		ll laddus=0;
		while(n--) {
			string activity;
			cin>>activity;
			if(activity=="CONTEST_WON") {
				ll rank;
				cin>>rank;
				if(rank<=20) laddus+=300+20-rank;
				else laddus+=300;
			}
			else if(activity=="TOP_CONTRIBUTOR") laddus+=300;
			else if(activity=="BUG_FOUND") {
				ll severity;
				cin>>severity;
				laddus+=severity;
			}
			else laddus+=50;
		}
		if(origin=="INDIAN") cout<<laddus/200<<endl;
		else cout<<laddus/400<<endl;
	}
	return 0;
}
