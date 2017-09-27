/*Tobi Wainwright - 9/25/17 period 4
assignment name: Take in Data
take in all of the data types we have talked about, compute
some sums, products, divisions and subtractions and 
display the values*/

//Libraries
#include <iostream>
#include <conio.h>

//namespaces
using namespace std;

//functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// main
void main() {
	//variables
	int x;
	int y;
	int z;
	int grade;
	int age;
	char name;
	char math;
	//program
	cout << "what is the first initial of your name?\n";//prompts the user to input name
	cin >> name;// pauses and saves user input as name
	cout << "hello " << name << endl;
	cout << "how old are you?\n";
	cin >> age;
	cout << "what grade are you in?\n";
	cin >> grade;
	cout << "Choose a number\n";
	cin >> x;
	y = x;
	cout << "add 5\n";
	x = x + 5; 
	pause();
	cout << "Double the result\n";
	pause();
	x = x + x;
	cout << "subtract 4\n";
	x = x - 4; 
	pause();
	cout << "divide by 2\n";
	x = x / 2;
	pause();
	cout << "Subtract the original number\n";
	pause();
	z = x - y; 
	cout << "The first initial of your name is " << name
		<< endl << "your in grade " << grade << endl << "you are " 
		<< age << endl << "and the number you ended with is " << z\
		<< endl;
	


	


	
	
	pause();// pauses to let us read output
	return;
}