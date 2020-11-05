    #include<bits/stdc++.h>
    using namespace std;
     
    int negative(int n){
         
         int number = n;
         
         int last_digit = number%10;
         number/=10;
         int second_last = number%10;
         // -10  0  -1
         number = number - second_last + last_digit;
         
         if( number > n/10){
              return number;
         }
         else{
              return n/10;
         }
    }
     
    int main(){
         
         int n;
         cin>>n;
         
         n < 0 ? cout<<negative(n)<<endl:cout<<n<<endl;
         return 0;
    }