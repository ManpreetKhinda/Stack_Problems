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
class stack{
    int *arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;


    }
    void pop(){
        if(top==-1){
            cout<<"empty stack"<<endl;
            return ;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"empty stack"<<endl;
            return ;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};