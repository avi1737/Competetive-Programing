#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    stack<char> st;
    //aaabccddd
    int len = s.length();

    for(int i = 0; i < len ; i++){

        if( st.empty() ){
            st.push(s[i]);
        }
        else if( !st.empty() && st.top() == s[i]){
            st.pop();
        }
        else if( !st.empty() && st.top() != s[i]){
            st.push(s[i]);
        }
        
    } 


    
    if( st.size() == 0 ){
        cout<<"Empty String"<<endl;
    }
    else{
        string result = "";
        while( !st.empty()){
            char c =  st.top();
            result += c;
            st.pop();
        }
        reverse(result.begin(),result.end());
        cout<<result<<endl;
    } 

    return 0;
}
