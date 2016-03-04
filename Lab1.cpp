/*
Student ID : H34011128
Student Name : CHEN, Chih-Yu
Purpose : The program is to implement question b of Lab1 assigned on 2016/3/1
*/
#include<iostream>
using namespace std;

int main(){
     int number;                                                                // declare the parameter number
     cout << "Please input the number : ";
     while( cin >> number ){                                                    // recieve the input number with while loop
          cout << number <<" ";
          while( number != 1 ){                                                 // set the termination condition
               if( number % 2 )                                                 // if number is even
                    number = 3 * number + 1 ;
                else                                                            // if number is odd
                    number = number / 2 ;
                cout<< number << " ";                                           // print out the corresponding sequence of numbers
          }
          cout << endl << "Please input the number : ";
     }
     return 0;
}
