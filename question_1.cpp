// 1. Using STL Array gets and sets a reference to an element based on a given index.
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> ar = {1, 2, 3, 4, 5};
    cout << "Element at index 1 : " << ar[0] << endl;
    cout << "Element at index 2 : " << ar[1] << endl;
    cout << "Element at index 3 : " << ar[2] << endl;
    cout << "Element at index 4 : " << ar[3] << endl;
    cout << "Element at index 5 : " << ar[4] << endl;
    ar[3] = 50;
    ar[4] = 60;
    for(int i:ar) // we can also use auto keyword instead of int and it will work for all data types
    {
        cout<<i<<" ";
    }

    cout << endl;

    return 0;
}
