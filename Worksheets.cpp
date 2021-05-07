#include "Worksheets.h"
#include "GetData.h"
#include "MyFunctions.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>
#include <fstream>

using namespace std;


void worksheet1(string namedItem) {
    // printing worksheet name and question
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    // double array to store the values
    double finalGrade[] = {85.8,93.7,76,88.5,100,91.3};
    // calculating average
    double average = finalGrade[0] + finalGrade[1] + finalGrade[2] + finalGrade[3] + finalGrade[4] + finalGrade[5];
    average = average/6;
    // printing average and rounding it to nearest tenth
    cout << floor(average * 10 + 0.5) / 10 << endl;
    // Extra Thing: Printing to a file
    ofstream fout;
    fout.open("gradeaverage.txt");
    for (int i = 0; i < 5; i++)
    {
        fout << finalGrade[i];
        fout << endl;
    }
}

void worksheet2(string namedItem) {
    // printing out worksheet name and question
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    // generating ten random integers to insert into rand_int array
    int max = 10;
    srand(time(NULL));
    // had to use a vector because arrays were throwing some strange errors regarding corruption of it
    vector<int> randInt;
    for (int i = 0; i < 9; i++)
    {
        randInt.push_back(rand()%max);
    }
    // printing array
    for (int a : randInt)
    {
        cout << a << ", ";
    }
    // adding space in between
    cout << endl;
    // printing array in reverse order
    for (int i = randInt.size() -1; i>= 0; i--)
    {
        cout << randInt[i] << ", ";
    }
    

}

void worksheet3(string namedItem) {
    // Printing our worksheet name 
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 3 here

    // taking user input and data validation
    cout << "Enter the ages of 5 people\n";
    vector <int> ages;
    // data validation plus writing to the vector
    for (int i = 0; i < 5; i++)
    {
        int age = Data_Validation_integer();
        ages.push_back(age);               
    }
    // printing out ages greater than 15
    for (int i: ages)
    {
        int vector_value = i;
        // if greater than 15, print otherwise no print
        if (i > 15)
        {
            cout << i << endl;
        }
      }
}

void worksheet4(string namedItem) {
    // Printing out worksheet name
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 4 here
    // initilizing vector
    vector <int> sales;
    // Asking user for sales each day, storing it, and placing it into vector
    cout << "Enter the amount of sales your ice cream shop had on Monday\n";
    int Monday = Data_Validation_integer();
    cout << "Enter the amount of sales your ice cream shop had on Tuesday\n";
    int Tuesday = Data_Validation_integer();
    cout << "Enter the amount of sales your ice cream shop had on Wednesday\n";
    int Wednesday = Data_Validation_integer();
    cout << "Enter the amount of sales your ice cream shop had on Thursday\n";
    int Thursday = Data_Validation_integer();
    cout << "Enter the amount of sales your ice cream shop had on Friday\n";
    int Friday = Data_Validation_integer();
    sales.push_back(Monday);
    sales.push_back(Tuesday);
    sales.push_back(Wednesday);
    sales.push_back(Thursday);
    sales.push_back(Friday);
    // Asking user to choose a day to display sales
    // making it a while true loop so user can always see unless they request to leave
    while (true)
    {
        cout << "Enter a number for the day you would like to view sales of\n";
        int userChoice = Data_Validation_integer();
        if (userChoice>= 6)
        {
            cout << "6 and 7 (Saturday and Sunday) are not valid. Enter a number 1-5 (Monday-Friday)\n";
            userChoice == Data_Validation_integer();
        }
        cout << sales[userChoice - 1];
        cout << endl;
        cout << "Would you like to see another day? If not, enter 'no'\n";
        string choice = " ";
        getline(cin,choice);
        if (choice == "no")
        {
            break;
        }
        
    }
}

void worksheet5(string namedItem) {
    // worksheet name
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 5 here
    vector <int> num;
    for (int i = 0; i < 10; i++)
    {
        int userNumber = Data_Validation_integer();
        num.push_back(userNumber);
    }
    // taking user's favorite number and checking to see how many times user inputted it
    cout << "You will be asked to enter in your favorite number.\n\n";
    int favorite = Data_Validation_integer();
    // running favorite method
    int number_of_favorite = Favorite(favorite,num);
    cout << "You have entered your favorite number " << number_of_favorite << " times\n.";
    // extra thing
    // printing favorite number and vector into a file
    ofstream favoriteNumber;
    favoriteNumber.open("Favorite.txt");
    for (int a : num)
    {
        favoriteNumber << a << endl;
    }
    // adding favorite number to file
    favoriteNumber << favorite << endl;
}

void worksheet6(string namedItem) {
    // Worksheet Name
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 1 here
    string words[] = {"radar","warts","evil","racecar","toot"};
    // function to reverse, check if same, and output
    reverseFunctionforQ2Worksheet2(words);
}

void worksheet7(string namedItem) {
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 2 here
}

void worksheet8(string namedItem) {
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 3 here
}

void worksheet9(string namedItem) {
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 4 here
}

void worksheet10(string namedItem) {
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 5 here
}

