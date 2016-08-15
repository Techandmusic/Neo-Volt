#include <iostream>
#include <cstdlib>

using namespace std;


// function that prompts the user for values to be calculated




double getValue(string unit) {
    double value;
    cout << "Enter " << unit << ": " << endl;
    cin >> value;
    return value;
}


void title() {
    cout << "**** NEO-VOLT ELECTRICAL CALCULATOR ****" << endl;
    cout << "*               by                     *" << endl;
    cout << "*            Adam Pate                 *" << endl;
    cout << "****************************************" << endl;
    cout << endl << endl << endl;
}

void showMenu() {
    cout << "     Main Menu:     " << endl;
    cout << endl;
    cout << "Ohm's Law" << endl;
    cout << "     1. Voltage     " << endl;
    cout << "     2. Resistance     " << endl;
    cout << "     3. Current     " << endl;
    cout << "Power Law" << endl;
    cout << "     4. Wattage     " << endl;
    cout << "     5. Voltage     " << endl;
    cout << "     6. Current     " << endl;
    cout << endl;
    cout << "     0. Exit the program     " << endl;



}
//Shows results of the calculation
void displayResult(double result, string units) {
    cout << result << " " << units;
    cout << endl << endl;

}
// Takes the users choice and calls functions accordingly
void processMenu() {
    int choice;
    double amps, ohms, watts, volts;
    cin >> choice;
    switch(choice) {
    case 0:
        exit(0);
    case 1:
        amps = getValue("Amps");
        ohms = getValue("Ohms");

        displayResult(amps * ohms, "Volts");
        break;
    case 2:
        volts = getValue("Volts");
        amps = getValue("Amps");

        displayResult(volts / amps, "Ohms");
        break;
    case 3:
        volts = getValue("Volts");
        ohms = getValue("Ohms");

        displayResult(volts / ohms, "Amps");
        break;
    case 4:
        volts = getValue("Volts");
        amps = getValue("Amps");

        displayResult(volts * amps, "Watts");
        break;
    case 5:
        watts = getValue("Watts");
        amps = getValue("Amps");

        displayResult(watts / amps, "Volts");
        break;
    case 6:
        watts = getValue("Watts");
        volts = getValue("Volts");

        displayResult(watts / volts, "Amps");
        break;
    default:
        cout << "Invalid choice.";
    }

}




int main()
{

    title();
    while(true) {
    showMenu();
    processMenu();
    cout << "Perform another calculation? (y or n)" << endl;
    char repeat;
    cin >> repeat;
    switch(repeat) {
case 'y':

    break;
case 'n':
    exit(0);
    break;
default:
    cout << "Invalid choice, enter 'y' or 'n'." << endl;
    }
  }


    return 0;
}
