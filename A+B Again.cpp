#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, rem;
		int ans = 0;
		cin >>n;
		rem = n % 10;
		while (n > 0){
			n = (n / 10);
			ans += n;
		}
		cout << ans + rem << endl;	
	}
	return 0;
}
