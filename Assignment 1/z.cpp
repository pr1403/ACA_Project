#include<bits/stdc++.h>
using namespace std;
int t,l,n,q,a[100005],b[100005],d;
int main(){
	cin>>t;
	while(t--){
		cin>>l>>n>>q;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++)cin>>b[i];
		while(q--){
			cin>>d;
			int x=lower_bound(a+1,a+1+n,d)-a-1;
			int ans=b[x]+(d-a[x])*1.0*(b[x+1]-b[x])/(a[x+1]-a[x]);
			cout<<ans<<' ';
		}
	}
	return 0;
}