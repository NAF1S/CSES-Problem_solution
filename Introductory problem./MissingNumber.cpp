#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vp;
int main(){
	int n;cin >>n;
	set<int>s;
	for(int i=1;i<=n-1;i++){
		int a;cin>>a;
		s.insert(a);
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(s.count(i)==0)ans=i;
	}
	cout<<ans;
    return 0;
}
