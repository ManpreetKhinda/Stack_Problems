/*infix prefix and postfix
prefix:= +*423 for 4*2+3
      := -5/63 for 5-6/3

postfix:= 42*3+ for 4*2+3
        := 563/- for 5-6/3 

*/
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

int prefixeval(string s){
    stack<int> st;
    for (int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');// for string to int conversion

        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            
            }
        }
    }  
    return st.top();
}

int postfixeval(string s){
    stack <int>st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            
            }
        }
    }
    return st.top();
    
}
int main(){
    cout<<postfixeval("42*3+")<<endl;
    return 0;
}