#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double num1, num2;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') 
    {
        cout << "Answer " << num1 + num2;
    } 
    
    else if (op == '-') 
    {
        cout << "Answer " << num1 - num2;
    } 
    
    else if (op == '*') 
    {
        cout << "Answer " << num1 * num2;
    } 
    
    else if (op == '/') 
    
    {
        if (num2 == 0) 
        {
            cout << "Error! Division by zero";
        } else 
        {
            cout << "Answer " << num1 / num2;
        }
    } 
    
    else 
    
    {
        cout << "Error! Invalid operator";
    }

    if (num1 < 0) 
    
    {
        cout << "Face val of first number is: " << abs(num1);
    } else 
    
    

    return 0;
}


