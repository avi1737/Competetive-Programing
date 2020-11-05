#include<bits/stdc++.h>
using namespace std;

void createPrime(bool* arr,int n){

     for(int i = 2; i <= n; i++)
          arr[i] = true;
     
     for(int i = 2; i*i <= n; i++){
          if( arr[i] == true){
               for(int j = i*i; j <= n; j+=i){
                    arr[j] = false;
               }
          }
     }

     int num_array[n+4];
     for(int i = 2; i <= n; i++)
          num_array[i] = 0;
     
     for(int i = n; i >= 2; i--){
          if( arr[i] == false){
               for(int j = n-1; j >= 2; j--){
                    if( arr[j] == true && i%j == 0){
                         num_array[i]++;
                    }
               }
          }
     }

     int count = 0;
     for(int i = 2; i <= n; i++){
          if( num_array[i] == 2){
               count++;
          }
     }

     cout<<count<<endl;
}

int main(){
     
     int n;
     cin>>n;
     bool primeArray[n+4];
     

     createPrime(primeArray,n);
     return 0;
}