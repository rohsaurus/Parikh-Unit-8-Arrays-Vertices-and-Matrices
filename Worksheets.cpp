/*
*Rohan Parikh
*Unit 8 Arrays Vertices and Matrices
*5 May 2021 -
*Extra Thing:Worksheet Arrays Extra Thing is to print question 2 array to a file
*Extra Thing: Worksheet Functions and arrays In Question 1, print user's favorite number and vector into a file
*Extra Thing: Worksheet Parallel Arrays print final output to a file
*Extra Thing: Worksheet Searching arrays allows user to try to win the lottery again
*Extra Thing Worksheet Searching and sorting arrays allows user to print bubble sort array to file question 5
*/

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
   // making array to pass into function
    string words[] = {"radar","warts","evil","racecar","toot"};
    // function to reverse, check if same, and output
    reverseFunctionforQ2Worksheet2(words);
}

void worksheet7(string namedItem) {
    // Worksheet Name
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 3 here
    // Initilizing and defining vectors for parrall arrays
    vector<int> Distance = {50,100,200,400,800,1000};
    vector<double> Time = {7.24,13.54,28.03,71.12,158.67,220.15};
    // asking user what distance do they want
    cout << "You'll be asked to enter in a distance you would like to know more about\n";
    int distance = Data_Validation_integer();
    // function to retrieve index
    int index = getIndex(Distance,distance);
    cout << "Distance\tTime";
    cout << endl;
    cout << Distance[index] << "\t\t" << Time[index];
    cout << endl;
    // extra thing
    // printing above to a file
    ofstream file;
    file.open("DistanceandTime.txt");
    file << "Distance \tTime\n";
    file << Distance[index] << "\t\t" << Time[index];
    file << endl;
    cout << endl << endl;

    
    // three parallal arrays Question 2
    vector<string> full_names = {"Shaiiko Lebleu", "John Wick", "Tony Stark", "Steve Rogers", "Peter Parker"};
    vector<string> addresses = {"444 BDS St.", "25 North Edgewood Dr.", "10880 Malibu Point", "569 Leaman Place", "20 Ingram St."};
    vector<string> phone_numbers = {"123-456-7890", "420-389-2497", "212-970-4133", "678-136-7092", "923-803-3428"};

    // function for printing student data
    int i = 0;
    while (i < 3)
    {
        studentData(full_names, addresses, phone_numbers, i);
        i++;
    }
}

void worksheet8(string namedItem) {
    // identifiying worksheet name
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 4 here
    // declaring winning numbers array
    int winning_numbers[] = {307,521,416,154,243,893};
    // Extra thing
    // allows user to repeat if they want to
    string repeat = " ";
    do
    {
        cout << "Enter your ticket number\n";
        // checking user input to make sure its good
        int key = Data_Validation_integer();
        // checking if key is one of the winning numbers
        bool didYouWin = false;
        for (int i = 0; i < 6; i++)
        {
            // declaring temp varabiable
            int arrayValue = 0;
            arrayValue = winning_numbers[i];
            // if it equals the winning number, user will be alerted
            if (key == arrayValue)
            {
                didYouWin = true;
                break;
            }
        }
        if (didYouWin == true)
        {
            cout << "Congrats! You won the lottery!\n";
            cout << "Do you want to try to increase your winnings? Enter yes now if want to gain more money\n";
            getline(cin,repeat);
        }
        else
        {
            cout << "Unfortunately, you did not win the lottery.\nWould you like to buy another ticket? There's a good chance you could win. Think of what you could do with the money!\n";
            cout << "Enter yes if you believe in yourself\n";
            getline(cin,repeat);
        }
    }
    while(repeat == "yes"); //repeating if user wants to

    // Question Two
    // binary search for a key value
    // the array is already sorted so no need to sort
    int binSearchArr[] ={5,6,10,14,15,16,18,22};
    //asking user for key value
    cout << "What number do you want to look for?\n";
    int key = Data_Validation_integer();
    // running binary search function
    int index = binarySearchArray(binSearchArr,7,key);
    if (index == -1)
    {
        cout << "Your key value is not in the function. The binary search returned false\n";
    }
    // final output
    for (int a : binSearchArr)
    {
        cout << a << " ";
    }
    cout << endl;
    if (index == -1 )
    {
        cout << "print not found for user key value\n";
    }
    else
    {
        cout << "Print found for use key value:" << index << endl;
    }

    
}

