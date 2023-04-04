//6. Using STL to check whether an array is empty or not.
#include<array>
#include<iostream>
using namespace std;
int main()
{
    array<int ,5>ar={1,2,3,4,5};
    if(ar.empty())
    {
        cout<<"Array is an empty"<<endl;
    }
    else
    {
        cout<<"Array is not empty"<<endl;
    }
    return 0;
}
