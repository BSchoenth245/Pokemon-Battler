#include "FUNCTIONS.H"


int main(){
    int playerChoice;
    int attackChoice;
    string player1Active;
    string player2Active;
    string pokemonArray[2][9] = {
        //name, type 1, type 2(if applicable), hp, attack, defense, sp att, sp def, speed
        {"Venesaur", "grass", "poison", "80", "82", "83", "100", "100", "80"},
        {"Charizard", "fire", "flying", "78", "84", "78", "109", "85", "100"}
    };
    string pokemonAttackArray[2][5] = {
        //name, type, move type(0=physical,1=special,2=status), power, accuracy
        {"Vine Whip", "grass", "0", "45", "100"},
        {"Fire Fang", "fire", "0", "65", "95"}
    };

    double effectCal = effectCalc(pokemonAttackArray[1][1], pokemonArray[0][1], pokemonArray[0][2]);

    int damage = attackCalculation(stod(pokemonArray[1][4]), stod(pokemonArray[0][5]), stoi(pokemonAttackArray[1][3]), true, 
    effectCal);

    cout << "Damage: " << damage << endl;

    cout << "Final Damage: " << damage*effectCal << endl;

}