// *************************************************************
// Author: Randy Layne, adapted from example by D.S. Malik
// 
// Program: Movie Ticket Sale
// This program determines the money to be donated to a charity.
// It prompts the user to input the movie name, adult ticket
// price, child ticket price, number of adult tickets sold, 
// number of child tickets sold, and percentage of the gross
// amount to be donated to the charity.
// *************************************************************

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  int adultTicketsSold;
  int childTicketsSold;
  double adultTicketPrice;
  double childTicketPrice;
  double grossSalesAmount;
  double donationPercentage;
  double donationAmount;
  double netSalesAmount;
  string movieName;

  cout << fixed << showpoint << setprecision(2) ;

  cout << "Enter the name of the movie: ";
  getline(cin, movieName);
  cout << endl;

  cout << "Enter the price of an adult ticket" << endl;
  cin >> adultTicketPrice;
  cout << endl;

  cout << "Enter the number of adult tickets sold" << endl;
  cin >> adultTicketsSold;
  cout << endl;

  cout << "Enter the price of an child ticket" << endl;
  cin >> childTicketPrice;
  cout << endl;

  cout << "Enter the number of child tickets sold" << endl;
  cin >> childTicketsSold;
  cout << endl;

  cout << "Enter the percentage of the donations: ";
  cin >> donationPercentage;
  cout << endl;

  grossSalesAmount = adultTicketPrice * adultTicketsSold + childTicketPrice * childTicketsSold;
  
  donationAmount = grossSalesAmount * donationPercentage / 100;
  
  netSalesAmount = grossSalesAmount - donationAmount;
  
  cout << "_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
  cout << setw(35) << left << setfill('.') << "Movie Name:"  << right << " " << movieName << endl;
  cout << setw(35) << left << setfill('.') << "Number of Tickets Sold: " << right
       << setw(10)  << setfill(' ') << adultTicketsSold + childTicketsSold << endl;
  cout << setw(35) << left << setfill('.') << "Gross Amount: " << " $" << right
       << setw(8)  << setfill(' ') << grossSalesAmount << endl;
  cout << setw(35) << left << setfill('.') << "Percentage of Gross Amount Donated: " << right
       << setw(9)  << setfill(' ') << donationPercentage << '%' << endl;
  cout << setw(35) << left << setfill('.') << "Amount Donated: " << " $" << right
       << setw(8)  << setfill(' ') << donationAmount << endl;
  cout << setw(35) << left << setfill('.') << "Net Sales: " << " $" << right
       << setw(8)  << setfill(' ') << netSalesAmount << endl;



  return 0;
}