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
    outFile.open("./testavg.out");

    outFile << fixed << showpoint << setprecision(2);

    cout << "Processing data...";

    inFile >> firstName >> lastName;
    outFile << "Student Name: " << firstName << " " << lastName << endl;
    
    
    inFile >> test1 >> test2 >> test3
           >> test4 >> test5;
    outFile << "Test scores: " << setw(6) << test1 << setw(6) << test2
            << setw(6) << test3 << setw(6) << test4 << setw(6) << test5 << endl;
    

    average = (test1 + test2 + test3 + test4 + test5) / 5.0;
    outFile <<  "Average test score: " << average << endl;


    inFile.close();
    outFile.close();

    return 0;
}
