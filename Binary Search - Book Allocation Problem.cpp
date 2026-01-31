#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> nums, int n, int m, int mid){
	int student = 1;
	int pages = 0;
	
	for(int i = 0; i < nums.size(); i++){
		if(nums[i] > mid) return false;
		
		if(pages + nums[i] <= mid){
			pages += nums[i];
		}else{
			student++;
			pages = nums[i];
		}
	}
	if(student <= m){
		return true;
	}
	return false;
}
int bookAllocation(vector<int> nums, int n, int m){
	if(m > n) return -1;
	
	int sum = 0;
	
	for(int a: nums){
		sum += a;
	}
	int left = 0;
	int right = sum;
	
	int ans = 0;
	
	while(left <= right){
		int mid = left + (right - left)/2;
		
		if(isValid(nums, n, m, mid)){
			ans = mid;
			right = mid - 1;
		}else{
			left = mid + 1;
		}
	}
	return ans;
}

int main(){
	vector<int> nums = {2, 1, 3, 4};
	
	int n = 4, m = 2;
	
	cout << bookAllocation(nums, n, m);
	return 0;
}