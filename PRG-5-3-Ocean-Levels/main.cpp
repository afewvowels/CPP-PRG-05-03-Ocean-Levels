//
//  main.cpp
//  PRG-5-3-Ocean-Levels
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Assuming the ocean's level is rising at about 1.5 millimeters per year, write
//  a program that displays a table showing the number of millimeters that the ocean will
//  have risen each year for the next 25 years.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int intYear,
        intYearCounter;
    
    float fltSeaLevelRiseTotal;
    
    const float FLT_SEA_LEVEL_RISE_ANNUAL = 1.5f;
    
    intYear = 2017;
    intYearCounter = 0;
    
    fltSeaLevelRiseTotal = 0.0f;
    
    while(intYearCounter <= 25)
    {
        cout << setw(6) << intYear << "\t\t"
             << setw(6) << fltSeaLevelRiseTotal << " mm" << endl;
        
        fltSeaLevelRiseTotal += FLT_SEA_LEVEL_RISE_ANNUAL;
        intYearCounter++;
        intYear++;
    }
    
    return 0;
}
