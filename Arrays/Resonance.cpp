#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++) cin>>a[i];

	int min_diff = INT_MAX;

	// 0 1 2 3 4
	// 10 12 34 56 10

	int l,r = -1;

	for(int i = 0; i < n-1; i++){

		if( abs( a[i+1] - a[i]) < min_diff){
			min_diff = abs(a[i+1]-a[i]);
		    l = i;
		    r = i+1;
		}

	}

	if( abs(a[n-1] - a[0]) < min_diff){
		l = 0;
		r = n-1;
	}

	cout<<l+1<<" "<<r+1<<endl;

	return 0;
}