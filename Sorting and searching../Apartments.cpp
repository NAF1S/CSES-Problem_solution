#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,q;cin>>n>>k>>q;
	int a[n],b[k];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<k;i++)cin>>b[i];
	sort(a,a+n);
	sort(b,b+k);
	int i=0,j=0;
	int cnt;
	//I will use two pointer medtod
	while(i<n && j<k){
		if(abs(a[i]-b[j])<=q){
			cnt++;
			i++;
			j++;
		}
		else if(a[i]>b[j])j++;
		else i++;
	}
	cout<< cnt;
}
