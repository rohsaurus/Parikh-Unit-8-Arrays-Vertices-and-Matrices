/*
*Rohan Parikh
*Unit 8 Arrays Vertices and Matrices
*5 May 2021-
*Extra Thing:Worksheet Arrays Extra Thing is to print question 2 array to a file
*Extra Thing: Worksheet Functions and arrays In Question 1, print user's favorite number and vector into a file
*Extra Thing: Worksheet Parallel Arrays print final output to a file
*Extra Thing: Worksheet Searching arrays allows user to try to win the lottery again

*/

#pragma once
#include <string>
#include <vector>

//Add any prototypes here
//if you didn't create any functions used exclusively for this worksheet, you won't use this file.

int Data_Validation_integer();
int Favorite (int favoriteNumber, std::vector <int> numbers);
void reverseFunctionforQ2Worksheet2 (std::string words[]);
int getIndex(std::vector<int> v, int k);
void studentData(std::vector<std::string> names, std::vector<std::string> address, std::vector<std::string> phoneNumber, int i);
