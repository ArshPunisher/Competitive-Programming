#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> masks(n);
	for(int i=0; i<n; i++){
		int mask = 0;
		int num_days;
		cin>>num_days;
		for(int j=0; j<num_days; j++){
			int days;
			cin>>days;
			mask = (mask | (1<<days));
		}
		masks[i]=mask;
	}

	int max_days = 0;
	int person1 = -1;
	int person2 = -1;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			int inter = (masks[i] & masks[j]);
			int common_days = __builtin_popcount(inter);
			// int max_days = max(max_days, common_days);
			if(max_days<common_days){
				max_days = common_days;
				person1 = i+1;
				person2 = j+1;
			}
		}
	}
	cout<<person1<<" "<<person2<<" "<<max_days<<endl;
}