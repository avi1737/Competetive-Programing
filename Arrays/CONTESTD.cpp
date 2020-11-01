#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++) cin>>arr[i];
	sort(arr,arr+n);
	int k = 1;
	int result[n];
	int front = 0;
	int back = n-1;

	for(int i = 0; i < n; i++){
		if( k == 1){
			result[front] = arr[i];
			front++;
			k*=-1;
		}
		else{
			result[back] = arr[i];
			back--;
			k*=-1;
		}
	}
	for(int x:result){
		cout<<x<<" ";
	}

	return 0;
}