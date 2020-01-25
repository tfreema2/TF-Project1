//
// Created by tfree on 1/22/2020.
//

#ifndef TF_PROJECT1_BMICONVERTER_H
#define TF_PROJECT1_BMICONVERTER_H
//This header file creates fields for the height, weight, BMI and BMI rank variables.  It also creates a constructor
//and an alternative constructor, which accepts height and weight as parameters. Also, it creates setters for height and weight, which take height and weight at parameters,
//respectively,a getter for BMI rank, a method that calculates BMI from the height and weight and an
//method that calculates the BMI rank based off of the person's BMI.
class BMI_Converter
{

private:
    double f_height;
    double f_weight;
    double f_BMI;
    int f_rank_BMI;

public:
    BMI_Converter();
    BMI_Converter(double pHeight, double pWeight);
    void set_height(double pHeight);
    void set_weight(double pWeight);
    double get_BMI();
    void BMI_rank();
    int get_BMI_rank();
    void calculate_BMI();



};

#endif //TF_PROJECT1_BMICONVERTER_H
