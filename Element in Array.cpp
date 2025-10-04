#include <iostream>
using namespace std;
int main(){
	
	int x;
	int n;
	string ans;
	cin >> n;
	cin >> x;
	int arr[n];
	int size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < size; i++){
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++){
		if (arr[i] == x){
			ans = "YES";
			break;
		}
		else{
			ans = "NO";
		}
	}
	cout << ans;
	return 0;
}