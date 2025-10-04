#include <iostream>
using namespace std;

//int linearsearch(int arr[], int target){
//	int size = sizeof(arr) / sizeof(int);
//	for(int i = 0; i < size; i++){
//		if (arr[i] == target){
//			return i;
//		}
//		else{
//			return -1;
//		}	
//	}
//}

int main(){
	
	int marks[5] = {69, 45, 60, 47, 87};
	int size = sizeof(marks) / sizeof(int);
	
//	int size = 5;
//	int marks[size];
//	for(int i = 0; i < size; i++){
//		cin >> marks[i];
//	}
//	
//	for (int i = 0; i < size; i++){
//		cout << marks[i] << endl;
//	}

// INT MAX
//	int smallest = INT_MAX;
//	for(int i = 0; i < size; i++){
////		if (marks[i] < smallest){
////			smallest = marks[i];
////		}
//		smallest = min(marks[i], smallest);
//	}
//	cout << smallest << endl;
//	
//	int largest = INT_MIN;
//	for(int i = 0; i < size; i++){
////		if (marks[i] > largest){
////			largest = marks[i];
////		}
//		largest = max(marks[i], largest);
//	}
//	cout << largest;
//	int target = 45;
//	cout << linearsearch(marks, target);
	
	int start = 0;
	int end = size - 1;
	
	while (start < end){
		swap(marks[start], marks[end]);
		start++;
		end--;
	}
	cout <<marks[0];
	return 0;
}

