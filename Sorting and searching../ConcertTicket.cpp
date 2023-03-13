#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define pb push_back
#define pi acos(-1)
#define lightSpeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const unsigned int M = 1000000007;
 
int main(int argc, char const *argv[]){
	int n,m;cin>>n>>m;
	set<pair<int,int>> price;
	int idx =0;
	while(n--){
		int x;cin>>x;
		price.insert({x,++idx});
	}
    while(m--){
    	int x;cin>>x;
    	auto match = price.lower_bound({x+1,0});
    	if(match == price.begin()){
    		cout<<-1<<nl;
    	}
    	else{
    		match--;
    		cout<<(*match).first<<nl;
    		price.erase(match);
    	}
    }
}
