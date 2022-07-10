#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v; //int type vector
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int t;  cin>>t;
        v.push_back(t);   //similarly pop back is used to delete
    }

    for(auto i=v.begin();i!=v.end();++i){
        cout<<*i<<" ";  //print the vector value
    }
    cout<<"size of vector n: "<<v.size();
}

