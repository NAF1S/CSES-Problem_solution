#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vp;
int main(){
	int n;cin>>n;
    set<int> s;
    for(int i=1;i<=n;i++){
    	int a;cin>>a;
    	s.insert(a);
	}
	cout << s.size();
    return 0;
}
