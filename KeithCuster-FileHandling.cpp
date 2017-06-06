//Author: Keith Custer
//Purpose: This program will read an input file that contains student names, majors, and grades.
//Date: May 27, 2017
//files: students.txt

//header files needed for I/O and file I/O.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //Variables to hold student information obtained from input file
    string firstName[5], lastName[5], major[5];
    float grade[5];

    //create a file object and open the input file
    ifstream file("students.txt");


    //test whether file is open, if not display an error message
    if (file.is_open())
    {
        cout << "The file student.txt is open.\n" << endl;
    }
    else
    {
        cout << "Error! The file could not be opened.\n" << endl;
        return 1;
    }

    //This for loop loops through each line in the file and stores the values to the appropriate variables
    for (int x = 0; x < 5; x++)
    {
        file >> firstName[x] >> lastName[x] >> major[x] >> grade[x];
    }

    //this for loop loops through each array index and displays the student info obtained from input file
    for (int x = 0; x < 5; x++)
    {
        cout << firstName[x] << " " << lastName[x] << " " << major[x] << " " << grade[x] << endl;
    }
    //**************************************************************************************************************************


    //variable to hold the highest grade
    float highestGrade = 0.0;

    //this for loop loops through each index of grade array and test whether
    //its greater than the value stored in variable highestGrade;
    for (int x = 0; x < 5; x++)
    {
        if (grade[x] > highestGrade)
        {
            highestGrade = grade[x];
        }
    }

    //output message to display highest grade
    cout << "\nThe highest grade is: " << highestGrade << endl;

    //**********************************************************************************************************

    //variables to hold average grade and total used in calculation
    float averageGrade, total;

    //this for loop loops through each index of grade array and is added to total variable
    for (int x = 0; x < 5; x++)
    {
        total = total + grade[x];
    }

    //the total is then divided by the number of grades(5) in order to calculate average grade
    averageGrade = total / float(5);

    //output message to display average grade
    cout << "\nThe average grade is: " << averageGrade << endl;

    //****************************************************************************************************************

    //output message for students with scores less than average grade
    cout << "\nStudents with scores less than the average grade: " << averageGrade << endl;

    //this for loop loops through each index of grade array and compares to average grade
    //if the grade is less than average grade, output the corresponding student's information
    for (int x = 0; x < 5; x++)
    {
        if (grade[x] < averageGrade)
        {
            cout << firstName[x] << " " << lastName[x] << " " << major[x] << " " << grade[x] << endl;
        }

    }

    //************************************************************************************************************

    //output message to display students with grades equal to the highest grade
    cout << "\nStudents with scores equal to the highest grade: " << highestGrade << endl;

    //this for loop loops through each grade array index and if the value is equal
    //to the highest grade then output the corresponding student's information
    for (int x = 0; x < 5; x++)
    {
        if (grade[x] == highestGrade)
        {
            cout << firstName[x] << " " << lastName[x] << " " << major[x] << " " << grade[x] << endl;
        }

    }

    //close the file
    file.close();

    return 0;
}
