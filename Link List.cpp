#include <iostream>
#include<list>
using namespace std;
int main(){
    //creata a simple link list
    list<int> l1;
    int t;   cin>>t;
    for(int i=0;i<t;i++){
        int n; cin>>n;
       // l1.push_front(n); //insert new element infront of list
       //similarly we can use push_back to insert into list from behind
       l1.push_back(n);
    }/*
    //we cant print like this in lisy
    for(int i=0;i<l1.size();i++){
        cout<<l1[i]<<" ";
    } */
    int i;
    for(auto i=l1.begin();i!=l1.end() ;i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    // delete something from std::array<, N> ;
   l1.pop_back(); //delete last element,similaly we can use pop_front
  // l1.pop_front();   delete from front size

    for(auto i=l1.begin();i!=l1.end() ;i++){
        cout<<*i<<" ";
    }
    // v v important topic ..delete duplicate element
    l1.unique(); // print only uique lement
    cout<<endl;
    for(auto i=l1.begin();i!=l1.end() ;i++){
        cout<<*i<<" ";
    }
    // we can sort this using sort function like other

    // merge two sorted list
     list<int> li={1,2,3,4};
     list<int> li1={5,6,7,8};
     li.merge(li1);

   for(list<int>::iterator itr=li.begin();itr!=li.end();++itr)  {
       cout << *itr<<" ";
   }

    return 0;
}

