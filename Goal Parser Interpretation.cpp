#include <iostream>
using namespace std;

int main(){
	string s;
	cin >> s;
//	cout << s.find("(al)");
	for(int i = 0; i < s.length(); i++){
		int s1 = s.find("()");
		s.replace(s1, 2, "o");
		int s2 = s.find("(al)");
		s.replace(s2, 4, "al");
	}
	
	cout << s;

	return 0;
}