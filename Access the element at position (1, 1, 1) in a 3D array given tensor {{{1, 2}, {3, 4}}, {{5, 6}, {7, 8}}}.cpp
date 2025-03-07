//c++ program to access the element at position (1, 1, 1) in a 3D array given tensor {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}}

/*Authour: Masindanoo Masila
Reg No: BSCIT-05-0133/2024
Date: Fri mar, 7
Version: 2*/

// Preprocessor directives
#include <iostream>
using namespace std;

// Main function
int main() {
    int tensor[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };

    // Accessing the element at position (1, 1, 1)
    cout<<"Element at position (1, 1, 1) is: "<<tensor[1][1][1]<<endl;
    return 0;
}