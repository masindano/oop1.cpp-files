//c++ program to create a 3D array filled with zeros of size 2x2x2 and change the element at (1, 1, 1) to 50

/*Authour: Masindanoo Masila
Reg No: BSCIT-05-0133/2024
Date: Fri mar, 7
Version: 2*/

//code
#include <iostream>
using namespace std;

//main function
int main() {
    int arr[2][2][2] = {0};

    arr[1][1][1] = 50;

    //loop to display the 3D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }
    return 0;
}