#include "FUNCTIONS.H"
/*

Contains the logic and comparisons for the type advantage/disadvantage on attacks

*/
double effectCalc(string attType, string defT1, string defT2){
    // cout << "In effect Calc" << endl;
    string defTypes = defT1 + defT2;
    double typeEffect = 1;

    /*
        GRASS WEAKNESS/RESISTANCE CALCULATION
    */

    if(attType == "grass"){
        //If the defending pokemon has these types, the attack is effective and has its output multiplied by 2
        if(defT1 == "water" || defT1 == "ground" || defT1 == "rock"){
            typeEffect *= 2;
        }
        //If the defending pokemon has these types, the attack is effective and has its output multiplied by 0.5
        else if(defT1 == "fire" || defT1 == "grass" || defT1 == "poison" || defT1 == "flying" || defT1 == "bug" ||
            defT1 == "dragon" || defT1 == "steel"){
            typeEffect /= 2;
        }
        else{}
        //Tests to see if the defending pokemon has a second type, or is a mono-type
        if(defT2 != ""){
            //If the defending pokemon has these types, the attack is effective and has its output multiplied by 2
            if(defT1 == "water" || defT1 == "ground" || defT1 == "rock"){
                typeEffect *= 2;
            }
            //If the defending pokemon has these types, the attack is effective and has its output multiplied by 0.5
            else if(defT1 == "fire" || defT1 == "grass" || defT1 == "poison" || defT1 == "flying" || defT1 == "bug" ||
                defT1 == "dragon" || defT1 == "steel"){
                typeEffect /= 2;
            }
            else{}
        }
    }

    /*
        FIRE WEAKNESS/RESISTANCE CALCULATION
    */

    else if(attType == "fire"){
        //If the defending pokemon has these types, the attack is effective and has its output multiplied by 2
        if(defT2 == "grass" || defT2 == "ice" || defT2 == "bug" || defT2 == "steel"){
            typeEffect *= 2;
        }
        //If the defending pokemon has these types, the attack is effective and has its output multiplied by 0.5
        else if(defT2 == "fire" || defT2 == "water" || defT2 == "rock" || defT2 == "dragon"){
            typeEffect /= 2;
        }
        else{}
        //Tests to see if the defending pokemon has a second type, or is a mono-type
        if(defT2 != ""){
        //If the defending pokemon has these types, the attack is effective and has its output multiplied by 2
            if(defT2 == "grass" || defT2 == "ice" || defT2 == "bug" || defT2 == "steel"){
                typeEffect *= 2;
            }
        //If the defending pokemon has these types, the attack is effective and has its output multiplied by 0.5
            else if(defT2 == "fire" || defT2 == "water" || defT2 == "rock" || defT2 == "dragon"){
                typeEffect /= 2;
            }
            else{}
        }
    }
    // cout << "Effect Calc: " << typeEffect << endl;
    return typeEffect;
}