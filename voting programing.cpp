// c++ program to check whether a person is eligible to vote or not
 /*Authour: Joestancy Evelya
 Reg NO.: BSCIT-05-0157/2024
 Date: mar 15, 2024
 Version 1*/
 
 #include <iostream>
 
 #include <string>
 
 using namespace std;
 
 int main()
 {
     string name;
 
     int age;
 
     //prompts the person to enter the name 
 
     cout<<"Enter your name:"<<endl;
 
     cin>>name;
 
     //prompts the person to enter the age
 
     cout<<"Enter your age:"<<endl;
 
     cin>>age;
 
     //consinder the condition
 
     if(age>=18)
     {
         cout<<"You are eligible to vote";
     }
     else
     {
         cout<<"You are not eligible to vote!";
 
         return 0;
     }
 }