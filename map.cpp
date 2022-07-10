#include <bits/stdc++.h>
#include <vector>
//In vector,we use pushback to insert some value
//for set,we use insert
//
using namespace std;
int main(){
    int arr[]={10,10,19,84};
    int n = sizeof(arr)/sizeof(arr[0]);
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]%10]++;  //count which eleemnt kotobar ache
    }
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

}
