#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int n, cows;
int positions[N];

bool canPlaceCows(int minDist){
	int last_pos = -1;
	int cows_ct = cows;
	for(int i=0; i<n; i++){
		if(positions[i] - last_pos >= minDist || last_pos == -1){
			cows_ct--;
			last_pos = positions[i];
		}
		if(cows_ct == 0) break; 
	}
	return cows_ct==0;
}

int main(){
	cin>> n>>cows;
	for(int i=0; i<n; i++){
		cin>>positions[i];
	}
	sort(positions, positions+n);
	long long lo=0, hi=1e9, mid;
	while(hi-lo>1){
		mid = (hi+lo) / 2;
		if(canPlaceCows(mid)){
			lo = mid;
		}else{

			hi = mid-1;
		}
	}
	if(canPlaceCows(hi)){
		cout<<hi<<endl;
	}else{
		cout<<lo<<endl;
	}
}