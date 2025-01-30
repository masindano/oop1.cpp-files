// c++ program
/*Authour: Masindano Masila
Reg No: BSCIT-05-0133/2024
Date: 30/01/2025
Version 2*/

#include <iostream> // cout, cin, 
#include <string>

using namespace std; // cout, cin, endl

//class
class Car {
    public: //acess modifier - inside and outside the class
    string brand;
    string model;
    float price;
    int mileage;

    //function to display car details
    void display(){
        cout<< "Car details:"<<endl;
        cout<< " Brand: "<<brand<<endl;
        cout<< " Model: "<<model<<endl;
        cout<< " Price: $"<<price<<endl;
        cout<< " Mileage: "<<mileage<<" miles"<<endl;
}
  
  //Function to drive the car and update  mileage
  void drive(int distance) {
    mileage += distance;
    cout<<"Update mileage after driving "<<distance<<" miles: "<<mileage<< " miles" <<endl;
  }
};

  int main() {
    // creating car object
    Car myCar;

    // Assigning values given manually
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.price = 20000;
    myCar.mileage = 5000;

    //Displaying car details
    myCar.display();

    //simulating driving for 150 miles
    myCar.drive(150);

    //simulating driving for 300 miles
    myCar.drive(300);

    return 0;
}


