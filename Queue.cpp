
#include<algorithm>
#include <iostream>
#include <queue>
using namespace std;
void print_val(queue<int> qq){
    queue<int> qs=qq;
    while(!qs.empty()){
        cout<<qs.front()<<" ";
        qs.pop();
    }
}


int main(){
    queue<int> qq;
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        qq.push(n);
    }
    print_val(qq);
    /*
    qq.push(4);
    qq.push(5);
    qq.push(6);
    qq.push(7);
    print_val(qq);  */
    cout<<endl;

    //Now lets work on delete operation
    cout<<"Print queue after deleteing some element: ";

    qq.pop();
    print_val(qq);
    cout<<endl;
    cout<<qq.size();  //lets print size of queue

}
