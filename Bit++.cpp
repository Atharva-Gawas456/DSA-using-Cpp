#include <iostream>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	int count = 0;
	for(int i = 0; i < n; i++){
		cin >> s;
		if (s == "X++" || s == "++X"){
			count++;
		}
		else{
			count--;
		}
	}
	
	cout << count;
	return 0;
}