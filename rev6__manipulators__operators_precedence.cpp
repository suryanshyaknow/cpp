# include <iostream>
# include <iomanip>
using namespace std;

int main() {

    // ************** Constants: *******************
    // const float Pi = 22/7;
    // cout << "The val of Pi was: " << Pi << endl;

    // Pi = 3.14; // trying to chang the val of Pi..
    // cout << "The val of Pi is: " << Pi << endl; // obviously, we'll get erorr!

    // ************** Manipulators: (Examples: end, set_w, setbase, etc.) ************************

    /* Manipulators are operators that are used (in ostream and istream) to format the data display.
    To access manipulators, the file iomanip.h should be included in the program. */

    /* endl: It is defined in ostream. It is used to enter a new line and after entering a new line..
    it flushes (i.e. it forces all the output written on the screen or in the file) the output stream.*/

    // ws: It is defined in istream and is used to ignore the whitespaces in the string sequence.

    /* ends: It is also defined in ostream and it inserts a null character into the output stream.
    It typically works with std::ostream, when the associated output buffer needs to be null-terminated
    to be processed as a C string. */

    // flush: It is also defined in ostream and it flushes the output stream,
    // i.e. it forces all the output written on the screen or in the file. Without flush,..
    // the output would be the same, but may not appear in real-time.

    int a = 12;
    int b = 1212;
    int c = 12131415;

    cout << "a: " << setw(8) << a << endl;
    cout << "b: " << setw(8) << b << endl;
    cout << "c: " << setw(8) << c << endl;

    return 0;
}