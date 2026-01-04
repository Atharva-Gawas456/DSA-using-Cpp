#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	
	vector<int> arr;
	for (int i = 1; i < 6; i++){
		arr.push_back(i);
		cout << arr.size() << " " << arr.capacity() << endl;
	}
	arr.push_back(7);
	cout << arr.size() << " " << arr.capacity() << endl;
	return 0;
}