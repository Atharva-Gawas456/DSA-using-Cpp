#include <iostream>
using namespace std;

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
	int smallest = INT_MAX;
	for(int i = 0; i < size; i++){
//		if (marks[i] < smallest){
//			smallest = marks[i];
//		}
		smallest = min(marks[i], smallest);
	}
	cout << smallest << endl;
	
	int largest = INT_MIN;
	for(int i = 0; i < size; i++){
//		if (marks[i] > largest){
//			largest = marks[i];
//		}
		largest = max(marks[i], largest);
	}
	cout << largest;
	return 0;
}