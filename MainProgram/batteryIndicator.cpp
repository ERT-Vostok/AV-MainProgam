#include "batteryIndicator.h"

BatteryIndicator::BatteryIndicator() : Sensor(0x00){}


void BatteryIndicator::measure() {
    //TODO Récupère les données brutes, les traites si besoin
    //et modifie l'attribut du niveau de batterie


    //(remplacer les 0 par la valeurs calculée)
}

bool BatteryIndicator::begin(){
    //TODO initialisation et calibration
}

//accesseur
double BatteryIndicator::getBatteryLevel() {
    return batteryLevel;
}
