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

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low-1;
	for(int j=low; j<high; j++){
		if(arr[j]<pivot){
			i++;
			swap(arr, i, j);
		}
	}
	swap(arr, i+1, high);
	return i+1;
}

void quick_Sort(int arr[], int low, int high){
	if(low<high){
		int pi = partition(arr, low, high);
		quick_Sort(arr, low, pi-1);
		quick_Sort(arr, pi+1, high);
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
	quick_Sort(array, 0, n-1);
	print(array, n);

}