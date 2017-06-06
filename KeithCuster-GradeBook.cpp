//Author: Keith Custer
//Date: February 11, 2017
//Purpose: Grade book simulator that takes the name of the student that the user gives and allows changing grade values
//program then calculates averages and displays a letter grade.
//Version 1.0

#include <iostream>
#include <string>


using namespace std;
// class to hold all functions and variables that relate to the grade book
class gradeBook
{

public:
    //constructor for gradeBook class will automatically call the functions below
    gradeBook()
    {
    displayNamesGrades();
    calculateGrades();
    displayLetterGrade();
    editGrades();
    calculateGrades();
    displayNamesGrades();
    displayLetterGrade();
    }

    //function to display names and grades
    void displayNamesGrades()
    {
    //For loop to display names on the same line
    for(int x = 0; x < 4; x++)
    {
         cout << names[x] << " ";
    }
    cout << endl;
    cout << "-------------------------";


    //For loop to display grades on a grid for multidimensional array[][]
    //First for loop ends the line 3 times with counter starting at 0, y is also used as a counter for the rows in the second for loop.

    for(int y = 0; y < 4; y++)
    {
       cout << endl;

       //The second for loop displays each row and column with y representing the rows and z representing columns.
        for(int z = 0; z < 4; z++)
        {
            cout << grades[y][z] << "     ";
        }
    }

        cout << "\n-------------------------\n";
    }
    //Function to edit student grades
    int editGrades()
    {
    //Asks user if they would like to edit a certain student's grade
    cout << "Which student's grades would you like to change?" << endl;
    string input = "";
    int gradeSelect;
    int replacementGrade;
    int numList[4] = {1,2,3,4};
    getline(cin, input);
    cout << endl;

    //User input is taken in order to select which student's grade should be edited
    //***************************************
    //for bobs grade edit
    if (input == "bob" || input == "Bob")
    {
    cout << "Which grade would you like to edit for Bob?" << endl;
    cout << "For example... \n\nBob \n---------" << endl;
    for (int x = 0; x < 4; x++)
    {
        cout << "Row: " << numList[x] << endl;
    }

    cout << "---------" << endl;
    cout << "Row: ";
    cin >> gradeSelect;
    cout << endl;

    switch(gradeSelect)
    {

    case 1:
    cout << "Okay and what grade would you like to replace it with? " << endl;
    cin >> grades[0][0];
    cout << endl;

    break;

    case 2:
    cout << "Okay and what grade would you like to replace it with? " << endl;
    cin >>  grades[1][0];
        cout << endl;

    break;

    case 3:
    cout << "Okay and what grade would you like to replace it with? " << endl;
   cin >>  grades[2][0];
       cout << endl;

    break;

    case 4:
    cout << "Okay and what grade would you like to replace it with? " << endl;
   cin >>  grades[3][0];
       cout << endl;

    break;
    }
    }




    //****************************************************
    //for sally's grade edit
    else if (input == "sally" || input == "Sally")
    {
    cout << "Which grade would you like to edit for Sally?\n" << endl;
    cout << "For example... \n\nSally \n---------" << endl;

    for (int x = 0; x < 4; x++)
    {
        cout << "Row: " << numList[x] << endl;
    }

    cout << "---------" << endl;
    cout << "Row: ";
    cin >> gradeSelect;
    cout << endl;

    switch(gradeSelect)
    {

    case 1:
    cout << "Okay and what grade would you like to replace it with? " << endl;
    cin >> grades[0][1];
    cout << endl;

    break;

    case 2:
    cout << "Okay and what grade would you like to replace it with? " << endl;
    cin >>  grades[1][1];
        cout << endl;

    break;

    case 3:
    cout << "Okay and what grade would you like to replace it with? " << endl;
   cin >>  grades[2][1];
       cout << endl;

    break;

    case 4:
    cout << "Okay and what grade would you like to replace it with? " << endl;
   cin >>  grades[3][1];
       cout << endl;

    break;



    }
    }




    //***************************************************************************
    //For Danny's grade edit
    else if (input == "danny" || input == "Danny")
    {
    cout << "Which grade would you like to edit for Danny?" << endl;
    cout << "For example... \n\nDanny \n---------" << endl;
    for (int x = 0; x < 4; x++)
    {
        cout << "Row: " << numList[x] << endl;
    }

    cout << "---------" << endl;
    cout << "Row: ";
    cin >> gradeSelect;
    cout << endl;

    switch(gradeSelect)
    {

    case 1:
    cout << "Okay and what grade would you like to replace it with? " << endl;
    cin >> grades[0][2];
    cout << endl;

    break;

    case 2:
    cout << "Okay and what grade would you like to replace it with? " << endl;
    cin >>  grades[1][2];
        cout << endl;

    break;

    case 3:
    cout << "Okay and what grade would you like to replace it with? " << endl;
   cin >>  grades[2][2];
       cout << endl;

    break;

    case 4:
    cout << "Okay and what grade would you like to replace it with? " << endl;
   cin >>  grades[3][2];
       cout << endl;

    break;
    }
    }

    //****************************************************
    //for maria's grade edit
    else if (input == "maria" || input == "Maria")
    {
        cout << "Which grade would you like to edit for Maria?" << endl;
    cout << "For example... \n\nMaria \n---------" << endl;
    for (int x = 0; x < 4; x++)
    {
        cout << "Row: " << numList[x] << endl;
    }

    cout << "---------" << endl;
    cout << "Row: ";
    cin >> gradeSelect;
    cout << endl;

    switch(gradeSelect)
    {

    case 1:
    cout << "Okay and what grade would you like to replace it with? " << endl;
    cin >> grades[0][3];
    cout << endl;

    break;

    case 2:
    cout << "Okay and what grade would you like to replace it with? " << endl;
    cin >>  grades[1][3];
        cout << endl;

    break;

    case 3:
    cout << "Okay and what grade would you like to replace it with? " << endl;
   cin >>  grades[2][3];
       cout << endl;

    break;

    case 4:
    cout << "Okay and what grade would you like to replace it with? " << endl;
   cin >>  grades[3][3];
       cout << endl;

    break;
    }
    }

    else if (input == "No" || input == "no")
    {
        return 0;
    }

    }
    //Function that calculates average grade for each student
    int calculateGrades()
    {
        studentGradeAverage[0] = (grades[0][0] + grades[1][0] + grades[2][0] + grades[3][0]) / 4;
        studentGradeAverage[1] = (grades[0][1] + grades[1][1] + grades[2][1] + grades[3][1]) / 4;
        studentGradeAverage[2] = (grades[0][2] + grades[1][2] + grades[2][2] + grades[3][2]) / 4;
        studentGradeAverage[3] = (grades[0][3] + grades[1][3] + grades[2][3] + grades[3][3]) / 4;
    }
    void displayLetterGrade()
    {
        for (int x = 0; x < 4; x++){

        if (studentGradeAverage[x] <= 100 && studentGradeAverage[x] >= 90){
            cout << studentGradeAverage[x] << ":" << letterGrades[0] << "   ";
        }
        else if (studentGradeAverage[x] <= 89 && studentGradeAverage[x] >= 80){
           cout << studentGradeAverage[x] << ":" << letterGrades[1] << "   ";
        }
        else if (studentGradeAverage[x] <= 79 && studentGradeAverage[x] >= 70){
           cout << studentGradeAverage[x] << ":" << letterGrades[2] << "   ";
        }
        else if (studentGradeAverage[x] <= 69 && studentGradeAverage[x] >= 60){
           cout << studentGradeAverage[x] << ":" << letterGrades[3] << "   ";
        }
        else if (studentGradeAverage[x] <= 59){
          cout << studentGradeAverage[x] << ":" << letterGrades[4] << "   ";
        }

        }
        cout << "\n" << endl;
    }
private:
    //These variable can only be accessed inside the gradeBook class
    const string names[4] = {"Bob  ", "Sally ", "Danny ", "Maria "};
    string letterGrades[5] = {"A", "B", "C", "D", "F"};
    int grades[4][4] = {{92, 28, 39, 45},
                        {99, 74, 89, 96},
                        {90, 13, 13, 14},
                        {99, 55, 60, 89}};
    int gradeSum[5];
    int studentGradeAverage[5];
    /*
    Representation of grade book.

    Bob Sally Danny Maria
     1    2     3     4
     6    7     8     9
     11   12    13    14
     16   17    18    19

    */

};

int main()
{
    gradeBook book;

}






















