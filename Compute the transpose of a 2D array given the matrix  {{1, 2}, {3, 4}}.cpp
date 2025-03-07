//c++ program to compute the transpose of a 2D array given the matrix {{1, 2}, {3, 4}}

/*Authour: Masindanoo Masila
Reg No: BSCIT-05-0133/2024
Date: Fri mar, 7
Version: 2*/

//include library
#include <iostream>
using namespace std;

//main program
int main () {
    int arr[2][2] = {{1, 2}, {3, 4}};
    int transpose[2][2];

    //transpose the matrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            transpose[i][j] = arr[j][i];
        }
    }

    //display the original matrix
    cout << "Original matrix is: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //display the transpose matrix
    cout << "Transpose of the matrix is: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}