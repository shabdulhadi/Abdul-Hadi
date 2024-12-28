#include<iostream>
using namespace std;
double add(double number1, double number2);
double sub(double number1, double number2);
double mul(double number1, double number2);
double div(double number1, double number2);
int main() {
    double number1, number2, ans;
    char opertr;
    cout << "Enter number 1:";
    cin >> number1;
    cout << "Enter number 2:";
    cin >> number2;
    cout << "Enter any operator(+,-,*,/)";
    cin >> opertr;
    if (opertr == '+')
    {
        ans = add(number1, number2);
    }
    else if (opertr == '-')
    {
        ans = sub(number1, number2);
    }
    else if (opertr == '*')
    {
        ans = mul(number1, number2);
    }
    else if (opertr == '/')
    {
        ans = div(number1, number2);
    }
    else
    {
        cout << "the entered number is invalid";
    }
    cout << "Calculated result = " << ans;
    return 0;

}
double add(double no1, double no2)
{
    return no1 + no2;
}
double sub(double number1, double number2)
{
    return number1 - number2;
}
double mul(double number1, double number2)
{
    return number1 * number2;
}
double div(double number1, double number2)
{
    return number1 / number2;
}