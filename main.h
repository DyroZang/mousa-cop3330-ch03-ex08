/*
*  UCF COP3330 Fall 2021 Assignment 5 Solution
*  Copyright 2021 Gabriel Mousa
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
    int val = 0;

    //Get the value
    cout << "Please enter a value: ";
    cin >> val;

    //If else which checks for even or odd using mod then prints accordingly
    if(val % 2 == 0){
        cout << "The value " << val << " is an even number";
    } else{
        cout << "The value " << val << " is an odd number";
    }
    

} 