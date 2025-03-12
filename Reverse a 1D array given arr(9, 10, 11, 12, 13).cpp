//C++ program to reverse a 1D array given arr(9, 10, 11, 12, 13)
/*Authour: Masindanoo Masila
Reg No: BSCIT-05-0133/2024
Date: Fri mar, 7
Version: 2*/

//code
#include <iostream> //header file
using namespace std; //using standard namespace


//main function
int main () {
    int arr[] = {9, 10, 11, 12, 13};
    int n = 5;

    //display the original array
    cout<<"Original array: ";
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Reversed array: ";

    //loop to reverse the array
    for (int i = n-1; i >= 0; i--) {
        cout<<arr[i]<<" ";
    }

    //output reversed array
    cout<<endl;
    return 0;
}