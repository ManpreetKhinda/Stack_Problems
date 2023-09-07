#include <iostream>
#include <cmath>
#include <stack>
#include <string>
#include <stdlib.h>
#include <unordered_set>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <queue>
#define n 100
using namespace std;
void reverse(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string words = "";
        while (s[i] != ' ' && i < s.length())
        {
            words += s[i];
            i++;
        }
        st.push(words);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    string s = "Let's get better at it each day";
    reverse(s);
}
