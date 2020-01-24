//
// Created by tfree on 1/22/2020.
//

#ifndef TF_PROJECT1_BMICONVERTER_H
#define TF_PROJECT1_BMICONVERTER_H
class BMIConverter{

private:
    double height;
    double weight;
    double BMI;
    int rankBMI;

public:
    BMIConverter();
    BMIConverter(double height, double weight);
    void setHeight(double height);
    void setWeight(double weight);
    double getBMI();
    void BMIRank();
    int getBMIRank();
    void calculateBMI();



};

#endif //TF_PROJECT1_BMICONVERTER_H
