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
using hashmap 26*n,n */
string firstnonrepeating(string A){
    vector<char> v;
    unordered_map<char,int> mp;
    string ans;
    for(char ch:A){
        if(mp.find(ch)==mp.end()){
            v.push_back(ch);
            mp[ch]=1;
        }
        else{
            int index=find(v.begin(),v.end(),ch)-v.begin();
            if(index<v.size()){
                v.erase(v.begin()+index);
            }
        }
        ans+=(v.empty() ? '#': v.front());
    }
    return ans;
}
/* using queue  26*n,n*/
string firstnonrepeating2(string A){
    string ans="";
    unordered_map<char,int> mp;
    queue<char> q;
    for(int i=0;i<A.length();i++){
        if(mp.find(A[i])==mp.end()){
            q.push(A[i]);
        }
        mp[A[i]]++;
        while(!q.empty() && mp[q.front()]>1){
            q.pop();
        }
        if(!q.empty()){
            ans+=q.front();
        }
        else{
            ans+='#';
        }
    }
    return ans;
}

/*
using a count array n,n*/
string firstnonrepeating3(string A){
    int count[26]={0};
    queue<char> q;
    string ans="";
    for(char c: A){
        count[c-'a']++;
        q.push(c);
        while(!q.empty() &&  count[q.front()-'a']>1){
            q.pop();
        }
        if(q.empty()){
            ans+='#';
        }
        else{
            ans+=q.front();
        }
    }
    return ans;
}
