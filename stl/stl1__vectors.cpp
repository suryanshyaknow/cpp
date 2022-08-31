#include<iostream>
#include<vector>
#include<string>
using namespace std;

// ********************************** Vectors ***********************************************
/*
__> One benefit of using vectors, is that we can insert as many elements we want in a vector, 
without having to put some size parameter as in an array. 
__> whereas In an array of 10 elements, for adding the 11th one, we’ll have to make the array again.

--> Vectors provide certain methods which can be used to access and utilise the elements of a vector.

### The Science behind how vectors can grow dynamically: 

__> Internally, vectors use a dynamically allocated array to store their elements. This array may need to be 
reallocated in order to grow in size when new elements are inserted, which implies allocating a new array and 
moving all elements to it.
-->  This is a relatively expensive task in terms of processing time, and thus, vectors do not reallocate each
time an element is added to the container.

__> Instead, vector containers may allocate some extra storage to accommodate for possible growth, and thus the
container may have an actual capacity greater than the storage strictly needed to contain its elements (i.e., its size).
--> Libraries can implement different strategies for growth to balance between memory usage and reallocations, but in any
case, reallocations should only happen at logarithmically growing intervals of size so that the insertion of individual
elements at the end of the vector can be provided with amortized constant time complexity.

__> Therefore, compared to arrays, vectors CONSUME MORE MEMEORY in exchange for the ability to manage storage and grow 
dynamically in an efficient way.
*/

template <class T>
void display(vector<T> &v)
{   
    cout << "\nDisplaying the desired vector: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int ele, size;
    cout << "Enter the size of the desired vector: ";
    cin >> size;

    // forming a vector by pushing elements.. 
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to be inserted: ";
        cin >> ele;
        vec1.push_back(ele);
    }

    // cout << "vec1's size: " << vec1.size() << endl;

    // inserting an element at a certain position w the help of an iterator
    // vector<int> :: iterator iter = vec1.size();
	/*"error message": "no suitable constructor exists to convert from \"std::size_t\" to 
     \"__gnu_cxx::__normal_iterator<int *, std::vector<int, std::allocator<int>>>\"", */
    // vec1.insert(iter, 1999);

    // int x = vec1.size(); // failed!
    vec1.insert(vec1.begin(), 25, ele);
    // middle argument takes the number of the copies of the value to be inserted.
    vec1.pop_back();
    cout << "Element at the 0th position: " << vec1.at(0) << endl;
    display(vec1);

    //********************************************************************************************

    vector <int> vec; // 0 length vector
    display(vec);

    vector <char> vec2(5); // 5-character length vector
    vec2.push_back('s');
    vec2.push_back('v');
    display(vec2);

    vector <int> vec3(vec1); // same sized vector as vec1 is from vec1
    display(vec1);

    vector <string> vec4(4, "vermilion"); // 4-element vector of 4"vermilions"s
    display(vec4);

    return 0;
}