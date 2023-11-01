#include<bits/stdc++.h>
using namespace std;

class Account{  // created a class Account, holding data members as "account number" and "Balance". 
    public:
        int accNo;
        double balance;
};
/*Inherited the class "Account" to "Savings" through "public" visibility mode specifier. So that the data members of the class "Account" can be accessed through the objects of the class "Savings".*/
class Savings : public Account{  
    public:
        double creditBalance(double deposit){ // "creditBalance" is made public for being accessed by the objects.
            return(balance + deposit);
        }
};

int main(){
    double newBalance; 
    Savings account1; // objects of the class "Savings" is created
    account1.accNo = 133;
    account1.balance = 5000.0;
    newBalance = account1.creditBalance(3500.0); // here newBalance will be storing the RETURNED VALUE of "creditBalance".
    cout << "Account number is: " << account1.accNo << endl;
    cout << "Balance before deposit: " << account1.balance << endl;
    cout << "Updated balance: " << newBalance << endl;
    return 0;
}
