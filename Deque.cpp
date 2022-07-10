// In normal queue, we cant insert or delete
// from every position.In queue we can just insert
//new eleemt at the end..But in deque we can do both;

//Now lets get started

#include<algorithm>
#include <iostream>
#include <queue>
using namespace std;


int main(){
    deque<int> dq;
    deque<int> dd;
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        dq.emplace_back(n);  // we can use push_back ,work same
        dd.push_back(n);// we can also do ths
        //both work same
    }
    int i;
    cout<<"Print dq deque: "<<endl;
    for(auto i=dq.begin();i!=dq.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Print dd deque: "<<endl;
    for(auto i=dd.begin();i!=dd.end();i++){
        cout<<*i<<" ";
    }
    //Pop operatipon
    dd.pop_back(); // deleted from back
    cout<<endl;
    cout<<"Print dd deque after pop operation: "<<endl;
    for(auto i=dd.begin();i!=dd.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Print dq deque after pop operation: "<<endl;
    dq.pop_front();
    for(auto i=dq.begin();i!=dq.end();i++){
        cout<<*i<<" ";
    }
}

