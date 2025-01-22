// c++ program to find the volume of the cylinder

/*Author: Masindano Masila
Reg No: BSCIT-05-0133/2024
Date: 20-01-2025
Version 1*/

#include <iostream>
#include <cmath>
#define PI 3.142

using namespace std;

//functin prototype
double volume(float radius, float height);

int main()
{
    //variables to store of radius and height
    float radius, height;

    //prompts the user to enter the radius of the cylinder
    cout<<"Enter the radius of the cylinder: "<<endl;
    cin>>radius;

    //prompts the user to enter the height of the cylinder
    cout<<"Enter the height of the cylinder: "<<endl;
    cin>>height;

    //call the volume function and display the results
    cout<<"The volume of the cylinder is: "<<volume (radius, height) <<endl;

    return 0;

}
//function to calculate the volume of the cylinder
double volume (float radius, float height) {
    return PI * radius * radius * height;
}
