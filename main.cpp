#include <iostream>

//this adds random
#include <cstdlib>

#include <ctime>      // for computer time
using namespace std;

int main()
{

    //My first C++ Program!
    cout << "Hello world!" << endl;

    //Data types

    //String
    string name = "Kenneth Melendez";

    //Integer
    int myNums = 7098;

    //Boolean
    bool likesCats = true;

    //Char
    char favoriteLetter = 'G';

    //Double
    double decNums = 0.5;

    //Float
    float anotherDecNum = 1.80;

    //Integer
    int userInput;

    //Array
    string myFavoriteAnimals[] = {"Cat","Dog","Bird"};

    //Random use srand keyword after linking code above in the beginning of the document^^


    /*
        Cout cin The standard input, normally the keyboard.
        cout The standard output, normally the screen.
        cerr The error output, normally the screen.
    */

    //Output variables
    cout << "Hello, my name is " << name << " and my favorite number is " << myNums << ". My favorite Letter is also " << favoriteLetter << endl;
    cout << "What is your favorite number?" << endl;
    cin >> userInput;

    //If and else statements with safe programming
    if (cin.fail()){
        cout << "Oh wrong input.. sorry." << endl;
    } else{
        cout << "Wow " << userInput << " is my favorite number too!!!" << endl;
    }




    unsigned int computerTime;
    computerTime = time (0); // current time
    srand(computerTime);     // start  the random number
                             // generator

    int randomizer = (rand() % 3); //will randomize int in array

    //Will respond with a random pet!!!
    cout << "By the way my favorite animal is " << myFavoriteAnimals[randomizer] << endl;


    /*
        In every C program you have to use return return 0; (or return -1;, or whatever... ), because the main function signature requires it.
        In a C++ program the statement is optional: the compiler automatically adds a return 0; if you don't explicitely return a value.

        The return value is the exit code of your program, the shell (or any other application that ran it) can read and use it.
        The 0 exit code is a widely accepted convention for 'OK the program execution was successfull'.
        Source: https://www.codeproject.com/Questions/693038/why-do-we-have-to-use-return
    */
    return 0;
}
