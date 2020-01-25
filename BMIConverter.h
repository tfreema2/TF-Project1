//
// Created by tfree on 1/22/2020.
//

#ifndef TF_PROJECT1_BMICONVERTER_H
#define TF_PROJECT1_BMICONVERTER_H
class BMIConverter{

private:
    //fields
    double height;
    double weight;
    double BMI;
    int rankBMI;

public:
    //Default Constructor
    //Requires: Nothing
    //Modifies: height, weight
    //Effect:Sets height and weight to a default of 0
    BMIConverter();

    //Alt Constructor
    //Requires: height and weight
    //Modifies: height, weight
    //Effect:Sets height and weight equal to the height and weight given
    BMIConverter(double height, double weight);

    //Requires: height
    //Modifies: height
    //Effect:Sets height to given value
    void setHeight(double height);

    //Requires: weight
    //Modifies: weight
    //Effect:Sets weight to given value
    void setWeight(double weight);

    //Requires: nothing
    //Modifies: nothing
    //Effect:returns the value of BMI
    double getBMI();

    //Requires: nothing
    //Modifies: rankBMI, BMI
    //Effect:calculates BMI and returns the BMI rank on a scale of 1 to 5
    void BMIRank();

    //Requires: nothing
    //Modifies: nothing
    //Effect:returns the BMI rank on a scale of 1-5
    int getBMIRank();

    //Requires: nothing
    //Modifies: BMI
    //Effect:calculates the BMI
    void calculateBMI();



};

#endif //TF_PROJECT1_BMICONVERTER_H
