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
int countgreter(int n)
{
    int result = 0;
    stack<int> st;
    for (int i = 1; i <= 9; i++)
    {
        if (i <= n)
        {
            st.push(i);
            result++;
        }
        while (!st.empty())
        {
            int tp = st.top();
            st.pop();
            for (int j = tp % 10; j <= 9; j++)
            {
                int x = tp * 10 + j;
                if (x <= n)
                {
                    st.push(x);
                    result++;
                }
            }
        }
    }
    return result;
}
int main()
{
    cout << countgreter(134);
}