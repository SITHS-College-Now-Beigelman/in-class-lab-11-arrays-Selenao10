//Selena Ouyang
//Lab 11
//11-12-24

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
    
    int index;
    double num;
    char space = ' ';
    
    
    srand(time(0)); // Set a new seed based on the current time


    const int ARRAY_SIZE = 50; //array size of 50
    double alpha[ARRAY_SIZE]; //names array alpha


        cout << endl << "\nPart 1" << endl; //format
    //Part I
    //first 25 components are equal to the square of the counter (or index) variable
    for (index = 0; index < 25; index++)
    {
        num = pow(index,2);
        cout << num << space;
    }
    //last 25 components are equal to 3 times the index variable. 
    for (index = 25; index < 50; index++)
    {
        num = index*3;
        cout << num << space;
    }


        cout << endl << "\nPart 2" << endl; //format

    //Part II
    //first 25 components are equal to the square of the counter (or index) variable
    for (index = 0; index < 25; index++)
    {
        num = pow(index,2);
        cout << num << space;

        if (index == 9 || index == 19) //only ten elements per line
        cout << endl; //new line
    }

    //last 25 components are equal to 3 times the index variable. 
    for (index = 25; index < 50; index++)
    {
        num = index*3;
        cout << num << space;
        if (index == 29 || index == 39) //only ten elements per line
        cout << endl; //new line
    }


    cout << endl << "\nPart 3" << endl; //format

    //Part III
    double average = 0;
    int hundreds; //number of hundreds 

    for (index = 0; index < 50; index++) //for fifty components
    {
        alpha[index] = (rand() % 100 + 1); // Generate a random number between 1 and 100
        cout << alpha[index] << space;

        if (index == 9 || index == 19 || index == 29 || index == 39) //only ten elements per line
        cout << endl; //new line
        average = average + alpha[index]; //updates value of average by adding the value of the component

        if (alpha[index] == 100) //if the value of the component is equal to 100, increment hundreds by one
        hundreds ++;
    
    }

    cout << fixed << "\nAverage = " << average/50;
    cout << endl << "Number of hundreds: " << hundreds;


    return 0;
}

/*
Part 1
0 1 4 9 16 25 36 49 64 81 100 121 144 169 196 225 256 289 324 361 400 441 484 529 576 75 78 81 84 87 90 93 96 99 102 105 108 111 114 117 120 123 126 129 132 135 138 141 144 147

Part 2
0 1 4 9 16 25 36 49 64 81
100 121 144 169 196 225 256 289 324 361
400 441 484 529 576 75 78 81 84 87
90 93 96 99 102 105 108 111 114 117
120 123 126 129 132 135 138 141 144 147

Part 3
11 66 50 70 49 82 98 26 7 74
12 84 79 46 73 62 65 68 72 73
27 30 21 26 31 92 64 97 71 24
23 66 89 47 81 47 23 30 29 44
12 88 50 77 72 94 44 21 12 88
Average = 53.740000
Number of hundreds: 0
*/
