#include<iostream>
using namespace std;

int main()
{
    
    //************************** new keyword *****************************************
    /* __> Nothing but a keyword to dynamically create an object of any datatype with the
    help of pointers.
    */

   //*************************** delete keyword **************************************
   /* __> Nothing but a keyword to free up the memory taken by an object defined by new keyword.
   */

   int *ptr = new int(23);
   delete ptr;
   cout << "Address: ptr = " << ptr << endl;
   cout << "dereference ptr: *ptr = " << *ptr << endl;
//    cout << sizeof(*ptr) << endl;

   int *arr = new int[5];
   cout << "\nAddress : arr = " << arr << endl;

   arr[0] = 1972;
   cout << "Val at arr: arr[0] = " << arr[0] << endl;

   arr[1] = 1976;
   arr[2] = 1999;
   arr[3] = 2004;
   arr[4] = 2011;
   delete [] arr; // memory taken by arr freed

   int arrLen = sizeof(arr)/sizeof(arr[0]);
   cout << "\nSize of arr: " << sizeof(arr) << endl; // --> Apparently it's giving the size of address

   cout << "The length of the array 'arr': " << arrLen << endl;

   for (int i = 0; i < arrLen; i++)
   {
        cout << arr[i] << " ";
   }

   cout << "\narr[0] = " << arr[0] << endl;
   cout << "arr[1] = " << arr[1] << endl;
   cout << "arr[2] = " << arr[2] << endl;
   cout << "arr[3] = " << arr[3] << endl;
   cout << "arr[4] = " << arr[4] << endl;

   return 0;
}