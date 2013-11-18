#include <iostream>
#include <string>
using namespace std;

int main () {
    string input = "";
    cout << endl << "Welcome to the number guessing game. This game will generate a random number" << endl << "between 1 and 20, and you have to guess what it is." << endl;
    
int random_numer= rand()%20;

	short int choice = 0;

 while (true) {
   cout << "Press any key to continue: " << endl;
   getline(cin, input);
   	if (choice != 0.0000001)
	{
		goto Number;
		}
	}
	Number:
           
           short int g = 0;
           while (true) {
                 cout << endl << "Guess a number: ";
                 cin >> g;
                 cout << "The number is: " << 20*rand()/RAND_MAX << " You guessed: " << g << endl;
                 }

}
