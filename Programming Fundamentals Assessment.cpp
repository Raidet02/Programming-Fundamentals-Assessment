// Programming Fundamentals Assessment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "main.h"
using namespace std;

void textBoxGenerator(string& textForTextBox);

int main() //TEXT FIGHT
{
    /*cout << " _______   ______   _    _   _______         ___     _______   _______     ___       ______    _   _\n";
    cout << "|__   __| |  ____| \\ \\  / / |__   __|       / _ \\   |__   __| |__   __|   / _ \\     /  ____|  | | / /\n";
    cout << "   | |    | |____   \\ \\/ /     | |         / / \\ \\     | |       | |     / / \\ \\    | |       | |/ /\n";
    cout << "   | |    |  ____|  |    |     | |        / /___\\ \\    | |       | |    / /___\\ \\   | |       | | |\n";
    cout << "   | |    | |____   / /\\ \\     | |       /  _____  \\   | |       | |   /  _____  \\  | |____   | |\\ \\\n";
    cout << "   |_|    |______| /_/  \\_\\    |_|      /_/       \\_\\  |_|       |_|  /_/       \\_\\ \\______|  |_| \\_\\\n";*/

    /*string name = ""; //Initialize the variables that are going to be used
    string clanTag = "";
    string userName = "";
    int age = 0;

    cout << "Please enter your name: "; //Ask the user for their information and assign it to appropriate variables
    cin >> name;

    cout << "Please enter your clan tag: ";
    cin >> clanTag;

    cout << "Please enter your username: ";
    cin >> userName;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "- Name: " << name << endl; //Out put the information in the appropriate manner 
    cout << "- Username: " << "[" << clanTag << "] " << userName << endl;
    cout << "- Age: " << age << endl;*/

    /*float numToSquare = 0.0f; //Initialize the variable to be used

    cout << "What number do you want to Square?"; //Ask the user for the umber they wish to be squared
    cin >> numToSquare;

    cout << "> " << numToSquare << " squared is " << numToSquare * numToSquare << endl; //Output the number in a clear manner*/

    /*string textForTextBox = "";

    cout << "Please enter some text: ";
    getline(cin, textForTextBox);

    textBoxGenerator(textForTextBox);*/

    /*string sentenceToEdit = "";
    string sentenceToUpper = "";
    string sentenceToLower = "";
    bool doesNotConatainChar = true;

    cout << "Please enter some text: ";
    getline(cin, sentenceToEdit);

    sentenceToUpper = sentenceToEdit;
    sentenceToLower = sentenceToEdit;

    for (int i = 0; i <= sentenceToEdit.length(); i++)
    {
        if ((sentenceToEdit[i] >= 'a' && sentenceToEdit[i] <= 'z') || (sentenceToEdit[i] >= 'A' && sentenceToEdit[i] <= 'Z'))
        {
            if (sentenceToEdit[0] == ' ')
            {
                sentenceToEdit[1] = toupper(sentenceToEdit[1]);
            }
            else
            {
                sentenceToEdit[0] = toupper(sentenceToEdit[0]);
            }

            for (int i = 0; i <= sentenceToEdit.length(); i++)
            {
                if (sentenceToEdit[i] == '.' && sentenceToEdit[i + 1] != ' ')
                {
                    sentenceToEdit[i + 1] = toupper(sentenceToEdit[i + 1]);
                }
                else if (sentenceToEdit[i] == '.' && sentenceToEdit[i + 1] == ' ')
                {
                    sentenceToEdit[i + 2] = toupper(sentenceToEdit[i + 2]);
                }
            }

            for (int i = 0; i <= sentenceToEdit.length(); i++)
            {
                sentenceToUpper[i] = toupper(sentenceToEdit[i]);
            }

            for (int i = 0; i <= sentenceToEdit.length(); i++)
            {
                sentenceToLower[i] = tolower(sentenceToEdit[i]);
            }

            cout << "Sentence case: " << sentenceToEdit << endl;
            cout << "Uppercase: " << sentenceToUpper << endl;
            cout << "Lowercase: " << sentenceToLower << endl;

            i = sentenceToEdit.length() + 1;
        }

        if (doesNotConatainChar == true && i == sentenceToEdit.length())
        {
            cout << "Sorry but your sentence does not contain alphebetical characters" << endl;
        }
    }*/

    int guess = 0;
    int randNum = random(1, 100);
    int guessCounter = 0;
    bool isGuessCorrect = false;

    do
    {
        cout << "Choose a number between 1 and 100: ";
        cin >> guess;

        if (guess == randNum)
        {
            guessCounter++;
            isGuessCorrect = true;
            cout << "Well done, you have guessed the correct number in: " << guessCounter << endl;
        }
        else if (guess <= randNum + 2 && guess >= randNum - 2)
        {
            cout << "Boiling" << endl;
            guessCounter++;
        }
        else if (guess <= randNum + 5 && guess >= randNum - 5)
        {
            cout << "Hot" << endl;
            guessCounter++;
        }
        else if (guess <= randNum + 10 && guess >= randNum - 10)
        {
            cout << "Warmer" << endl;
            guessCounter++;
        }
        else if (guess <= randNum + 15 && guess >= randNum - 15)
        {
            cout << "Warm" << endl;
            guessCounter++;
        }
        else if (guess <= randNum + 25 && guess >= randNum - 25)
        {
            cout << "Cold" << endl;
            guessCounter++;
        }
        else if (guess <= randNum + 35 && guess >= randNum - 35)
        {
            cout << "Colder" << endl;
            guessCounter++;
        }
        else if (guess <= randNum + 50 && guess >= randNum - 50)
        {
            cout << "Freezing" << endl;
            guessCounter++;
        }

    } while (isGuessCorrect == false);
}

/*void textBoxGenerator(string& textForTextBox)
{
    int amountOfAsterisk = 0;
    int loopCondition = 1;

    amountOfAsterisk = textForTextBox.length() + 4;

    while (amountOfAsterisk >= 1)
    {
        cout << "*";
        amountOfAsterisk--;

        if (amountOfAsterisk == 0 && loopCondition == 1)
        {
            cout << endl << "* " << textForTextBox << " *" << endl;

            amountOfAsterisk = textForTextBox.length() + 4;
            loopCondition--;
        }
    }
}*/


