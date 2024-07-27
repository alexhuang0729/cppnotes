#include <iostream>
#include "getInput.h"
using namespace std;

float getNums() 
{
    cout << "Enter in a value: ";
    float value;
    cin >> value;
    return value;
}

char getOp () 
{
    cout << "Enter in the operation : ";
    char operation;
    cin >> operation;
    return operation;
}  
