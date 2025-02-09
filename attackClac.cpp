#include "FUNCTIONS.H"
/*

Logic and calculation for the damage output for attacks
Contains commented out test prints

*/
double attackCalculation(double attack, double defense, int base, bool STAB, double typeEffect){
    srand(time(0));
    double basis;
    // cout << "Attack: " << attack << endl;
    // cout << "Defense: " << defense << endl;
    // cout << "Base Power: " << base << endl;

    //random number that acts as a multplier for the base strength of an attack
    double randNum = (85+rand()%16);
    // cout << "random number: " << (randNum / 100) << endl;
    
    if(STAB){
        basis = round(base*1.5*(randNum / 100)*(attack / defense));
    }
    else{
        basis = round(base*(randNum/100)*(attack / defense));
    }
    // cout << "Step 3: " << step3 << endl;
    return round(0.3*basis*typeEffect);
}