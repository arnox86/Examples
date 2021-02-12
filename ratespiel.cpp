
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

// Random space size:

#define RANDOM_MIN 1    // Lowest random number
#define RANDOM_MAX 100   // Highest random number


int main () {
    srand ( static_cast <unsigned int> (time (nullptr)));       // Starting randomizer
    unsigned int random = (rand() % RANDOM_MAX) + RANDOM_MIN;            // Get radom number

    int input = 0;          // Variable for input
    unsigned int attempts = 0;  // Number of attempts
    
    cout << "Geben Sie Ihre Zahl zwischen " << RANDOM_MIN << " und " << RANDOM_MAX << " ein: ";
    cin >> input;

    while (input != random && input != -1) {        // -1 means exit

        if (input < random) {
            cout << "Leider zu klein! Naechster Versuch oder tippe -1: ";
        }
        else {
            cout << "Leider zu gross! Naechster Versuch oder tippe -1: ";
        }

        cin >> input;       // Reading new input in
        attempts ++;        // Incrementig attempts
    }

    if (input == -1) {
        cout << "Schade, vielleicht das naechste Mal! Die Zahl war " << random << endl;     // Left without right answer
    }
    else {
        cout << "Prima, die Zahl war " << random << "! Versuche: " << attempts << endl;     // Right answer
    }

}
