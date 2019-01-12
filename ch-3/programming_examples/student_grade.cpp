// *******************************************************
// Author: Randy Layne
//
// Program: Student Grade
// Description: Program to caclulate the average test score.
// Given a student's name and 5 test scores, this program
// calculates the average test score. The student's name, the
// five test scores, and the average test score are stored in 
// the file testavg.out. The data is input from the file test.txt

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    // declare variables
    ifstream inFile;
    ofstream outFile;
    
    double test1, test2, test3, test4, test5;
    double average;

    string firstName;
    string lastName;

    inFile.open("./test.txt");
    inFile >> firstName >> lastName >> test1 >> test2 >> test3
           >> test4 >> test5;

    average = (test1 + test2 + test3 + test4 + test5) / 5;

    outFile.open("./testavg.out");
    outFile << firstName << " " << lastName << ' ' << average;


    inFile.close();
    outFile.close();

    return 0;
}
