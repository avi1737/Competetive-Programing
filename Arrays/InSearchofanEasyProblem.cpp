#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	bool ans = false;
	bool arr[n];
	for(int i = 0; i < n; i++)
		cin>>arr[i];
	for(int i = 0; i < n; i++)
		if( arr[i] == true){
			ans = true;
		}

	ans?cout<<"HARD"<<endl:cout<<"EASY"<<endl;
	return 0;
}