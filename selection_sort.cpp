#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<< arr[i]<< " ";
	}
	cout<<endl;
}

void swap(int arr[], int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void selection_sort(int arr[], int n){
	for(int i=0; i<n; i++){
		int min_ind = i;
		for(int j=i+1; j<n; j++){
			if(arr[min_ind]>arr[j]){
				min_ind = j;
			}
		}
		swap(arr, min_ind, i);
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
	selection_sort(array, n);
	print(array, n);

}