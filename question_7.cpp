//7. Sort an array in ascending order using sort() function in C++ STL
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int arr[]={20,76,43,212,23,28,43,21};
    sort(arr,arr+8);
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}
