//5. C++ STL program to demonstrate example of array::rbegin() and array::rend() functions
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> ar={1,2,3,4,5};
    array<string,5> city={"Aurngabad","Ranchi","Delhi","Kolkata","Patna"};
    for(auto i=ar.rbegin();i<ar.rend();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
     for(auto i=city.rbegin();i<city.rend();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}
