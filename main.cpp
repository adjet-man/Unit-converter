#include <iostream>
using namespace std;

int main() {
    int choice;
    double value;

    // Welcome message and unit selection menu
    cout << "Welcome to Unit Converter!\n\n";
    cout << "Please select the type of unit you want to convert:\n";
    cout << "1. Length\n";
    cout << "2. Weight\n";
    cout << "3. Temperature\n\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        // Length conversion menu
        cout << "\nYou have selected Length.\n";
        cout << "Please enter the value in meters: ";
        cin >> value;

        cout << "\nConvert to:\n";
        cout << "1. Kilometers\n";
        cout << "2. Centimeters\n";
        cout << "3. Inches\n";
        cout << "4. Feet\n\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Conversion from meters to kilometers
                cout << "\n" << value << " meters is " << value / 1000 << " kilometers.\n";
                break;
            case 2:
                // Conversion from meters to centimeters
                cout << "\n" << value << " meters is " << value * 100<< " centimeters.\n";
                break;
            case 3:
                // Conversion from meters to inches
                cout << "\n" << value << " meters is " << value * 39.3701 << " inches.\n"; 
                break;
            case 4:
                // Conversion from meters to feet
                cout << "\n" << value << " meters is " << value * 3.28084 << " feet.\n";
                break;
            default:
                // Invalid choice
                cout << "\nInvalid choice. Please try again.\n";
        }
    } else if (choice == 2) {
        // Weight conversion menu
        cout << "\nYou have selected Weight.\n";
        cout << "Please enter the value in kilograms: ";
        cin >> value;

        cout << "\nConvert to:\n";
        cout << "1. Grams\n";
        cout << "2. Pounds\n";
        cout << "3. Ounces\n\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Conversion from kilograms to grams
                cout<< "\n" << value <<" kilograms is "<<value*1000<<" grams.\n"; 
                break;
            case 2:
                // Conversion from kilograms to pounds
                cout<< "\n" << value <<" kilograms is "<<value*2.20462<<" pounds.\n"; 
                break;
            case 3:
               // Conversion from kilograms to ounces
               cout<< "\n" << value <<" kilograms is "<<value*35.274<<" ounces.\n"; 
               break;
            default:
               // Invalid choice
               cout<< "\nInvalid choice. Please try again.\n"; 
        }
    } else if (choice == 3) {
        // Temperature conversion menu
        cout << "\nYou have selected Temperature.\n";
        cout << "Please enter the value in Celsius: ";
        cin >> value;

        cout << "\nConvert to:\n";
        cout << "1. Fahrenheit\n";
        cout << "2. Kelvin\n\n";
        cout << "Enter your choice (1-2): ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Conversion from Celsius to Fahrenheit
                cout<< "\n" << value <<" Celsius is "<<(value * 1.8) + 32<<" Fahrenheit.\n"; 
                break;
            case 2:
               // Conversion from Celsius to Kelvin
               cout<< "\n" << value <<" Celsius is "<<value+273.15<<" Kelvin.\n"; 
               break;
            default:
                // Invalid choice
                cout<< "\nInvalid choice. Please try again.\n"; 
        }
    }

    return 0;
}