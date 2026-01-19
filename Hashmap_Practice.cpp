#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
	unordered_map<int, string> mp;
	
	mp[1] = "Apple";
	mp[2] = "Banana";
	
	mp.insert({3, "Cherry"});
	
	mp.emplace(4, "Orange");
	
	for(const auto &it: mp){
		cout << it.first << " -> " <<it.second << endl;
	}
	if(mp.find(2) != mp.end()){
		cout << "Key found in map\n";
	}else{
		cout << "Key not found\n";
	}
	
	cout << mp.load_factor() << endl;
	cout << mp.bucket_count() << endl;
	cout << mp[0] << endl;
	cout << mp[1] << endl;
	cout << mp[2] << endl;
	cout << mp[3] << endl;

	return 0;;
}
