/*Authour: Masindano Masila
  Reg No: BSCIT-O5-0133/2024
  Date: Mon, 24 feb 2024
  Version 2
  */

//inheritance program
#include <iostream>
using namespace std;

//base class
class AccountHolder{
    protected:
    string name;

    public:
    void setName(string n){
        name = n;
    }
    string getName(){
        return name;
    }
};

//derived class
class BankAccount: public AccountHolder{
    private:
    int accountNumber;
    double balance;

    public:
    //constructor
    BankAccount(string n, int accNum, double bal){
        name = n;
        accountNumber = accNum;
        balance = bal;
    }

    //member function to return account number and balance
    int getAccountNumber(){
        return accountNumber;
    }

    double getBalance(){
        return balance;
    }

    //member function to display account details
    void display(){
        cout<<"The name is: "<<name<<endl;
        cout<<"The accountNumber is: "<<accountNumber<<endl;
        cout<<"The balance is: "<<balance<<endl;
    }
};
        
//derived class
class SavingAccount: public BankAccount{
    private:
    double interestRate;

    public:
    SavingAccount(string n, int accNum, double bal, double rate): BankAccount(n, accNum, bal){
        interestRate = rate;
    }

    //member function to calculate interest
    double calculateInterest(){
        return getBalance() * interestRate;
    }

    //member function to display account details
    void display(){
        BankAccount::display();
        cout<<"The interest is: "<<calculateInterest()<<endl;
    }
    //member function to get interest rate
    double getInterestRate(){
        return interestRate;
    }

};

int main(){
    //create an object of the derived class
    SavingAccount account("masindano Masila", 64774763478, 106776.00, 0.55);

    //print the details of the account
    account.display();

    //get and print the interest rate
    cout<<"The interest rate is: "<<account.getInterestRate()<<endl;
    
    return 0;
}   