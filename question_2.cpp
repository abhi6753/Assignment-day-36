// Using STL Array returns the total number of elements in the array.
#include<iostream>
#include<array>
using namespace std;
int main()
{

    array<int,5>ar={1,2,3,4,5};
    int count=0;
    for(auto i = ar.begin();i!=ar.end();i++)
    {
        count++;
    }
    // we can also use size() to get size of an arary
    cout<<"Number of elements in the array is : "<<count;
    return 0;
}
