#include <iostream>
#include<stack>
#include <bits/stdc++.h>
using namespace std;
void newstack(stack<int> st){  //this function use to print stack
    stack<int> ss=st;
    while(!ss.empty()){
        cout<<ss.top()<<" ";
        ss.pop();
    }
    //but also we can do below code..WE use the first to one to formality.


   /*
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }  */
}
int main()  {
    //int t;  cin>>t;
    //LIFO technique, where LIFO stands for Last In First Out
    //cretae a stack
    stack<int> st;
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    cout<<"New ARRAY BEFORE POP OPERATION\n";
    newstack(st);
    st.pop();
    cout<<"\nAfter one pop operation, we got :";
    newstack(st);

    //check size of stack
    cout<<"\n size of stack: "<<st.size();
    return 0;
}
