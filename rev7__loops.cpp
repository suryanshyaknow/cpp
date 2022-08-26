# include <iostream>
using namespace std;

int main() {

    /* LOOPS: */

    // for Loops:
    // Syntax:
    // for (initialization; condition; updation){
    // {
    //    loop body(C++ code) 
    // }
    
    // for (int i = 0; i<100; i++)
    // {
    //     if (i%2 == 0)
    //     { 
    //         cout << i << endl;
    //     }
    //     else
    //     {
    //         cout<< "Fuck ya!" << endl;
    //     }
    // }

    // while Loops:
    // Syntax:
    // while (condition){
    // {
    //    loop body(C++ code)
    //    updation; 
    // }

    // int i = 0;
    // while(i<100)
    // {
    //     if (i % 10 == 0)
    //     {
    //         cout << "ayo!" << endl;
    //     }  
    // i++;
    // }
    
    //********** do while loop: ***************

    // int i = 1;
    // do
    // {
    //     if (i % 10 == 0)
    //     {
    //         cout << "yo!" << endl;
    //     }  
    // i++;
    // } while(i<= 100);
    
    int x = 1;
    do
    {
        cout << 6 * x << endl;   
    x++;
    } while(x<= 10);


return 0;
}