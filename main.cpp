#include "FUNCTIONS.H"
#include "PokemonArray.cpp"

int main(){
    int playerChoice;
    int attackChoice;
    string player1Active;
    string player2Active;
    extern string pokemonArray[2][9];
    extern string pokemonAttackArray[2][5];

    double effectCal = effectCalc(pokemonAttackArray[1][1], pokemonArray[0][1], pokemonArray[0][2]);

    int damage = attackCalculation(stod(pokemonArray[1][4]), stod(pokemonArray[0][5]), stoi(pokemonAttackArray[1][3]), true, 
    effectCal);

    cout << "Damage: " << damage << endl;

    cout << "Final Damage: " << damage*effectCal << endl;

}