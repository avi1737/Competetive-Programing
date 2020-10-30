#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i = 1; i <= t; i++){
		int n;
		cin>>n;
		int arr[n];

		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}

		int c = 0,d = 0;

		for(int i = 0; i < n; i++){

			if( i % 2 == 0 && arr[i] % 2 == 1){
				c++;
			} 
			else if(i % 2 == 1 && arr[i] % 2== 0){
				d++;
			}
			
		}

		if( c != d ){
			cout<<-1<<endl;
		}
		else{
			cout<<c<<endl;
		}
	}
	return 0;
}