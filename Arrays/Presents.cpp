#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i  = 0; i < n; i++) cin>>arr[i];
	int result[n];
	
	// i + 1 is number of people and 
    for(int i = 0; i < n; i++){
    	result[arr[i]-1] = i+1;
    }

    for(int i = 0; i < n; i++){
    	cout<<result[i]<<" ";
    }
	return 0;
}