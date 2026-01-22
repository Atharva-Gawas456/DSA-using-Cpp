#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int arr[3];
		
		for(int i = 0; i < 3; i++){
			cin >> arr[i];
		}
		for(int i = 1; i < 3; i++){
			int key = arr[i];
			int j = i - 1;
			
			while(j >= 0 && arr[j] > key){
				arr[j+1] = arr[j];
				j--;
			}
			arr[j+1] = key;
		}
		cout << arr[1] << endl;
	}
	return 0;
}