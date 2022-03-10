#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b){
	if(a.first != b.first){
		return a.first > b.first;
	}
	return a.second < b.second;
}
  
int main(){
	int n;
	cin>>n;
	vector<pair<int, string>>	vec(n);
	for(int i=0; i<n; i++){
		cin>>vec[i].second>>vec[i].first;
	}
	sort(vec.begin(), vec.end(), cmp);
	for(auto monk: vec){
		cout<<monk.second<<" "<<monk.first<<endl;
	}
}