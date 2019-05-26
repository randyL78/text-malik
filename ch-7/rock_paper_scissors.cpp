// *************************************************************
// Author: Randy Layne
//
// Program: Rock, Paper, Scissors
// *************************************************************

#include <iostream>

using namespace std;

// custom data types
enum objectType
{
  ROCK,
  PAPER,
  SCISSORS
};

// function prototypes
void displayRules();
objectType retrievePlay(char selection);
bool validSelection(char selection);
void convertEnum(objectType object);
objectType winningObject(objectType play1, objectType play2);
void gameResult(objectType play1, objectType play2, int &winner);
void displayResults(int gCount, int wCount1, int wCount2);

// entry point
int main()
{
  // variable declarations
  int gameCount = 0; // number of games played
  int winCount1 = 0; // player 1 number of wins
  int winCount2 = 0; // player 2 number of wins
  int gameWinner;
  char response; // variable to store user response
  char selection1;
  char selection2;
  objectType play1; // player 1 selection
  objectType play2; // player 2 selection

  displayRules();

  cout << "Enter Y/y to play the game: ";
  cin >> response;
  cout << endl;

  while (response == 'Y' || response == 'y')
  {
    // get players' responses
    cout << "Player 1, enter your choice: ";
    cin >> selection1;
    cout << endl;

    cout << "Player 2, enter your choice: ";
    cin >> selection2;
    cout << endl;

    if (validSelection(selection1) && validSelection(selection2))
    {
      play1 = retrievePlay(selection1);
      play2 = retrievePlay(selection2);
      gameCount++;
      gameResult(play1, play2, gameWinner);

      if (gameWinner == 1)
        winCount1++;
      else if (gameWinner == 2)
        winCount2++;
    } // end if

    // restart game
    cout << "Enter Y/y to play the game: ";
    cin >> response;
    cout << endl;

  } // end while

  displayResults(gameCount, winCount1, winCount2);

  return 0;
} // end main

// function declarations
void displayRules()
{
  cout << "Welcome to the game Rock, Paper, Scissores. \n";
  cout << "This is a game for two players. For each game"
       << ", each \n";
  cout << "player selects one of the objects, Rock, Paper,"
       << " or Scissors.\n";
  cout << "The rules for winning the game are \n";
  cout << "1. If both players select the same object, "
       << "it is a tie \n";
  cout << "2. Rock breaks Scissors: So player who selects Rock"
       << " wins \n";
  cout << "3. Paper covers Rock: So player who selects Paper"
       << " wins \n";
  cout << "4. Scissors cut Paper: So player who selects "
       << "Scissors wins \n";
  cout << "Enter R or r to select Rock, P or p to select Paper "
       << "and S or s to select Scissors. \n";
} // end displayRules

bool validSelection(char selection)
{
  switch (selection)
  {
  case 'R':
  case 'r':
  case 'P':
  case 'p':
  case 'S':
  case 's':
    return true;
  default:
    return false;
  } // end switch
} // end validSelection

objectType retrievePlay(char selection)
{
  objectType object;

  switch (selection)
  {
  case 'R':
  case 'r':
    object = ROCK;
    break;
  case 'P':
  case 'p':
    object = PAPER;
    break;
  case 'S':
  case 's':
    object = SCISSORS;
    break;
  } // end switch
  return object;
} // end retrievePlay

void gameResult(objectType play1, objectType play2, int &winner)
{
  objectType winnerObject;

  if (play1 == play2)
  {
    winner = 0;
    cout << "Both players selected ";
    convertEnum(play1);
    cout << ". The game is a tie." << endl;
  }
  else
  {
    winnerObject = winningObject(play1, play2);

    // Output player's choice
    cout << "Player 1 selected ";
    convertEnum(play1);

    cout << " and Player 2 selected ";
    convertEnum(play2);
    cout << ". ";

    // Decide the winner
    if (play1 == winnerObject)
      winner = 1;
    else
      winner = 2;

    // Output winner
    cout << "Player " << winner << " wins this round." << endl;
  } // end else

} // end gameResult

void convertEnum(objectType object)
{
  switch (object)
  {
  case ROCK:
    cout << "Rock";
    break;
  case PAPER:
    cout << "Paper";
    break;
  case SCISSORS:
    cout << "Scissors";
    break;
  } // end switch
} // end convertEnum

objectType winningObject(objectType play1, objectType play2)
{
  if ((play1 == ROCK && play2 == SCISSORS) || (play1 == SCISSORS && play2 == ROCK))
    return ROCK;
  else if ((play1 == SCISSORS && play2 == PAPER) || (play1 == PAPER && play2 == SCISSORS))
    return SCISSORS;
  else
    return PAPER;
} // end winningObject

void displayResults(int gCount, int wCount1, int wCount2)
{
  cout << "The total number of plays: " << gCount << endl;
  cout << "Player 1 has won " << wCount1 << " times" << endl;
  cout << "Player 2 has won " << wCount2 << " times" << endl;
}