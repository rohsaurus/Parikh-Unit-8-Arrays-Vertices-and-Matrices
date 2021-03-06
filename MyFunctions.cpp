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

#include "MyFunctions.h"

#include "GetData.h"
//Make sure to add any other needed include files
#include <iostream>

using namespace std;



int Data_Validation_integer() {
    int testMe = 0;
    do {
        cout << "Enter a number";
    } while (!(getValidInt(testMe)));
    cout << endl;
    return testMe;
}
int Favorite(int favoriteNumber, std::vector<int> numbers)
{
    // making counter variable
    int counter = 0;
    // checking how many times favorite number is present in vector
    for (int a: numbers)
    {
        
        if (a == favoriteNumber)
        {
            counter ++;
        }
    }
    return counter;
}
void reverseFunctionforQ2Worksheet2(std::string words[])
{
    // outputting the array values into a variable
    string radar = words[0];
    string warts = words[1];
    string evil = words[2];
    string racecar = words[3];
    string toto = words[4];

    // reversing all now
    string radarReversed = words[0];
    string wartsReversed = words[1];
    string evilReversed = words[2];
    string racecarReveresed = words[3];
    string totoReversed = words[4];


    // Reversing radar
    int n = radarReversed.length();
  
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(radarReversed[i], radarReversed[n - i - 1]);

    // Reversing warts
    n = wartsReversed.length();
  
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(wartsReversed[i], wartsReversed[n - i - 1]);

    // Reversing evil
    n = evilReversed.length();
  
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(evilReversed[i], evilReversed[n - i - 1]);

    // Reversing racecar
    n = racecarReveresed.length();
  
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(racecarReveresed[i], racecarReveresed[n - i - 1]);

    // Reversing toto
    n = totoReversed.length();
  
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(totoReversed[i], totoReversed[n - i - 1]);

    // checking to see if Palindrome
    // declaring vars
    string radarPal = " ";
    string wartsPal = " ";
    string evilPal = " ";
    string racecarPal = " ";
    string totoPal = " ";

    // if statements
    if (radar == radarReversed)
    {
        radarPal = "Yes";
    }
    else
    {
        radarPal = "No";
    }

    if (warts == wartsReversed)
    {
        wartsPal = "Yes";
    }
    else
    {
        wartsPal = "No";
    }

    if (evil == evilReversed)
    {
        evilPal = "Yes";
    }
    else
    {
        evilPal = "No";
    }

    if (racecar == racecarReveresed)
    {
        racecarPal = "Yes";
    }
    else
    {
        racecarPal = "No";
    }

    if (toto == totoReversed)
    {
        totoPal = "Yes";
    }
    else
    {
        totoPal = "No";
    }

    // output
    cout << "Word\t\t Reversed Word\t\t Is it a Palindrome?\n";
    cout << "------------------------------------------------------------\n";
    cout << radar << "\t\t" << radarReversed << "\t\t " << radarPal << endl;
    cout << warts << "\t\t" << wartsReversed << "\t\t " << wartsPal << endl;
    cout << evil << "\t\t" << evilReversed << "\t\t " << evilPal << endl;
    cout << racecar << "\t\t" << racecarReveresed << "\t\t " << racecarPal << endl;
    cout << toto << "\t\t" << totoReversed << "\t\t " << totoPal << endl;

}
int getIndex(std::vector<int> v, int k)
{
    int index = 0;
    bool valueFound = false;
    do
    {
        for (int a = 0; a < v.size(); a++)
        {
            if (v[a] == k)
            {
                index = a;
                valueFound = true;
                //break;
            }
        }
        if (valueFound == false) {
            // If the element is not
            // present in the vector
            cout << "That's not a valid distance\nPlease enter in a valid distance\n";
            k = Data_Validation_integer();
        }
    }while(valueFound == false);
    return index;
}
void studentData(std::vector<std::string> names, std::vector<std::string> address, std::vector<std::string> phoneNumber, int i)
{
    cout << "Student 1:\t";
    // depending on which run it is affects what prints
    if (i == 0)
    {
        cout << names[0];
    }
    else if (i == 1)
    {
       cout << address[0];
    }
    else if (i == 2)
    {
       cout << phoneNumber[0];
    }
    cout << endl;
    cout << "Student 2:\t";
    // depending on which run it is affects what prints
    if (i == 0)
    {
       cout << names[1];
    }
    else if (i == 1)
    {
       cout << address[1];
    }
    else if (i == 2)
    {
      cout <<  phoneNumber[1];
    }
    cout << endl;

    cout << "Student 3:\t";
    // depending on which run it is affects what prints
    if (i == 0)
    {
        cout << names[2];
    }
    else if (i == 1)
    {
        cout << address[2];
    }
    else if (i == 2)
    {
        cout <<  phoneNumber[2];
    }
    cout << endl;

    cout << "Student 4:\t";
    // depending on which run it is affects what prints
    if(i == 0)
    {
       cout << names[3];
    }
    else if (i == 1)
    {
      cout<<  address[3];
    }
    else if (i == 2)
    {
        cout << phoneNumber [3];
    }
    cout << endl;
    cout << "Student 5:\t";
    // depending on which run it is affects what prints
    if(i == 0)
    {
       cout << names[4];
    }
    else if (i == 1)
    {
        cout << address[4];
    }
    else if (i == 2)
    {
       cout << phoneNumber[4];
    }
    cout << endl;
cout << endl << endl;
    if (i == 2)
    {
        cout << "Student 3:";
        // for student 3, everything prints
        cout << names[2] << endl << "\t" << address[2] << endl << "\t" << phoneNumber[2] << endl;
    }
}

    int binarySearchArray(int array[], int size, int searchValue)
    {
        // binary search algorithem
        
        int low = 0;
        int high = size - 1;
     
        int mid;
     
        while (low <= high)
        {
            mid = (low + high) / 2;
     
            if(searchValue == array[mid])
            {
                return mid;
            }
            else if (searchValue > array[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
     
        return -1;
    }




