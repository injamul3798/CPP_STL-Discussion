#include <iostream>
#include<set>
#include <bits/stdc++.h>
using namespace std;
int main()  {
    int t;  cin>>t;
    //set will only store unique elements
    //now create a set
    set<int> s1;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        s1.insert(n);
    }
    int i;
    for(auto i=s1.begin();i!=s1.end();i++){
        cout<<*i<<" ";
    }

    return 0;
}
