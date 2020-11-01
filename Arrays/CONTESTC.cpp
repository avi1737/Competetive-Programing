#include<bits/stdc++.h>
using namespace std;

/*0 0    row  0  1  2
2 0      col  0  0  1
1 1 */

int main(){

	int position[1003];
	vector<int> x(3),y(3);

	for(int i = 0; i < 3; i++){
		cin>>x[i]>>y[i];
		position[x[i]] = y[i];
	}

	sort(x.begin(),x.end());
	sort(y.begin(),y.end());

	cout<<x[2]-x[0]+y[2]-y[0]+1<<endl;

	for(int i = x[0]; i < x[1]; i++){
		cout<<i<<" "<<position[x[0]]<<endl;
	}


	for(int i = y[0]; i <= y[2]; i++){
		cout<<x[1]<<" "<<i<<endl;
	}

	for(int i = x[1]+1; i <= x[2]; i++){
		cout<<i<<" "<<position[x[2]]<<endl;
	}

	return 0;
}