#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int pf[N];

int main(){
	int n;
	cin>> n;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		a[i] += a[i-1];
	}
	int q;
	cin>>q;
	while(q--){
		int l, r;
		cin>>l>>r;
		cout<<a[r] - a[l-1]<<endl;
	}
}