void worksheet9(string namedItem) {
    // printing worksheet name
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 4 here
    // making code to generate 50 random int
    // Question 1
    int randomArray[49];
    int max = 16;
    srand(time(0));
    for (int i = 0; i < 49; i++)
    {
        int random_num = 0;
        random_num = (rand() % max);
        if (random_num < 2)
        {
            // discarding if it's less than two
            random_num = 0;
            i--;
        }
        else
        {
            // adding to array
            randomArray[i] = random_num;
        }
    }

    // Question 2
    // asking user for a key number
    int userKey = 0;
    while (userKey > 15 || userKey < 2)
    {
        userKey = Data_Validation_integer();
        cout << "NOTE: If you are asked to enter a number again that means you entered a key value that is less than 2 or greater than 15. Make sure that the key value is between 2 and 15\n";
    }
    // Question 3
    int index = 0;
    int j = 0;
    while (true)
    {
      // searching through array for user key
        int temp = randomArray[j];
        if (temp == userKey)
        {
            index = j;
            cout << "Your key value was found at index " << index << endl;
            break;
        }
        j ++;
    }
    // printing array
    int b = 0;
    for (int a : randomArray)
    {
        // adding new line every 10 numbers
        if (b == 9 || b == 19 || b == 29 || b == 39 || b == 49)
            
        {
            cout << endl;
        }
        cout << a << " ";
        b ++;
    }
    cout << endl;
    // Question 4
    cout << "Array Sorted in Descending Order by the Bubble Sort.\n";
    // Question 5
    // bubble sorting
    int n = size(randomArray);
    for(int i = 0; i < n-1 ; i++)
    {
        for(j =0; j < n -i -1 ; j++)
        {
            //checking if previous value is greater than the next one
            if(randomArray[j] < randomArray[j+1])
            {
                // temp will store variable before swap
                int temp = randomArray[j];
                randomArray[j] = randomArray[j+1];
                randomArray[j+1]=temp;
            }
        }
    }
    // printing bubble sort
    cout << "Bubble Sort:\n";
    for (int i = 0; i < n; i++)
        cout << randomArray[i] << " ";
    // extra thing
    // allows user to print this array to a file
    ofstream fout;
    fout.open("bubblesort.txt");
    cout << "Do you want to save this array to a file? Enter yes now\n";
    string userChoice = " ";
    getline(cin,userChoice);
    if (userChoice == "yes")
    {
        cout << "Saving to a file\n";
        for (int i = 0; i < n; i++)
            fout << randomArray[i] << " ";
    }
    fout.close();
    // Question 6
    cout << "Array Sorted in Ascending Order by the Exchange Sort.\n";

    // Question 7
    // exchange sort algorithem
    // declaring vars
    int i,k;
    int temp;
    int numLength = size(randomArray);
    // elements that will be compared
    for (i = 0; i < (numLength - 1); i++)
    {
        // rest of the elements in the array
        for (j = (i + 1); j < numLength; j++)
        {
            // acesnding order
            if (randomArray[i] > randomArray[j])
            {
                // swaping the vars
                temp = randomArray[i];
                randomArray[i] = randomArray[j];
                randomArray[j] = temp;
            }
        }
    }
    // printing exchange sort
    cout <<"Exchange Sort: ";
    for (int b : randomArray)
    {
        cout << b << " ";
    }
}
   

void worksheet10(string namedItem) {
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 5 here
}

