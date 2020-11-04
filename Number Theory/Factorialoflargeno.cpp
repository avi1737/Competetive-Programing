#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

int mainlogic(int x,int size,int* res){

	int carry = 0;

	for(int i = 0; i < size; i++){

		int ans = res[i]*x + carry;
		res[i] = ans%10;
		carry = ans/10;

	}

	while( carry ){
		res[size] = carry%10;
		carry = carry/10;
		size++;
	}

	return size;

}

void fact(int n){

	int res[MAX];
	res[0] = 1;

	int size = 1;

	for(int i = 2; i <= n; i++){
		size = mainlogic(i,size,res);
	}

	for(int j = size-1; j >= 0; j--){
		cout<<res[j];
	}
}

int main(){

	int n;
	cin>>n;
	fact(n);
	return 0;
}