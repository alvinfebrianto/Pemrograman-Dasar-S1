# include <iostream>
# include <conio.h>
using namespace std;

int main() {
    char op;
    float num1, num2;

	cout << "Enter any two number: ";
    cin >> num1 >> num2; cout << endl;
    
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op; cout << endl;

    switch(op) {
        case '+':
            cout << "The calculated result is : " << num1 + num2;
            break;

        case '-':
            cout << "The calculated result is : " << num1 - num2;
            break;

        case '*':
            cout << "The calculated result is : " << num1 * num2;
            break;

        case '/':
            cout << "The calculated result is : " << num1 / num2;
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }

    getch();
}
