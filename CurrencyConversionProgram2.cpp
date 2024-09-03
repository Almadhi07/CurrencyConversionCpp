#include <iostream>  // Include the iostream library for input/output
using namespace std; // Use the standard namespace

int main() {
    const float USD = 1.0000;
    const float GBP = 1.8264;
    const float CAD = 0.949938;
    const float EUR = 1.46849;
    const float AUD = 0.861801;
    const float JPY = 6.8400;
    const float LIRA = 32.2456;

    float amount;
    char sourceCurrency, targetCurrency;
    float sourceRate, targetRate;
    float convertedAmount;

    cout << "Enter the amount: ";
    cin >> amount;

    cout << "Enter the source currency (U for USD, G for GBP, C for CAD, E for EUR, A for AUD, J for JPY, L for LIRA): ";
    cin >> sourceCurrency;

    cout << "Enter the target currency (U for USD, G for GBP, C for CAD, E for EUR, A for AUD, J for JPY, L for LIRA): ";
    cin >> targetCurrency;

    switch (sourceCurrency) {
        case 'U': sourceRate = USD; break;
        case 'G': sourceRate = GBP; break;
        case 'C': sourceRate = CAD; break;
        case 'E': sourceRate = EUR; break;
        case 'A': sourceRate = AUD; break;
        case 'J': sourceRate = JPY; break;
        case 'L': sourceRate = LIRA; break;
        default: sourceRate = -1; break;
    }

    switch (targetCurrency) {
        case 'U': targetRate = USD; break;
        case 'G': targetRate = GBP; break;
        case 'C': targetRate = CAD; break;
        case 'E': targetRate = EUR; break;
        case 'A': targetRate = AUD; break;
        case 'J': targetRate = JPY; break;
        case 'L': targetRate = LIRA; break;
        default: targetRate = -1; break;
    }

    if (sourceRate == -1 || targetRate == -1) {
        cout << "Invalid currency code entered." << endl;
    } else {
        convertedAmount = amount * (targetRate / sourceRate);
        cout << amount << " in " << sourceCurrency << " is equivalent to " << convertedAmount << " in " << targetCurrency << endl;
    }

    return 0;
}