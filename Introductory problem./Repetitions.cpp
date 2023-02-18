#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vp;
int main(){
	string s;cin>>s;//AGGCCTCCCCCTTT
	int cnt=0,ans=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==s[i+1])cnt++;//
		else{
			ans=max(ans,cnt);
			cnt=0;
		}
	}
	cout<<ans+1;
    return 0;
}
