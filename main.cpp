#include "FUNCTIONS.H"

int main(){
    int playerChoice;
    int attackChoice;
    string player1Active;
    string player2Active;
    string pokemonArray[1][9] = {
        //name, type 1, type 2(if applicable), hp, attack, defense, sp att, sp def, speed
        {"Venesaur", "grass", "poison", "80", "82", "83", "100", "100", "80"}
    };
    string pokemonAttackArray[1][5] = {
        //name, type, move type(0=physical,1=special,2=status), power, accuracy
        {"Vine Whip", "grass", "0", "45", "100"}
    };

    cout << attackCalculation(stod(pokemonArray[0][4]), stod(pokemonArray[0][5]), stoi(pokemonAttackArray[0][3]), true);

}