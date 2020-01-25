#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
#include "BMIConverter.h"
std::ofstream out;
#include <algorithm>

//This is the main function for the BMI converter.  It prompts the user to enter their height and weight, and then will
//calculate their BMI based on it.  It compairs their BMI to a BMI chart to see what category their BMI falls into.
//It then prints what their BMI is and what category it falls into.  They are then asked if they woukd like this information to
//saved to a file.  Finally, it askes them if they would like to calculate another BMI or if they would like to exit the program.
int main()
{
    //open the file in append mode
    std::ofstream BMI_tracker;
    BMI_tracker.open ("BMITrackingSheet.csv", std::ios::app);

    //start the loop
    char repeat= 'y';
    while(repeat== 'y' || repeat== 'Y')
    {
        //get the user's height
        double height = 0;
        cout << "Please enter your height in inches:";
        while (!(cin >> height))
        {
            cin.clear();
            string junk;
            getline(cin, junk);

        }
        //get the user's weight
        double weight = 0;
        cout << "Please enter your weight in pounds:";
        while (!(cin >> weight))
        {
            cin.clear();
            string junk;
            getline(cin, junk);
        }
        //create a BMI_Converter object
        BMI_Converter myBMI;
        myBMI.set_height(height);
        myBMI.set_weight(weight);
        myBMI.calculate_BMI();
        myBMI.BMI_rank();
        int rank;
        rank = myBMI.get_BMI_rank();
        int BMI;
        BMI = myBMI.get_BMI();

        //translate what their rank means into a string
        cout << "Your BMI is " << BMI << endl;
        string BMI_rank_string;
        if (rank == 1)
        {
            BMI_rank_string= "underweight";
            cout << "According to your BMI, you are underweight" << endl;
        }
        else if (rank == 2)
        {
            BMI_rank_string="healthy weight";
            cout << "According to your BMI, you are a healthy weight" << endl;
        }
        else if (rank == 3)
        {
            BMI_rank_string="overweight";
            cout << "According to your BMI, you are overweight" << endl;
        }
        else if (rank == 4)
        {
            BMI_rank_string="obese";
            cout << "According to your BMI, you are obese" << endl;
        }
        else if (rank == 5)
        {
            BMI_rank_string="extremely obese";
            cout << "According to your BMI, you are extremely obese" << endl;
        }
        //ask if they want to store their data
        char save;
        cout<<"Enter Y to save this information to a file:";
        cin>>save;
        if (save == 'y' || save == 'Y')
        {
            //if the file can't be opened
            if(!BMI_tracker)
            {
                cout<<"error opening file";
            }
            //get the current date and time
            auto end = chrono::system_clock::now();
            time_t end_time = chrono::system_clock::to_time_t(end);
            //strip the new line character
            string clock= ctime(&end_time);
            clock.erase(remove(clock.begin(), clock.end(),'\n'),clock.end());
            //print to the sheet
            BMI_tracker<<clock<<","<<height<<","<<weight<<","<<BMI<<","<<BMI_rank_string<<endl;

        }
        //ask if they would like to calculate another BMI
        cout<<"Enter Y to enter another BMI:";
        cin>>repeat;
        cout<<endl;
        cout<<"________________________________"<<endl;
    }
    //close the BMI Tracking sheet
    BMI_tracker.close();

    return 0;
}