#include "FUNCTIONS.H"

double round(double num){
    num = (int)(num*100);
    return (double)num/100;
}