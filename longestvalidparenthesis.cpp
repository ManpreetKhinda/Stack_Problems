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
int longest(string&s){
    stack<int> st;
    st.push(-1);
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')st.push(i);
        else {
            if(!st.empty()){
                st.pop();
            }
            if(!st.empty()){
                ans=max(ans,i-st.top());
            }
            else{
                st.push(i);
            }
        }
    }
    return ans;
}