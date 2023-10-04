#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main (){

	srand(static_cast<unsigned>(time(nullptr)));

	bool playAgain = true;

	while (playAgain) {

		int distanceToSurface = 10;
		int xTilt = rand() % 21 - 10;
		int yTilt = rand() % 21 - 10;
		bool selfDestructActivated = false;

		while (distanceToSurface > 0) {

			cout << "You are " << distanceToSurface << " away from the surface!" << endl;
			cout << "X Tilt is " << xTilt << ", Y Tilt is " << yTilt << endl;
			cout << "Give me a command, I can (initiate x/y thruster, nothing, self-destruct)" << endl;
			string command;
			cin >> command;

			if (command == "initiate x thruster") {

				cout << "Please enter an x-axis tilt direction and if it's positive/negative(ex. 3 positive):" << endl;
				string xDirection;
				cin >> xDirection;
				if (xDirection == "positive") {
					xTilt++;
				}
				if (xDirection == "negative") {
					xTilt--;
				}
			}

			else if (command == "initiate y thruster") {

				cout << "Please enter an y-axis tilt direction and if it's positive/negative(ex. 3 positive):" << endl;
				string yDirection;
				cin >> yDirection;
				if (yDirection == "positive") {
					yTilt++;
				}
				if (yDirection == "negative") {
					yTilt--;
				}
			}
			else if (command == "thruster") {
				distanceToSurface -= 2;

			}
			else if (command == "self-destruct") {

				selfDestructActivated = true;
				cout << "OOPS looks like you tripped into the self destruct button :/" << endl;
				cout << "	GAME OVER	" << endl;
				break;
			}
			if (command != "nothing") {
			}
			else {
				cout << "Oops! Please try again with a command I know :/" << endl;
				cout << "I can do something if you input: x direction, y direction, nothing, or self-destruct" << endl;
			}
			if (distanceToSurface > 0 && !selfDestructActivated) {
				cout << "Moron! you broke the expensive lander!" << endl;
				cout << "	GAME OVER	" << endl;
			}
			else {
				cout << " Wait wait, you actually managed to land the lander?? CONGRATS I'm so proud :D" << endl;
			}
			cout << "Would You like to play again?(yes/no)" << endl;

		}




	}







}
