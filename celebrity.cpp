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
int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;
    vector<int> check;
    for (int i = 0; i < n; i++)
    {
        if (M[i] == vector<int>(n, 0))
        {
            check.push_back(i);
        }
    }
    int count = 0;
    for (auto x : check)
    {
        for (int j = 0; j < n; j++)
        {
            if (M[j][x] == 1)
            {
                count++;
            }
        }
        if (count == n - 1)
        {
            return x;
            break;
        }
    }
    return -1;
}
int main()
{
    int n = 3;
    vector<vector<int>> M = {{0, 1, 0},
                             {0, 0, 0},
                             {0, 1, 0}};
    cout << celebrity(M, n);
}