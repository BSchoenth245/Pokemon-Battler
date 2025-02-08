#include "FUNCTIONS.H"

double attackCalculation(double attack, double defense, int base, bool STAB, double typeEffect){
    srand(time(0));
    cout << "Attack: " << attack << endl;
    cout << "Defense: " << defense << endl;
    cout << "Base Power: " << base << endl;
    double randNum = (85+rand()%16);
    cout << "random number: " << (randNum / 100) << endl;
    double step1 = 0.30;
    double step2 = round((attack / defense));
    cout << "Step 2: " << step2 << endl;
    double step3;
    
    if(STAB){
        step3 = round(base*1.5*(randNum / 100));
    }
    else{
        step3 = round(base*randNum);
    }
    cout << "Step 3: " << step3 << endl;
    return round(step1*step2*step3);
}