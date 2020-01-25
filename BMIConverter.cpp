//
// Created by tfree on 1/22/2020.
//
#include "BMIConverter.h"

BMIConverter::BMIConverter(): height(0), weight(0) {}

BMIConverter::BMIConverter(double height, double weight) {
    this->height= height;
    this->weight= weight;

}
void BMIConverter::setHeight(double height) {
    this->height=height;
}
void BMIConverter::setWeight(double weight) {
    this->weight=weight;
}

double BMIConverter::getBMI() {
    return BMI;
}
int BMIConverter::getBMIRank() {
    return rankBMI;
}
void BMIConverter::BMIRank(){
    calculateBMI();
    //assign rank based on BMI
    if (BMI <= 18){
        rankBMI= 1;
    }
    else if(18< BMI && BMI<= 24 ){
        rankBMI= 2;
    }
    else if(24< BMI && BMI<=29  ){
        rankBMI= 3;
    }
    else if(30< BMI && BMI<=39  ){
        rankBMI= 4;
    }
    else{
        rankBMI= 5;
    }
}
void BMIConverter::calculateBMI(){
    BMI=(weight/(height*height))*703;
}