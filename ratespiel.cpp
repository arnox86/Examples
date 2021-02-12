
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;


int main () {
    srand ( static_cast <unsigned int> (time (nullptr)));       // Starting randomizer
    unsigned int random = (rand() % 10) + 1;            // Get radom number

    int input = 0;          // Variable for input
    unsigned int attempts = 0;  // Number of attempts
    
    cout << "Geben Sie Ihre Zahl ein: ";
    cin >> input;

    while (input != random && input != -1) {

        if (input < random) {
            cout << "Leider zu klein! Naechster Versuch oder tippe -1: ";
        }
        else {
            cout << "Leider zu gross! Naechster Versuch oder tippe -1: ";
        }

        cin >> input;
        attempts ++;
    }

    if (input == -1) {
        cout << "Schade, vielleicht das naechste Mal! Die Zahl war " << random << endl;
    }
    else {
        cout << "Prima, die Zahl war " << random << "! Versuche: " << attempts << endl;
    }
    
}
