#include <iostream>
#include <iomanip>

using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0/9.0;
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5.0/9.0;
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return (kelvin * 9.0/5.0) - 459.67;
}

// Function to handle conversion based on input unit
void convertTemperature(double value, char unit) {
    cout << fixed << setprecision(2); // Set precision for decimal places
    
    if (unit == 'C' || unit == 'c') {
        double fahrenheit = celsiusToFahrenheit(value);
        double kelvin = celsiusToKelvin(value);
        cout << value << "°C is " << fahrenheit << "°F and " << kelvin << "K.\n";
    } 
    else if (unit == 'F' || unit == 'f') {
        double celsius = fahrenheitToCelsius(value);
        double kelvin = fahrenheitToKelvin(value);
        cout << value << "°F is " << celsius << "°C and " << kelvin << "K.\n";
    } 
    else if (unit == 'K' || unit == 'k') {
        double celsius = kelvinToCelsius(value);
        double fahrenheit = kelvinToFahrenheit(value);
        cout << value << "K is " << celsius << "°C and " << fahrenheit << "°F.\n";
    } 
    else {
        cout << "Invalid unit. Please enter C for Celsius, F for Fahrenheit, or K for Kelvin.\n";
    }
}

int main() {
    double temperature;
    char unit;
  
    cout << "Enter the temperature value: ";
    cin >> temperature;
    
    cout << "Enter the unit of the temperature (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    // Call the function to convert and display the results
    convertTemperature(temperature, unit);

    return 0;
}
