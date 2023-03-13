#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define pb push_back
#define pi acos(-1)
#define lightSpeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const unsigned int M = 1000000007;

int main(int argc, char const *argv[]){
	int n;cin>>n;
	int idx = 0;
	set<pair<int,int>>event;
	int cnt=0;
	int sum =0;
	while(n--){
		int start,end;cin>>start>>end;
		event.insert({start,1});
		event.insert({end,-1});
	}
	for(auto x:event){
		sum+=x.second;
		cnt=max(cnt,sum);
	}
	cout<<cnt;
}
