#include "FUNCTIONS.H"

double effectCalc(string attType, string defT1, string defT2){
    cout << "In effect Calc" << endl;
    string defTypes = defT1 + defT2;
    double typeEffect = 1;

    /*
        GRASS WEAKNESS/RESISTANCE CALCULATION
    */

    if(attType == "grass"){
        if(defTypes.find("water") != std::string::npos || defTypes.find("ground") != std::string::npos || defTypes.find("rock") != std::string::npos){
            typeEffect *= 2;
        }else if(defTypes.find("fire") != std::string::npos || defTypes.find("grass") != std::string::npos || defTypes.find("poison") != std::string::npos ||
        defTypes.find("flying") != std::string::npos || defTypes.find("bug") != std::string::npos || defTypes.find("dragon") != std::string::npos ||
        defTypes.find("steel") != std::string::npos){
            typeEffect /= 2;
        }
        else{}
        if(defT2 != ""){
            if(defTypes.find("water") != std::string::npos || defTypes.find("ground") != std::string::npos || defTypes.find("rock") != std::string::npos){
                typeEffect *= 2;
            }else if(defTypes.find("fire") != std::string::npos || defTypes.find("grass") != std::string::npos || defTypes.find("poison") != std::string::npos ||
            defTypes.find("flying") != std::string::npos || defTypes.find("bug") != std::string::npos || defTypes.find("dragon") != std::string::npos ||
            defTypes.find("steel") != std::string::npos){
                typeEffect /= 2;
            }
            else{}
        }
    }

    /*
        FIRE WEAKNESS/RESISTANCE CALCULATION
    */

    else if(attType == "fire"){
        if(defTypes.find("grass") != std::string::npos || defTypes.find("ice") != std::string::npos || defTypes.find("bug") != std::string::npos ||
        defTypes.find("steel") != std::string::npos){
            typeEffect *= 2;
        }else if(defTypes.find("fire") != std::string::npos || defTypes.find("water") != std::string::npos || defTypes.find("rock") != std::string::npos ||
        defTypes.find("dragon") != std::string::npos){
            typeEffect /= 2;
        }
        else{}
        if(defT2 != ""){
            if(defTypes.find("grass") != std::string::npos || defTypes.find("ice") != std::string::npos || defTypes.find("bug") != std::string::npos ||
        defTypes.find("steel") != std::string::npos){
            typeEffect *= 2;
        }else if(defTypes.find("fire") != std::string::npos || defTypes.find("water") != std::string::npos || defTypes.find("rock") != std::string::npos ||
        defTypes.find("dragon") != std::string::npos){
            typeEffect /= 2;
        }
        else{}
        }
    }
    cout << "Effect Calc: " << typeEffect << endl;
    return typeEffect;
}