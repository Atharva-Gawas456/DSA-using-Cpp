#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> arr;
	cout << arr.empty() << endl;
	for(int i = 0; i < 10; i++){
		arr.push_back(i);
		cout << arr.size() << " " << arr.capacity()<< endl;
	}
	arr.shrink_to_fit();
	for(int n: arr){
		cout << n << " ";
	}
	cout << endl;
	cout << arr.front() << " " << arr.back() << endl;
	cout << arr.size() << " " << arr.capacity()<< endl;
	
	return 0;
}