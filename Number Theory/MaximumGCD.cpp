#include<bits/stdc++.h>
using namespace std;

// efficient way is n/2 because from 1 to n largest common devisor or 99 and 100 would be  50 n/2

int __gcd(int a,int b){
     
     if( b == 0 ){
          return a;
     }
     return __gcd(b,a%b);
}

int main(){
     
     int t;
     cin>>t;
     while( t-- ){
          
          int n;
          cin>>n;
          int max_gcd = INT_MIN;
          vector<int> v;
          for(int i = 0; i < n; i++){
               v.push_back(i+1);
          } 

          for(int i = 0; i < n-1; i++){
               for(int j = i+1; j < n; j++){
                    max_gcd = max(max_gcd,__gcd(v[i],v[j]));
               }
          }

          cout<<max_gcd<<endl; 

     }
     
     return 0;
}