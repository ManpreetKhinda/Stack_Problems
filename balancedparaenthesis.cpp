#include <iostream>
#include <cmath>
#include <stack>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <unordered_set>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std; 
bool isvalid(string s){
    int n=s.length();
    stack <char> st;
    bool ans=true;
    for(int i=0;i<n;i++){
        if(s[i]=='{'||s[i]=='('||s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return ans;


}
int main(){
    cout<<isvalid("{([])}");
}
