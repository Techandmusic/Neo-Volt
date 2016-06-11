#include <iostream>
#include <cstdlib>
using namespace std;


// variables to be used in the program
double result, valueA, valueB, valA, valB;
int choice;
char cont;

//functions to perform the calculations

double mult(double valueA, double valueB) {
    result = valueA * valueB;
    return result;
}

double div(double valueA, double valueB) {
    result = valueA / valueB;
    return result;
}



// functions that prompt the user for values to be calculated


double getValueA(string unit) {
    cout << "Enter " << unit << ": " << endl;
    cin >> valA;
    cout << endl;
    return valA;
}

double getValueB(string unit) {
    cout << "Enter " << unit << ": " << endl;
    cin >> valB;
    cout << endl;
    return valB;
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
void displayResult(string units) {
    cout << result << " " << units;
    cout << endl << endl;

}
// Takes the users choice and calls functions accordingly
void processMenu() {
    cin >> choice;
    switch(choice) {
    case 0:
        exit(0);
    case 1:
        getValueA("Amps");
        getValueB("Ohms");
        mult(valA, valB);
        displayResult("Volts");
        break;
    case 2:
        getValueA("Volts");
        getValueB("Amps");
        div(valA, valB);
        displayResult("Ohms");
        break;
    case 3:
        getValueA("Volts");
        getValueB("Ohms");
        div(valA, valB);
        displayResult("Amps");
        break;
    case 4:
        getValueA("Volts");
        getValueB("Amps");
        mult(valA, valB);
        displayResult("Watts");
        break;
    case 5:
        getValueA("Watts");
        getValueB("Amps");
        div(valA, valB);
        displayResult("Volts");
        break;
    case 6:
        getValueA("Watts");
        getValueB("Volts");
        div(valA, valB);
        displayResult("Amps");
        break;
    default:
        cout << "Invalid choice.";
    }

}




int main()
{
    title();
    do {
        showMenu();
        processMenu();
        cout << "Perform another calculation? (y or n)" << endl;
        cin >> cont;
    } while(cont != 'n');
    //I may have the program run in a while, or do/while loop.

    return 0;
}
