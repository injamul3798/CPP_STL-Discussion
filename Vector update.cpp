#include <iostream>
#include<vector>
using namespace std;
int main(){
    //creata a simple vector using cppp
    vector<int> v1;
    int t;
    cin>>t;
    int n;
    for(int i=1;i<=t;i++){
        cin>>n;
        v1.push_back(n);
    }
    for(int i=0;i<t;i++){
        cout<<v1[i]<<" ";
    }
    printf("\n");
    //now insert a element into 2n;d onlv1
    v1.insert(v1.begin()+2,10);  //insert a elemtn
    for(int i=0;i<t+1;i++){
        cout<<v1[i]<<" ";
    }
     cout<<endl;
    //another way to represent an vector
   int i;
    for(auto i=v1.begin();i!=v1.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    //check vector is epty or not_eq
    if(v1.empty()){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    //print the vector size
    cout<<endl;
    cout<<v1.size();
    //creta a 2 d vector in vcpp
    cout<<endl;
    vector<vector<int>>  v2{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for(int i=0;i<v2.size();i++){
        for(int j=0;j<v2[i].size();j++){
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
