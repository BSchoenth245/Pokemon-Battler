#include "functions.h"
/*

    Main file that controls and dictates the order of operations

*/

int main(){
    int playerChoice;
    int attackChoice;
    string player1Active;
    string player2Active;
    extern string pokemonArray[2][9];
    extern string pokemonAttackArray[2][5];

    
    if(accuracyCalc(stoi(pokemonAttackArray[1][4]))){

    double effectCal = effectCalc(pokemonAttackArray[1][1], pokemonArray[0][1], pokemonArray[0][2]);

    double damage = attackCalculation(stod(pokemonArray[1][4]), stod(pokemonArray[0][5]), stoi(pokemonAttackArray[1][3]), true, 
    effectCal);

    cout << "Damage: " << damage << endl;

    cout << "Final Damage: " << damage*effectCal << endl;
    }
    else{
        cout << "Attack Missed" << endl;
    }

}