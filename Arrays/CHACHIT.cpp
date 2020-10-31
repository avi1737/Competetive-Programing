#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while( t-- ){
		int n,b,m;
		cin>>n>>b>>m;
		int bo,c = 1;

		for(int i = 0; i < m; i++){
			int x;
			cin>>x;

			if( i == 0 ){
				bo = (x/b) + 1;
			}
			else{
				if( x < (bo-1)*b   || x > bo*b-1){
					bo = (x/b) + 1;
					c++;
				}
			}
		}

		cout<<c<<endl;

	}

	return 0;
}
