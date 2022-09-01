#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

//*************************** Functors ****************************************
/*
__> A function object is a function wrapped in a class so that it is available as an object.
That is, we can then use a function as an object.

# Why Functors?!
__> to make them all usable in an Object-Oriented Programming paradigm.
*/

int main()
{
    int arr[] = {42, 24, 13, 35, 1656, 907};
    sort(arr, arr+4);
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr+4, greater<int>()); // here greater<int>() is a functor
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}