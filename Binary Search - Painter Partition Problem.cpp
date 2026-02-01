#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int> nums, int m, int mid){
	int painter = 1, time = 0;
	
	for(int i = 0; i < nums.size(); i++){
		if(nums[i] > mid) return false;
		
		if(nums[i] + time < mid){
			time += nums[i];
		}else{
			painter++;
			time = nums[i];
		}
	}
	return painter > m ? false:true;
}

int paintersPartition(vector<int> nums, int m){
	if(m > nums.size()) return -1;
	
	int sum = 0;
	for(int n:nums){
		sum += n;
	}
	
	if(nums.size() == m){
		return sum;
	}
	int left = 0;
	int right = sum;
	
	int ans = 0;
	
	while(left <= right){
		int mid = left + (right - left)/2;
		
		if(isValid(nums, m, mid)){
			ans = mid;
			right = mid - 1;
		}else{
			left = mid + 1;
		}
	}
	return ans;
}

int main(){
	vector<int> nums = {40, 30, 10, 20};
	
	int m = 2;
	
	cout << paintersPartition(nums, m);
	return 0;
}