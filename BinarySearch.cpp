#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Basic Binary Search Approach
int binSearch(vector<int>& nums, int target){
	int n = nums.size();
	
	int left = 0;
	int right = n - 1;
	
	while(left <= right){
		int mid = (left + right)/2;
		if(nums[mid] == target){
			return mid;
		}else if(nums[mid] > target){
			right = mid - 1;
		}else{
			left = mid + 1;
		}
		
	}
	return -1;
}

//Optimized Binary Search Approach
int binSearch2(vector<int> nums, int target){
	int n = nums.size();
	
	int left = 0;
	int right = n - 1;
	
	while(left <= right){
		int mid = left + (right - left)/2;
		if(nums[mid] == target){
			return mid;
		}else if(nums[mid] > target){
			right = mid - 1;
		}else{
			left = mid + 1;
		}
	}
	return -1;
}

//Recursive Binary Search Approach 
int binSearch_Rec(vector<int> nums, int target, int left, int right){
	int n = nums.size();
	int mid = left + (right - left)/2;
	
	if(nums[mid] == target){
		return mid;
	}else if(nums[mid] > target){
		return binSearch_Rec(nums, target, left, mid - 1);
	}else{
		return binSearch_Rec(nums, target, mid+1, right);
	}
	return -1;
}

int main(){
	vector<int> nums = {1, 5, 6, 10, 19, 25, 48,56, 62, 76};
	int target = 56;
	int left = 0;
	int right = nums.size()- 1;
	
	sort(nums.begin(), nums.end());
	
	cout << binSearch_Rec(nums, target, left, right);
	return 0;
}