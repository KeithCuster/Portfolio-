//Author: Keith Custer
//file: KeithCuster-QuizGame.cpp
//February 16, 2017
//Purpose: Asks user a series of question, user's score is recorded and displayed at the end of game.
//Version 1.0

#include <iostream>
#include <string>

using namespace std;

//Class is created in order to group variables and functions together
class Game
{
public:
    //The constructor will initialize automatically once program is started
    Game()
    {
        cout << "Welcome contestant! It's time to play a 5 question game. The topic is....capitals of American states. \nPlease type your answers beginning with an upper or lowercased letter. Ready? \nThe first question is....\n" << endl;

    //This for loop, loops through the state array[] and template question five times
    for (int x = 0; x < 5; x++){

    //Asks the user a question, then their answer is returned
    cout << "What is the capital of " << state[x] << endl;
    getline(cin, input);
    cout << endl;

    //Conditional statement test to see whether the user's input is equal to the correct answer
    if (input == capital[x] || input == lowerCaseCapital[x]){
        cout << "That is correct!" << endl;
        points += 1;
        cout << "Current points: " << points << "\n" << endl;
    }

    //If it is not give an incorrect answer response and display current points
    else{
        cout << "Sorry that is incorrect..." << endl;
        cout << "The correct answer is: " << capital[x] << endl;
        cout << "Current points: " << points << "\n" << endl;

        //Subtract 1 point if user gets a question wrong, if current score is 0 it will not go below 0.
        points -= 1;
        if (points <= 0){
            points = 0;
        }

    }
    }

        //After loop is finished give total score and thank the user for playing
        cout << "Your total score is: " << points << ". Thank you for playing!" << endl;
    }

    //Variables that can not be accessed outside of the Game class
private:
    string input = "";

    //Each index of the state and capital arrays correspond. for ex. state[0] = "Virginia" and the answer is capital[0] = "Richmond"
    const string state[5] = {"Virginia", "New York", "Tennessee", "Massachusetts", "Maryland"};
    const string capital[5] = {"Richmond", "Albany", "Nashville", "Boston", "Annapolis"};
    const string lowerCaseCapital[5] = {"richmond", "albany", "nashville", "boston", "annapolis"};

    int points = 0;
};
int main()
{
    //Create gameObject from the Game class, the constructor will initialize code automatically
    Game gameObject;
    return 0;
}
