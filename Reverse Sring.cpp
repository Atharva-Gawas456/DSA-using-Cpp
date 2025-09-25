#include <iostream>
using namespace std;

int main(){
	string s;
	cin >> s;
	int w = s.length();
	for(int i = 0; i < w / 2; i++){
		swap(s[i], s[w - i - 1]);
	}
	cout << s;
	return 0;
}