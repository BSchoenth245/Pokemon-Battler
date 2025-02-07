#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

double round(double num){
    num = (int)(num*100);
    return (double)num/100;
}

double attackCalculation(double attack, double defense, int base, bool STAB){
    srand(time(0));
    cout << attack << endl;
    cout << defense << endl;
    cout << base << endl;
    double randNum = (85+rand()%16);
    cout << "random number: " << (randNum / 100) << endl;
    double step1 = 0.30;
    double step2 = round((attack / defense));
    cout << step2 << endl;
    double step3;
    
    if(STAB){
        step3 = round(base*1.5*(randNum / 100));
    }
    else{
        step3 = round(base*randNum);
    }
    cout << step3 << endl;
    return round(step1*step2*step3);
}

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