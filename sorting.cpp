/*
Time Complexity: O(nlogn)
Auxiliary Space: O(1)
*/


#include<algorithm>
#include <iostream>
using namespace std;
int main(){
    int arr[]={33,22,11,66,82,13,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++)  cout<<arr[i]<<" ";

    //print the array
   // show(arr,arr+)

}

