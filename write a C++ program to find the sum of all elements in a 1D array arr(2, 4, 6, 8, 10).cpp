//C++ program to find the sum of all elements in a 1D array arr(2, 4, 6, 8, 10)
/*Authour: Masindanoo Masila
Reg No: BSCIT-05-0133/2024
Date: Fri mar, 7
Version: 2*/

//code
#include <iostream> //header file
using namespace std; //using standard namespace

//main function
int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int sum = 0;

    //loop to find the sum of all elements in the array
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    //output
    cout << "Sum of all elements in the array is: " << sum << endl;
    return 0;
}