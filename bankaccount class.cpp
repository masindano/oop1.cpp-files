#include <iostream>
using namespace std;

class BankAccount {
    private:
    string bankAccount;
    double balance;


    public:
    void setBankaccount(string n){
        bankAccount = n;
    }

    string getBankaccount(){
        return bankAccount;
    }

    void setBalance(double b) {
        balance =  b;
    }

    double getBalance(){
        return balance;
    }

};

int main (){
    BankAccount bl;
    bl.setBankaccount("Masindano Masila");
    cout<<"Bank account is: "<<bl.getBankaccount()<<endl;

    bl.setBalance(30000);
    cout<<"Balance is: "<<bl.getBalance()<<endl;

    return 0;
}
