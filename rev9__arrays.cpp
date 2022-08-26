#include<iostream>
using namespace std;

int main(){
    // Arrays:
    
    /* An Array is a collection of elements having the exact same datatype stored in the contiguous 
    memory locations.

    Why use Arrays?! Need?
    Oftentimes, a regular variable is not enough (as well as suitable approach) to hold all the data we desire.

    For example: if we wanna store the marks of 1000 students,
    having discrete 100 variables is not a feasible approach.

    We could simply define an array (of the desired datatype) with the size 1000
    that can hold the marks of all 1000 students.

    Only Disadvantage (perhaps!):
    Size Limit: We can store only the fixed size of elements in the array. It doesn’t grow its size at runtime.  
    */

    // Marks:
    int marks[] = {49, 51, 39, 28};
    for (int i = 0; i<4; i++){
        cout << "Marks at the index " << i << " is: " << marks[i] << endl;
    }cout << "\n";

    // Ace-marks:
    // int acemarks[] = {23,29,33,40};
    // int j = 0;
    // while (j<4){
    //     cout << "Ace-marks at the index " << j << " is: " << acemarks[j] << '\n';
    //     j++;
    // }cout << endl;

    // Grace-marks:
    // int gracemarks[] = {10, 9, 17, 19};
    // int k = 0;
    // do{
    //     cout << "Grace-marks at the index " << k << " is: " << gracemarks[k] << '\n';
    //     k++;
    // }while(k<4);
    // cout << endl;

    // Note:
    // int score[4];
    // score = {12,34,45,65};
    // We are not allowed to create an array like this. idk why!

    //-------------------------------------------------------------------------------------------
    //******************** Pointers & Arrays: ***************************************************

    /* We do not need to use the reference operator here;
    Because variable_name of the array itself stores the address. */
    cout << "Marks: " << marks << endl;
    // int* p = &marks; 
    // cout <<  p << endl;
    // Error: invalid conversion from 'int (*)[4]' to 'int' [-fpermissive]
    // So that's the wong approach here!

    int* p = marks; 
    cout << "p: " << p << endl;
    cout << "*p (dereferencing or marks[0]): " << *p << endl; // marks[0]
    cout << "*(p++): " << *(p++) << endl; // earlier p was 0, still zero cuz post increement // p (now at index 1)
    cout << "*(++p): " << *(++p) << endl; // earlier p was 1 after printing, now 2 cuz pre increement

    // Accessing values of the array marks through the DEREFERENCE operator:
    // for (int i = 0; i<4; i++){
    //     cout << *(p+i) << endl;
    // }

    // *********** Pointer Arithmetic: ************** // what's happening behind the scenes..
    /* new_address = current_address + i*size_of_datatype
    where i = index of the array at hand..
    */
    cout << "marks+1 (the address of the very next index): " << marks+1 << endl;

    for (int i = 0; i<4; i++) {
        cout << "\nThe address of the block_" << i << " of the array_marks is: " << (marks + i) << endl;
    }

    return 0;
}