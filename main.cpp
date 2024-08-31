#include <iostream>

using namespace std;

class CurrencyConverter {
private:
    double usdToEuroRate;
    double euroToUsdRate;
    double usdToPakRupeeRate;
    double usdToIndRupeeRate;

public:
    CurrencyConverter(double usdToEuro, double euroToUsd, double usdToPak, double usdToInd) 
        : usdToEuroRate(usdToEuro), euroToUsdRate(euroToUsd), usdToPakRupeeRate(usdToPak), usdToIndRupeeRate(usdToInd) {}

    // Method to convert USD to Euro
    double usdToEuro(double usdAmount) const {
        return usdAmount * usdToEuroRate;
    }

    // Method to convert Euro to USD
    double euroToUsd(double euroAmount) const {
        return euroAmount * euroToUsdRate;
    }

    // Method to convert USD to Pakistani Rupee
    double usdToPakRupee(double usdAmount) const {
        return usdAmount * usdToPakRupeeRate;
    }

    // Method to convert USD to Indian Rupee
    double usdToIndRupee(double usdAmount) const {
        return usdAmount * usdToIndRupeeRate;
    }

    // Display Exchange Rates
    void displayExchangeRate() const {
        cout << "\n\t--------Current Exchange Rates -----------\n";
        cout << "1 USD to Euro: " << usdToEuroRate << endl;
        cout << "1 Euro to USD: " << euroToUsdRate << endl;
        cout << "1 USD to Pakistani Rupee: " << usdToPakRupeeRate << endl;
        cout << "1 USD to Indian Rupee: " << usdToIndRupeeRate << endl;
    }
};

int main() {
    const double initialUsdToEuroRate = 0.85;
    const double initialEuroToUsdRate = 1.18;
    const double initialUsdToPakRate = 277.50;
    const double initialUsdToIndRate = 75.00;

    CurrencyConverter converter(initialUsdToEuroRate, initialEuroToUsdRate, initialUsdToPakRate, initialUsdToIndRate);

    int choice;
    double amount;

    do {
        converter.displayExchangeRate();

        cout << "\n\t*** Currency Converter Main Menu ****\n";
        cout << "1. Convert USD to Euro\n";
        cout << "2. Convert Euro to USD\n";
        cout << "3. Convert USD to Pakistani Rupee\n";
        cout << "4. Convert USD to Indian Rupee\n";
        cout << "0. Exit\n";
        cout << "Please Enter Your Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter the Amount in USD: ";
                cin >> amount;
                cout << amount << " USD is Equivalent to " << converter.usdToEuro(amount) << " Euro\n";
                break;

            case 2:
                cout << "Enter the Amount in Euro: ";
                cin >> amount;
                cout << amount << " Euro is Equivalent to " << converter.euroToUsd(amount) << " USD\n";
                break;

            case 3:
                cout << "Enter the Amount in USD: ";
                cin >> amount;
                cout << amount << " USD is Equivalent to " << converter.usdToPakRupee(amount) << " Pakistani Rupee\n";
                break;

            case 4:
                cout << "Enter the Amount in USD: ";
                cin >> amount;
                cout << amount << " USD is Equivalent to " << converter.usdToIndRupee(amount) << " Indian Rupee\n";
                break;

            case 0:
                cout << "Program Ended\n";
                break;

            default:
                cout << "Please Enter a Valid Number\n";
        }

        // Pause to allow user to read output
        cout << "Press Enter to continue...";
        cin.ignore();  // Discard any leftover newline characters
        cin.get();     // Wait for user to press Enter

    } while(choice != 0);

    return 0;
}
