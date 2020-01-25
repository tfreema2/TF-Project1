//
// Created by tfree on 1/22/2020.
//
#include "BMIConverter.h"

//This header file creates fields for the height, weight, BMI and BMI rank variables.  It also creates a constructor
//and an alternative constructor, which accepts height and weight as parameters. Also, it creates setters for height and weight, which take height and weight at parameters,
//respectively,a getter for BMI rank, a method that calculates BMI from the height and weight and an
//method that calculates the BMI rank based off of the person's BMI.

BMI_Converter::BMI_Converter(): f_height(0), f_weight(0) {}
BMI_Converter::BMI_Converter(double p_height, double p_weight)
{
    f_height= p_weight;
    f_weight= p_weight;

}
void BMI_Converter::set_height(double p_weight)
{
    f_height=p_weight;
}
void BMI_Converter::set_weight(double pWeight)
{
    f_height=pWeight;
}

double BMI_Converter::get_BMI()
{
    return f_BMI;
}
int BMI_Converter::get_BMI_rank()
{
    return f_rank_BMI;
}
void BMI_Converter::BMI_rank()
{
    calculate_BMI();
    if (f_BMI <= 18)
    {
        f_rank_BMI= 1;
    }
    else if(18< f_BMI && f_BMI<= 24 )
    {

        f_rank_BMI= 2;
    }
    else if(24< f_BMI && f_BMI<=29  )
    {
        f_rank_BMI= 3;
    }
    else if(30< f_BMI && f_BMI<=39  )
    {
        f_rank_BMI= 4;
    }
    else
    {
        f_rank_BMI= 5;
    }
}
void BMI_Converter::calculate_BMI()
{
    f_BMI=(f_weight/(f_height*f_height))*703;
}