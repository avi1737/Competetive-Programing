#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while( t-- ){
	     int n;
	     cin>>n;
	     int arr[2*n];
	     for(int i = 0; i < 2*n; i++){
	          cin>>arr[i];
	     }
	     
	     set<int> s;
	     for(int i = 0; i < 2*n; i++){
	     	if( !s.count(arr[i])){
	     		s.insert(arr[i]);
	     		cout<<arr[i]<<" ";
	     	}
	     }
	}
	return 0;
}
