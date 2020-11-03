#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i = 0; i < n; i++){
          cin>>arr[i];
     }
     sort(arr,arr+n);
     int ans = 1e9;
     
     ans = min( ans, abs(arr[n-2]-arr[0]));
     ans = min( ans, abs(arr[1]-arr[n-1]));
     
     cout<<ans<<endl;
     //helllo
     
     return 0;
}