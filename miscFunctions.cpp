#include "functions.h"
using namespace std;
/*

Contains all miscellaneous functions that are not large enough to necessitate their own file

*/
bool accuracyCalc(int acc){
    srand(time(0));
    double rand1 = (rand() % 100) + 1;
    if((rand1) < acc){
        cout << "Random Number: " << rand1 << endl;
        return true;
    }
    else{
        cout << rand1 << endl;
        return false;
    }
}

double round(double num){
    num = (int)(num*100);
    return (double)num/100;
}