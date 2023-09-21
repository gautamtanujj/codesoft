#include <iostream>

using namespace std;

int main()
{
    char choice;
    double num1, num2, result;

    cout << "Welcome to the Smart Calculator!" << endl;

    // Input the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Input the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Input the choice to perform
    cout << "Choose a choice (+, -, *, /): ";
    cin >> choice;

    // Perform the selected choice and display the result
    switch (choice)
    {
    case '+':
        result = num1 + num2;
        cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
        }
        else
        {
            cout << "Error: Division by zero is not possible." << endl;
        }
        break;
    default:
        cout << "Error: choice is invalid" << endl;
    }

    return 0;
}