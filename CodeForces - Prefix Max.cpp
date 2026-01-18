#include<iostream>
using namespace std;

void maximum(int arr[], int n){
	int maxi = arr[0];
	for(int i = 0; i < n; i++){
		if(maxi<arr[i]) maxi = max(maxi, arr[i]);
	}
	cout << maxi*n << endl;
}
int main(){
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		
		maximum(arr, n);
	}
	return 0;
}