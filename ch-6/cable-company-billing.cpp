// *************************************************************
// Author: D. S. Malik, modified by: Randy Layne
//
// Program: Cable Company billing
// This program calculates and prints a customer's bill for
// a local cable company
// *************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

// named constants - residential customers
const double RES_BILL_PROC_FEE = 4.50;
const double RES_BASIC_FEE = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

// named constants - commercial customers
const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BASIC_CONN_CONST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;

// function prototypes
double residential();
double business();

// app entry point
int main()
{

  // declare variables
  int accountNumber;
  char customerType;
  double amountDue;

  cout << fixed << showpoint << setprecision(2);

  cout << "This program computes a cable bill." << endl;

  cout << "Enter account number: ";
  cin >> accountNumber;
  cout << endl;

  cout << "Enter customer type: R, r (Residential),"
       << "B, b (Business): ";
  cin >> customerType;
  cout << endl;

  switch (customerType)
  {
  case 'r':
  case 'R':
    amountDue = residential();
    cout << "Account number = " << accountNumber << endl;
    cout << "Amount due = $" << amountDue << endl;
    break;

  case 'b':
  case 'B':
    amountDue = business();
    cout << "Account number = " << accountNumber << endl;
    cout << "Amount due = $" << amountDue << endl;
    break;

  default:
    break;
  }

  return 0;
}

// function definitions
double residential()
{
  int noOfPChannels; // number of premium channels
  double bAmount;    // billing amount

  cout << "Enter the number of premium channels used: ";
  cin >> noOfPChannels;
  cout << endl;

  bAmount = RES_BASIC_FEE +
            RES_BILL_PROC_FEE +
            noOfPChannels * RES_COST_PREM_CHANNEL;

  return bAmount;
}

double business()
{
  int noOfBasicServiceConnections;
  int noOfPChannels; // number of premium channels
  double bAmount;    // billing amount

  cout << "Enter the number of basic service connections: ";
  cin >> noOfBasicServiceConnections;
  cout << endl;

  cout << "Enter the number of premium channels used: ";
  cin >> noOfPChannels;
  cout << endl;

  if (noOfBasicServiceConnections <= 10)
    bAmount = BUS_BILL_PROC_FEES +
              BUS_BASIC_SERV_COST +
              noOfPChannels * BUS_COST_PREM_CHANNEL;
  else
    bAmount = BUS_BILL_PROC_FEES +
              BUS_BASIC_SERV_COST +
              (noOfBasicServiceConnections - 10) * BUS_BASIC_CONN_CONST +
              noOfPChannels * BUS_COST_PREM_CHANNEL;

  return bAmount;
}
