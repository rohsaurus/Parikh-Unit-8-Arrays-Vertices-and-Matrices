#include "Worksheets.h"
#include "GetData.h"
#include "MyFunctions.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

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
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 3 here
}

void worksheet4(string namedItem) {
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 4 here
}

void worksheet5(string namedItem) {
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 5 here
}

void worksheet6(string namedItem) {
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    //Put all code for worksheet 1 here
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

