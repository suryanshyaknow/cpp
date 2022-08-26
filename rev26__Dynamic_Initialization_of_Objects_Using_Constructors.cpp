#include <iostream>
using namespace std;

//*************************** Dynamic Initialization of Objects Using Constructors **********************************************

/* The dynamic initialization of the object means that the object is initialized at the runtime. Dynamic initialization of the 
object using a constructor is beneficial when the data is of different formats.
--> Now the compiler's gotta figure out which constructor to execute.
*/

class BankDeposit
{
    int principal, years;
    float interestRate, returnVal;

public:
    BankDeposit(){};
    /*Note: This empty constructor is just for the sole purpose of creating an object anyhow even when the values passed are none. 
    --> Offcourse, it's gonna throw garbage vals.
    */

    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r); // r be here will in percentage
    void display();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;

    cout << "You deposited: $" << principal << endl;
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100; // converting the percentage in actual increement rate

    cout << "You deposited: $" << principal << endl;
}

void BankDeposit::display()
{   
    returnVal = principal;

    for (int i = 1; i <= years; i++)
    {
        returnVal = returnVal * (1 + interestRate);
    }
    cout << "\nYou will be getting $" << returnVal << " after " << years << " years." << endl;
}

int main()
{
    int p, y;
    int r;
    float R;
    BankDeposit bd1, bd2, bd3;
    /* The only reason why we are able to declare these objects without passing any arguments is just because of the
    the constructor that takes no arguments and does nothing at all.
    --> Try to remove it and see what it's been doing for ya!
    */

    cout << "Enter the principal amount, time of span you'd want to withdraw it after and the bank interest rate: " << endl;
    cin >> p >> y >> R;
    bd1 = BankDeposit(p, y, R);
    bd1.display();

    cout << "Enter the principal amount, time of span you'd want to withdraw it after and the bank interest rate(in %): " << endl;
    cin >> p >> y >> r;
    bd2 = BankDeposit(p, y, r);
    bd2.display();

    bd3.display();

    // bd1 = BankDeposit(100, 4, 4);
    // bd1.display();
    
    // bd2 = BankDeposit(100, 4, 0.04);
    // bd2.display();
    return 0;
}