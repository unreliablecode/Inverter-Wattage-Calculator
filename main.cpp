#include<iostream>
using namespace std;

int main() {
    double batteryVoltage, batteryCapacityAh, inverterEfficiency;

    // User input for battery voltage, capacity and inverter efficiency
    cout << "Enter the battery voltage (in volts): ";
    cin >> batteryVoltage;
    cout << "Enter the battery capacity (in Ah): ";
    cin >> batteryCapacityAh;
    cout << "Enter the inverter efficiency (in percentage): ";
    cin >> inverterEfficiency;

    // Calculate wattage
    double wattage = batteryVoltage * batteryCapacityAh;

    // Adjust for inverter efficiency
    double adjustedWattage = wattage * (inverterEfficiency / 100.0);

    // Output the result
    cout << "The wattage of the battery is: " << wattage << " watts" << endl;
    cout << "The wattage after considering inverter efficiency is: " << adjustedWattage << " watts" << endl;

    return 0;
}
