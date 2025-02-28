/*Authour: Masindano Masila
  Reg No: BSCIT-O5-0133/2024
  Date: Mon, 24 feb 2024
  Version 2
  */

//inheritance program
#include <iostream>
using namespace std;

//base class
class Person{
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
class LibraryMember: public Person{
    private:
       int memberID;
       int booksBorrowed;


public:
    //constructor
    LibraryMember(string n, int id, int books){
        name = n;
        memberID = id;
        booksBorrowed = books;
    }
    
    //member function to return memberID 
    int getMemberID(){
        return memberID;
    }

    //member function to return booksBorrowed
    int getBooksBorrowed(){
        return booksBorrowed;
    }

    //member function to display librarymember details
    void display(){
        cout<<"The name is: "<<getName()<<endl;
        cout<<"The memberID is: "<<memberID<<endl;
        cout<<"The booksBorrowed is: "<<booksBorrowed<<endl;
    }

};

//derived class
class PremiumMember: public LibraryMember{
    private:
    double membershipFee;


    public:
        //constructor
        PremiumMember(string n, int id, int books, double fee): LibraryMember(n, id, books){
            membershipFee = fee;
        }

        //overriding the display function
    void display(){
//display details from library member
        LibraryMember::display();
        //display membership fee
        cout<<"The membershipFee is: "<<membershipFee<<endl;
    }

    double getMembershipFee(){
        return membershipFee;
    }
};

int main(){
    //creating object of derived class
    PremiumMember p1("Masindano", 321456, 5, 500);

    //displaying the details
    p1.display();

    return 0;
}