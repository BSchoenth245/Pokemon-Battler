#ifndef FUNCTIONS_H
#define FUNCTION_H

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

extern string pokemonArray[2][9];
extern string pokemonAttackArray[2][5];

double round(double);

double effectCalc(string, string, string);

double attackCalculation(double, double, int, bool, double);

#endif