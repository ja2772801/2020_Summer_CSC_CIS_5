/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 23, 2020, 10:25 AM
 * Purpose:  Paint Coverage Solution for Homework 1
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    float areaCov,  //Area Covered by a can of paint - ft^2
          heightF,  //Height of the Fence - ft
          lengthF,  //Length of the Fence - ft
          areaPnt;  //Area to paint - ft 2 coats, Both sides of fence
    int   nCans;    //Integer number of cans of paint required
    
    //Initialize all known variables
    areaCov=340.0f;//340 ft^2 per can of paint
    heightF=6.0f;  //6 ft
    lengthF=100.0f;//100 ft
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    areaPnt=2*2*heightF*lengthF;//Rectangle both sides painted twice - Derived
    nCans=areaPnt/areaCov+1;//Represents whole cans of paint, no fractions
    
    //Display the Inputs/Outputs
    cout<<"Paint Coverage Problem"<<endl;
    cout<<"Area Covered by a Can of Paint   = "<<areaCov<<" ft^2"<<endl;
    cout<<"Length of the Fence              = "<<lengthF<<" ft"<<endl;
    cout<<"Height of the Fence              =   "<<heightF<<" ft"<<endl;
    cout<<"Number of cans of Paint Required =   "<<nCans<<endl;

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}