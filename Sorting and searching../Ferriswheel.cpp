#include<bits/stdc++.h>
using namespace std;
//Two pointer method
int main(){
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];//2 3 5 2 3 5 10
	sort(a,a+n);
	int cnt=0;
	int i=0,j=n-1;
	while(i<=j){
		if(a[i]+a[j]<=k){
			i++;
			j--;
			cnt++;
		}
		else{
			j--;
			cnt++;
		}
	}
	cout <<cnt;
}
