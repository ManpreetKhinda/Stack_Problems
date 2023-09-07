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
void insertatbottom(stack<int> &st, int element){
    if(st.empty()){
        st.push(element);
        return;
    }
    int topelement=st.top();
    st.pop();
    insertatbottom(st,element);
    st.push(topelement);
}
void reversest(stack<int> &st){
    if(st.empty()){
        return;
    }
    int element=st.top();
    st.pop();
    reversest(st);
    insertatbottom(st,element);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    reversest(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }cout<<endl;

}
