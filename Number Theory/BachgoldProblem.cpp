#include<bits/stdc++.h>
using namespace std;

void Function(int n){
	int count  = 0;
	vector<int> v;
	if( n % 2 == 0 ){
		int num = 2;
		while( num <= n ){
			num+=2;
			count++;
			v.push_back(2);
		}
	}
	else{
		int num = 2;
		while( num <= (n-3)){
			num+=2;
			count++;
			v.push_back(2);
		}
		v.push_back(3);
		count++;
	}

	cout<<count<<endl;
	for(auto x:v){
		cout<<x<<" ";
	}

}

int main(){

	int n;
	cin>>n;
	Function(n);

	return 0;
}