#include <iostream>
using namespace std;

int main(){
	
	string s;
	cin >> s;
	int size = s.size();
	int count = size;
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if (s[i] == s[j]){
				count--;
			}
		}
	}
	if (count % 2 == 0){
		cout << "CHAT WITH HER!";
	}
	else{
		cout << "IGNORE HIM!";
	}
	return 0;
}