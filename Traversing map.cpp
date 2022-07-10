#include <bits/stdc++.h>
#include <vector>
//In vector,we use pushback to insert some value
//for set,we use insert
//
using namespace std;
int main(){
    int arr[]={1,1,1,2,2,3,3,3,4,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;  //count which eleemnt kotobar ache
    }
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

}

