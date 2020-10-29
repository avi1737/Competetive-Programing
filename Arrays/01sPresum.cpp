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

    // 0 1 0 1 0 1 1 1 1 1
    int q;
    cin>>q;
    while( q-- ){
    	int l,r;
    	cin>>l>>r;

    	int num_of_element = r-l+1;

    	if( Presum[r] - Presum[l-1] == num_of_element){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    }

    return 0;
}