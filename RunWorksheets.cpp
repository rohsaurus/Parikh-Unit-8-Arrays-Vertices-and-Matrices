/*
 *Rohan Parikh
 *Unit 8 Arrays Vertices and Matrices
 *5 May 2021-
 *Extra Thing:Worksheet Arrays Extra Thing is to print question 2 array to a file
 *Extra Thing: Worksheet Functions and arrays In Question 1, print user's favorite number and vector into a file
 *Extra Thing: Worksheet Parallel Arrays print final output to a file
 *Extra Thing: Worksheet Searching arrays allows user to try to win the lottery again
*Extra Thing Worksheet Searching and sorting arrays allows user to print bubble sort array to file question 5
 */

#include <iostream>
#include "Worksheets.h"

using namespace std;

int main()
{

    bool runAgain = false;
    string answer = "n";

    //Change the string nameX of the worksheets to the actual name of the worksheet/Worksheet question number
    //for example - for 3.0 worksheets they are 
    //"Working with Logical operators", "Working with if", "If else", "More if else", "Switch"
    //NOTE: you can also use these to do individual questions on a worksheet.
    //as shown by name5
    //Do not comment out the extra sting names. 

    string name1 = "Worksheet Arrays 1 Question 2";
    string name2 = "Worksheet Arrays 1 Question 3";
    string name3 = "Worksheet Arrays 1 Question 4";
    string name4 = "Worksheet Arrays 1 Question 5";
    string name5 = "Working with Functions and Arrays Question 1";
    string name6 = "Working with Functions and Arrays Question 2";
    string name7 = "Worksheet Working with Parallel Arrays";
    string name8 = "Working with Searching Arrays";
    string name9 = "Working with searching and sorting arrays";
    string name10 = "Unassigned";

    do {
        worksheet1(name1);
        cout << "Press y/Y to run again. Any other character to proceed: ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);

    do {
        worksheet2(name2);
        cout << "Press y/Y to run again. Any other character to proceed: ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);

    do {
        worksheet3(name3);
        cout << "Press y/Y to run again. Any other character to proceed: ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);
   
    do {
        worksheet4(name4);
        cout << "Press y/Y to run again. Any other character to proceed: ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);

    do {
        worksheet5(name5);
        cout << "Press y/Y to run again. Any other character to proceed: ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);
/*Uncomment as many as you need*/
    do {
        worksheet6(name6);
        cout << "Press y/Y to run again. Any other character to proceed: ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);

    do {
        worksheet7(name7);
        cout << "Press y/Y to run again. Any other character to proceed: ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);

    do {
        worksheet8(name8);
        cout << "Press y/Y to run again. Any other character to proceed: ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);

    do {
        worksheet9(name9);
        cout << "Press y/Y to run again. Any other character to proceed: ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);
/*
    do {
        worksheet10(name10);
        cout << "Press y/Y to run again. Any other character to proceed: ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);*/
}