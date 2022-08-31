#include<iostream>
#include<list>
#include<string>
using namespace std;

// ****************************** List ****************************************************
/*
__> If you want random access of an element to be fast, then you can use arrays or vectors.
__> And if you want insertion somewhere in middle and deletion fast, then you gotta use lists.
*/

// template <class T>
void displayList(list <int> &l)
{   
    list <int> :: iterator iter;
    for (iter = l.begin(); iter != l.end(); iter++)
    {
        /* code */
        cout << *iter << " ";
    }
    cout << endl;
}

void displayList(list <string> &l)
{   
    list <string> :: iterator iter;
    for (iter = l.begin(); iter != l.end(); iter++)
    {
        /* code */
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list <int> l1;

    l1.push_back(1999);
    l1.push_back(1972);
    l1.push_back(1976);
    l1.push_back(2004);
    l1.push_back(11);
    l1.push_back(2011);

    displayList(l1);

    // for removing elements:
    // l1.pop_back();
    // l1.pop_front();
    // l1.remove(1999); // remove all elements equal to the val

    l1.sort();
    cout << "sorted l1: ";
    displayList(l1);

    list<string> l2(3);
    // list<string>:: iterator iter;
    // *iter_ = "suryansh";
    // iter++;
    // *iter = "vermilion";
    // iter++;
    // *iter = "grover";

    // for (iter=l2.begin(); iter!=l2.end(); iter++)
    // {
    //     string s;
    //     cout << "Enter the string element to be inserted: ";
    //     cin >> s; 
    //     *iter = s;
    // }
    // cout << "displaying l2: ";
    // displayList(l2);

    // merging l1 and l2
    // l1.merge(l2);
    // cout << "displaying l1 afer merging w l2: "; // can't merge a string list with an int type
    // displayList(l1);
    
    // Reversing a list:
    // l2.reverse();
    // cout << "displaying l2 after reversing: ";
    // displayList(l2);

    list<int> l3(5);

    l3.push_back(15);
    l3.push_back(17);
    l3.push_back(26);
    l3.push_back(18);
    l3.push_back(11);
    // Note: So pushing_back doesn't replace vals, it actually add kinda more cells to the list.

    cout << "displaying l3: ";
    displayList(l3);

    // Swap:
    // l1.swap(l3);
    // cout << "l1: ";
    // displayList(l1);
    // cout << "l3: ";
    // displayList(l3);
    // return 0;

    cout << "*************************** Splicing ***************************" << endl;
    // Slicing: // operation 1:
    cout << "Operation 1:" << endl;
    l1.splice(l1.begin(), l3); // inserted all elements of the l3 at 0th index of l1 and made l3 empty.
    cout << "l1 now: ";
    displayList(l1);

    // operation 2:
    cout << "Operation 2:" << endl;
    l3.splice(l3.begin(), l1);
    cout << "l3 now: ";
    displayList(l3); // now, it's empty

    // operation 3:
    cout << "Operation 3:" << endl;
    list<int>::iterator iter;
    iter = l3.begin();
    iter++;
    iter++;
    iter++;
    iter++;
    iter++;
    cout << *iter << endl;
    l1.splice(l1.begin(), l3, iter++, l3.end()); // last two arguments: start && stop, defines a range of elements to be inserted.
    cout << "l1 now: ";
    displayList(l1);
    cout << "l2 now: ";
    displayList(l2);

    return 0;
}