#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int largest1 = INT_MIN;
        int largest2 = INT_MIN;
        for(int i = 0; i < n; i++){
            largest1 = max(largest1, a[i]);
        }
        for (int i = 0; i < n; i++){
            if (a[i] == largest1){
                a[i] = a[i] - largest1;
            }
        }
        for(int i = 0; i < n; i++){
            largest2 = max(largest2, a[i]);
            
        }
        cout << largest1 + largest2 << endl;
    }
}
