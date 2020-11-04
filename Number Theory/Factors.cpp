#include<bits/stdc++.h>
using namespace std;

// Brute force would take o(n) time complexity

void fact(int n){

	vector<int> result;
	for(int i = 1; i <= n; i++){
		if( n%i == 0){
			result.push_back(i);
		}
	}

	for(int i: result){
		cout<<i<<" ";
	}
}

// optimal way is we need to check upto square root of number for 25 we only need to check till 5

void Factor(int n){

	vector<int> result;
	// n  = 25 then i go from 1 --- 5

	for(int i = 1; i*i <= n; i++){

		if( n%i == 0){
			result.push_back(i);

			if( i != n/i )
				result.push_back(n/i);
		}

	}

	sort(result.begin(),result.end());

	for(auto i:result){
		cout<<i<<" ";
	}

}

int main(){

	int n;
	cin>>n;

	Factor(n);
	fact(n);
	return 0;
}