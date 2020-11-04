#include<bits/stdc++.h>
using namespace std;

// Optimal way of finding GCD of two numbers
// also called as ecludian algorithm

// a = 45   b = 10

int GCD(int a,int b){

	if( b == 0 )
		return a;

	return GCD(b,a%b);
}


// LCM of two numbers : you need to multiply both numbers and devide by gcd if gcd = 1 then ans is a*b
int main(){

	int a,b;
	cin>>a>>b;

	int gcd_ = GCD(a,b);
	cout<<gcd_<<endl;

	int lcm_ = a*b/gcd_;

	cout<<lcm_<<endl;
}