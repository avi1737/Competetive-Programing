#include <bits/stdc++.h>
using namespace std;


// 1 1 4 4 2 2 2 4

int main() {
	int t;
	cin>>t;
	while(t--){
	     int n;
	     cin>>n;
	     int arr[n];
	     for(int i = 0; i < n; i++){
	     	cin>>arr[i];
	     }

	     map<int,int> mp;
	     int flag = 0;
	     mp[arr[0]]++;
	     for(int i = 1; i < n; i++){
	     	if( arr[i-1] != arr[i] && mp[arr[i]] > 0){
	     		flag = 1;
	     	}
	     	else{
	     		mp[arr[i]]++;
	     	}
	     }

	     

	     set<int> s;
	     for(auto it = mp.begin(); it != mp.end(); it++){
	     	int val = it->second;
	     	if( s.find(val) != s.end()){
	     		flag = 1;
	     	}
	     	else{
	     		s.insert(val);
	     	}
	     }

	     if( flag == 1){
	     	cout<< "NO" <<endl;
	     }
	     else{
	     	cout<< "YES" <<endl;
	     }

	     	
	}

	return 0;
}