#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		long long int x;
		cin >> x;
		string s;
		if(x < 3){
			cout << "NO";
		}
		for(int i = 3; i <= x/2; i = i + 2){
			if(x%i == 0){
				s = "YES";
				break;
			}else{
				s = "NO";
			}
		}
		cout << s << endl;
	}
	return 0;
	
}