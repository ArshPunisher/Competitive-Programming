#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int, multiset<string>> marks_map;
	int n;
	cin>>n;
	for(int i=0; i<n; ++i){
		int marks;
		string name;
		cin>>name>>marks;
		marks_map[-1*marks].insert(name);
	}
	for(auto m_map: marks_map){
		auto &student = m_map.second;
		int marks = m_map.first;
		for(auto std : student){
			cout<<std<<" "<<-1*marks<<endl;
		}
	}
}