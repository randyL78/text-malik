// ***************************************************************************
// author: Randy Layne
// class: courseType
// purpose: Representation of a college course for purposes of issuing a grade
// report
// ***************************************************************************

// header file
#include "courseType.h"

// dependencies
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

courseType::courseType(string cName, string cNo, int credits)
{
  setCourseInfo(cName, cNo, credits);
}

void courseType::setCourseInfo(string cName, string cNo, int credits)
{
  courseName = cName;
  courseNo = cNo;
  courseCredits = credits;
} // end setCourseInfo

string courseType::getCourseName() const
{
  return courseName;
} // end getCourseName

string courseType::getCourseNumber() const
{
  return courseNo;
} // end getCourseNumber

int courseType::getCredits() const
{
  return courseCredits;
} // end getCredits

void courseType::print(ostream &outF) const
{
  outF << left;
  outF << setw(8) << courseNo << "    ";
  outF << setw(15) << courseName;
  outF << right;
  outF << setw(3) << courseCredits << "    ";
} // end print
