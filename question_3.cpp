//3. Find the first and last element using the STL array.
#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int ,10> ar;
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<ar.size();i++)
    {
        cin>>ar[i];
    }
    cout<<"firstElement = "<<ar.front()<<endl;
    cout<<"lastElement = "<<ar.back();
    return 0;
}
