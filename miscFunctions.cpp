#include "FUNCTIONS.H"
/*

Contains all miscellaneous functions that are not large enough to necessitate their own file
*/
double round(double num){
    num = (int)(num*100);
    return (double)num/100;
}