#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
#include "BMIConverter.h"
std::ofstream out;
#include <algorithm>

int main() {
    //open file in append mode
    std::ofstream BMITracker;
    BMITracker.open ("BMITrackingSheet.csv", std::ios::app);

    //start loop
    char repeat= 'y';
    while(repeat== 'y' || repeat== 'Y') {
        //get the height from the user
        double height = 0;
        cout << "Please enter your height in inches:";
        while (!(cin >> height)) {
            cin.clear();
            string junk;
            getline(cin, junk);

        }
        //get the weight from the user
        double weight = 0;
        cout << "Please enter your weight in pounds:";
        while (!(cin >> weight)) {
            cin.clear();
            string junk;
            getline(cin, junk);
        }
        //create the BMIConverter object
        BMIConverter myBMI;
        myBMI.setHeight(height);
        myBMI.setWeight(weight);
        myBMI.calculateBMI();
        myBMI.BMIRank();
        int rank;
        rank = myBMI.getBMIRank();
        int BMI;
        BMI = myBMI.getBMI();

        //print the BMI
        cout << "Your BMI is " << BMI << endl;

        //Print the BMIRank based on the BMI (labels are based off of BMI chart)
        string BMIRankString;
        if (rank == 1) {
            BMIRankString= "underweight";
            cout << "According to your BMI, you are underweight" << endl;
        } else if (rank == 2) {
            BMIRankString="healthy weight";
            cout << "According to your BMI, you are a healthy weight" << endl;
        } else if (rank == 3) {
            BMIRankString="overweight";
            cout << "According to your BMI, you are overweight" << endl;
        } else if (rank == 4) {
            BMIRankString="obese";
            cout << "According to your BMI, you are obese" << endl;
        } else if (rank == 5) {
            BMIRankString="extremely obese";
            cout << "According to your BMI, you are extremely obese" << endl;
        }
        //ask if the user if they want to add this information to the file
        char save;
        cout<<"Enter Y to save this information to a file:";
        cin>>save;
        if (save == 'y' || save == 'Y'){
            if(!BMITracker){
                cout<<"error opening file";
            }
            //get current date/time
            auto end = chrono::system_clock::now();
            time_t end_time = chrono::system_clock::to_time_t(end);
            string clock= ctime(&end_time);
            //strip new line form the date/time
            clock.erase(remove(clock.begin(), clock.end(),'\n'),clock.end());
            //print information to the file
            BMITracker<<clock<<","<<height<<","<<weight<<","<<BMI<<","<<BMIRankString<<endl;

        }
        //ask the user of they would like to calculate a new BMI
        cout<<"Enter Y to enter another BMI:";
        cin>>repeat;
        cout<<endl;
        cout<<"________________________________"<<endl;
    }
    //close the file
    BMITracker.close();

        return 0;
}