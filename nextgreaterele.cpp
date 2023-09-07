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
/*
using stack*/
vector<long long int> NGE(int arr[], int n)
{
    stack<long long> st;
    vector<long long> v(n, -1);
    for (int i = 0; i < n; i++)
    {
        while (st.size() != 0 && arr[i] > arr[st.top()])
        {
            v[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return v;
}
vector<int> NSE(vector<int> arr, int n)
{
    stack<int> st;
    vector<int> v(n, -1);
    for (int i = 0; i < n; i++)
    {
        while (st.size() != 0 && arr[i] < arr[st.top()])
        {
            v[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return v;
}
vector<int> PSE(vector<int> &a, int n)
{
    stack<int> st;
    vector<int> ans(n, -1);
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() >= a[i])
            st.pop();
        if (!st.empty())
            ans[i] = st.top();
        st.push(a[i]);
    }
    return ans;
}
vector<int> PGE(vector<int> &a, int n)
{
    stack<int> st;
    vector<int> ans(n, -1);
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() < a[i])
            st.pop();
        if (!st.empty())
            ans[i] = st.top();
        st.push(a[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {10, 4, 2, 20, 40, 12, 30};
    
    vector<int> pre = PGE(arr, 7);
    for (auto it : pre)
        cout << it << " ";
}