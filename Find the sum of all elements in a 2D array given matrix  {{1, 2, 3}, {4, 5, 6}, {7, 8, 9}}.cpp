//c++ program to find the sum of all elements in a 2D array given matrix  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}
/*Authour: Masindanoo Masila
Reg No: BSCIT-05-0133/2024
Date: Fri mar, 7
Version: 2*/
#include <iostream> //header file
using namespace std; //using directive

//main program
int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;

    //find the sum of all elements
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }

    //display the matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }

        //new line
        cout << endl;
    }

    //display the sum
    cout << "Sum of the elements is: "<<sum<< endl;
    return 0;
}