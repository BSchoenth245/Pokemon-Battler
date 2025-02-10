
#pragma once// #ifndef FUNCTIONS_H
// #define FUNCTION_H
/*

Contains the prototypes for all of the functions involved in the program

*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;



//Prototypes for the external arrays
extern string pokemonArray[2][9];
extern string pokemonAttackArray[2][5];

//prototype for the round function
double round(double);

//prototype ofr the accuracy function
bool accuracyCalc(int);

//prototype for the calculation of type effects
double effectCalc(string, string, string);

//prototype for the attack calculation
double attackCalculation(double, double, int, bool, double);

// #endif