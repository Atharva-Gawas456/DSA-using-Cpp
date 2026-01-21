#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& arr){
	
	for(int i = 0; i < arr.size() - 1; i++){
		int smallestIDX = i;
		
		for(int j = i+1; j < arr.size(); j++){
			if(arr[j] < arr[smallestIDX]){
				smallestIDX = j;
			}
		}
		swap(arr[i], arr[smallestIDX]);
	}
}


int main(){
	
	vector<int> arr = {5, 3, 7, 2, 9};
	selectionSort(arr);
	
	for(int n: arr){
		cout << n << " ";
	}
	
	return 0;
}