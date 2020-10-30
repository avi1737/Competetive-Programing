#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while( t-- ){
	     int arr[6];
	     for(int i = 0; i < 6; i++){
	          cin>>arr[i];
	     }
	     int sum = 0;
	     for(int i = 0; i < 5; i++){
	          sum = sum + arr[i]*arr[5];
	     }
	     if( sum > 120){
	          cout<<"Yes"<<endl;
	     }
	     else{
	          cout<<"No"<<endl;
	     }
	}
	return 0;
}
