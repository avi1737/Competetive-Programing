#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

#define ll long long

void swap(ll* a,ll* b){
	ll temp = *a;
	*a = *b;
	*b = temp;
}


int main() {

	//24,7,19,12

	int n;
	cin>>n;
	vector<ll> arr,v1,v2,sorted,unsorted;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

    v1 = arr;
    v2 = arr;
	sorted = arr;
	unsorted = arr; // initialize araays with given array

	sort(sorted.begin(),sorted.end());        // 7 12 19 24
	sort(unsorted.begin(),unsorted.end(),greater<ll>());    // 24 19 12 7

	map<ll,int> umap,pmap;

	for(int i = 0; i < n; i++){
		umap[arr[i]] = i;  
		pmap[arr[i]] = i;   // store element and index in key value pair
	}

	/* hashmap 

	24  0
	7   1
	19  2
	12  3

	*/ 
	int cnt1 ,cnt2 = 0;
	for(int i = 0; i < n; i++){

		if( v1[i] != sorted[i] ){
			int index = umap[v1[i]];
			umap[v1[i]] = i;
			umap[sorted[i]] = index;
			swap(&v1[i],&v1[index]);
			cnt1++;
		}
		if( v2[i] != unsorted[i]){
			int index = pmap[v2[i]];
			pmap[v2[i]] = i;
			pmap[unsorted[i]] = index;
			swap(&v2[i],&v2[index]);
			cnt2++;
		}

	}

	if( cnt1 < cnt2){
		cout<<cnt1<<endl;
	}
	else{
		cout<<cnt2<<endl;
	}



    return 0;

}