//4. Returns the element from the given index using the STL array.
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int ,5> ar={1,2,3,4,5};
    int index;
    cout<<"Enter index number: ";
    cin>>index;
    cout<<ar.at(index);
    return 0;
}
