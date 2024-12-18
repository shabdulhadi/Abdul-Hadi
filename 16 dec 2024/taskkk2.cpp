#include <iostream>
#include <iomanip> 
using namespace std;

float taxCalculator(char type, float price) {
    float taxRate = 0.0;

    switch (type) {
    case 'M': taxRate = 6; break;  // Motorcycle
    case 'E': taxRate = 8; break;  // Electric
    case 'S': taxRate = 10; break; // Sedan
    case 'V': taxRate = 12; break; //van
    case 'T': taxRate = 15; break; //taxi
    default:
        cout << "Invalid vehicle type code entered.\n";
        return -1; // Indicate an error
    }

    float taxAmount = (price * taxRate) / 100;
    return price + taxAmount; 
}

int main() {
    char vehicleType;
    float price, finalPrice;

    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> vehicleType;
    cout << "Enter the final price of the vehicle: $";
    cin >> price;

    finalPrice = taxCalculator(vehicleType, price);

    if (finalPrice != -1) {
        cout << fixed << setprecision(2); 
        cout << "The final price of vehicle of type " << vehicleType
            << " after adding the tax is $" << finalPrice << endl;
    }

    return 0;
}