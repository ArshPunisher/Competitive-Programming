#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<< arr[i]<< " ";
	}
	cout<<endl;
}

void bubble_Sort(int arr[], int n){
	int temp;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0; i<n; i++){
		int j;
		cin>>j;
		array[i] = j;
	}
	print(array, n);
	bubble_Sort(array, n);
	print(array, n);

}