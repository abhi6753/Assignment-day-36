//7. Sort an array in descending order using sort() function in C++ STL
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int arr[]={20,76,43,212,23,28,43,21};
   int size = sizeof(arr)/sizeof(int);
    sort(arr,arr+size,greater<int>());
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}

