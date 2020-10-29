#include <bits/stdc++.h>
using namespace std;

void swap(int* a,int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){

	int T;
	cin>>T;
	while( T-- ){
		int size,k;
		cin>>size>>k;
		int a[size],b[size];

		for(int i = 0; i < size; i++) cin>>a[i];
		for(int i = 0; i < size; i++) cin>>b[i];

		sort(a,a+size);
	    sort(b,b+size,greater<int>());

	    for(int i = 0; i < k; i++){
	    	for(int j = i; j < size; j++){
	    		if( b[j] > a[i]){
	    			swap(&a[i],&b[j]);
	    			break;
	    		}
	    	}
	    }
	    int sum = 0;
	    for(int i = 0; i < size;i++){
	    	sum += a[i];
	    }

	    cout<<sum<<endl;
	}

	return 0;
}