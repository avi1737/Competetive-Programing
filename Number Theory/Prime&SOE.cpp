#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 10000


void sieveoferatosthenes(int n){

	bool arr[MAX_SIZE];

	for(int i = 2; i <= n; i++){
		arr[i] = true;
	}   // make all indexs from 2 to n true 

	for(int i = 2; i*i <= n; i++){

		if(arr[i]){

			for(int j = i*i; j <= n; j += i){
				arr[j] = false;
			}

		}
	}

	for(int i = 2; i <= n; i++){
		if( arr[i] == true){
			cout<<i<<" ";
		}
	}
}


void isPrime(int n){
	// brute force we check from 2... n-1 if any number devides n. if devides then its not prime

	bool flag = true;
	for(int i = 2; i < n; i++){
		if( n%i == 0 ){
			flag = false;
		}
	}

	if( flag){
		cout<<"Prime number"<<endl;
	}
	else{
		cout<<"Not Prime number"<<endl;
	}

	// Time Complexity if o(n)
}

int main(){

	int n;
	cin>>n;
	//isPrime(n);
	sieveoferatosthenes(n);
	return 0;
}