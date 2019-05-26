#ifndef H_courseType
#define H_courseType

#include <string>
#include <fstream>

using namespace std;

class courseType
{

public:
  void setCourseInfo(string cName, string cNo, int credits);
  // function to set the course information.
  // Postcondition: courseName = cName, courseNo = cNo, courseCredits = credits

  void print(ostream &outF) const;
  // function to print the course information

  int getCredits() const;
  // function to return the credit hours

  string getCourseNumber() const;
  // function to return the course number

  string getCourseName() const;
  // function to return the course name

  courseType(string cName = "", string cNo = "", int credits = 0);
  // constructor

private:
  string courseName; // variable to store the course name
  string courseNo;   // variable to store the course number
  int courseCredits; // variable to store the credit hours
};

#endif