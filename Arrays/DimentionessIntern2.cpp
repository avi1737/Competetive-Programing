#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int left[n];
    int right[n];
    for(int i = 0; i < n; i++){
        left[i] = 0;
        right[i] = 0;
    }
    
    left[0] = 1;
    for(int i = 1; i < n; i++){
        if( arr[i-1] < arr[i] ){
            left[i] = left[i-1]+1;
        }
        else{
            left[i] = 1;
        }
    }

    right[n-1] = 1;
    // . . . . . .

    for(int i = n-2; i >= 0; i--){
        if( arr[i] > arr[i+1] ){
            right[i] = right[i+1]+1;
        }
        else{
            right[i] = 1;
        }
    }

    
    int chocolates = 0;

    for(int i = 0; i < n; i++)
        chocolates += max(left[i],right[i]);

    cout<<chocolates<<endl;

   
    
    return 0;
}