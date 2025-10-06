#include <iostream>
using namespace std;
//int main(){
//	int t;
//	cin >> t;
//	cout << endl;
//	int largest = INT_MIN;
//
//	for(int i = 0; i < t; i++){
//		int n;
//		cin >> n;
//		int arr[n];
//		for (int i = 0; i < n; i++){
//			cin >> arr[i];
//		}
//		for (int i = 0; i < n; i++){
//			largest = max(largest, arr[i]);
//		}
//	}
//	cout << largest;
//	return 0;
//}

int main(){
    int t;
    cin >> t;
    

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++){
            cin >> arr[j];
        }
        int largest = INT_MIN;
        for (int j = 0; j < n; j++){
            largest = max(largest, arr[j]);
        }
        cout << largest << endl;
    }
    
    return 0;
}