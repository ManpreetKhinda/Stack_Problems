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
bool duplicate(string s)
{

    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')')
        {
            char top=st.top();
            st.pop();
            int eleins=0;
            while(top!='('){
                eleins++;
                top=st.top();
                st.pop();
            }
            if(eleins<=1){
                return 1;
            }
        }
        else
        {
            st.push(s[i]);
        }
    }
    return false;
}

int main()
{
    string s = "((a+(b))+(c+d))";
    cout << duplicate(s);
}
void reverse(string &s){
    reverse(s.begin(),s.end());
}