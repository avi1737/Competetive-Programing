#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++) cin>>arr[i];
	long long int Presum[n];
    
    long long int sum = 0;
    for(int i = 0; i < n; i++){
    	sum = sum + arr[i];
    	Presum[i] = sum;
    }

    int q;
    cin>>q;
    while( q-- ){
    	int l,r;
    	cin>>l>>r;
    	cout<<Presum[r] - Presum[l-1]<<endl;
    }

	return 0;
}