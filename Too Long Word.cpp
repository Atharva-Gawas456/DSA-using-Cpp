#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> s;
		int w = s.length();
		if (w <= 10){
			cout << s <<endl;
		}
		else{
			char first = s.at(0);
			char last = s.at(w-1);
			string d = to_string(w-2);
			cout << first + d + last <<endl;
		}
		
	}
    return 0;
}