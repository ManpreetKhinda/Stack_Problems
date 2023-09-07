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
void sortstack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int x = s.top();
    s.pop();
    sortstack(s);
    stack<int> tempstack;
    while (!s.empty() && s.top() < x)
    {
        tempstack.push(s.top());
        s.pop();
    }
    s.push(x);
    while (!tempstack.empty())
    {
        s.push(tempstack.top());
        tempstack.pop();
    }
}
int main()
{
    stack<int> s;
    s.push(34);
    s.push(3);
    s.push(31);
    s.push(98);
    s.push(92);
    s.push(23);
    sortstack(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
