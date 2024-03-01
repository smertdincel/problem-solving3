//***********************************************************************************************************************************************************************
//****************************************                        STUDENT NAME=SADIK MERT DÝNCEL                          ***********************************************
//****************************************                        STUDENT NUMBER=B221202372                               ***********************************************
//****************************************                        HONOR CODE= I  DID  MYSELF HOMEWORK                     ***********************************************
//****************************************            ASSIGNMENT=PROBLEM SOLVING IN SOFTWARE ENGINEERING THIRD HOMEWORK  ***********************************************
//***********************************************************************************************************************************************************************
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>				
#include <cctype>     
#include <cstring>
#define color_red      12
const int MAX=10;
const int ROWS = 10;
const int COLUMNS = 10;
using namespace std;

bool checkWord(const char Alphabet[MAX], const char c) {         //CHECKS ÝF THE ENTERED LETTERS ARE ÝN 
  for (int i = 0; i < MAX; i++) {
    if (Alphabet[i] == c) {
      return true;
    }
  }
  return false;
}

bool search( char matrix[ROWS][COLUMNS], char search) {             //CHECKS WHETHER THE GÝVEN LETTERS EXÝST ÝN THE MATRÝX
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      if (matrix[i][j] == search) {
        return true;
      }
    }
  }
  return false;
}

int main() {

	
  char Alphabet[MAX];     // Create a char array with MAX elements, name it as Alphabet 
  srand(time(NULL)); // Seed the random number generator
  for (int i = 0; i < MAX; i++) {
    Alphabet[i] = 'A' + rand() % 26; // Generate a random uppercase letter
    cout<<Alphabet[i]<<"-";
 }
	cout<<endl;
	cout<<"************************\n";
	
	char matrix[ROWS][COLUMNS];
	
 srand(time(NULL));           // Seed the random number generator
 for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      matrix[i][j] =  Alphabet[rand() % MAX];   //CREATES A 10 BY 10 MATRÝX CONSÝSTÝNG OF THE LETTERS ABOVE 
    }
  }
for (int i = 0; i < ROWS; i++)
{
	for(int j = 0; j < COLUMNS; j++){          //PRÝNTS A MATRÝX OF LETTER.
		cout<<matrix[i][j];
		
	}
	cout<<endl;
	
}
  char search;
  cout << "ENTER THE LETTER TO SEARCH FOR ";
  cin >> search;
  
 

  bool found = false;
  
  

  if (found) {
    cout << "LETTER FOUND!" << endl;
  } else {
    cout << "LETTER NOT FOUND." << endl;
  }
  
      	

  return 0;
}
