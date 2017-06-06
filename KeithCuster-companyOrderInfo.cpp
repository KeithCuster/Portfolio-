//***************************************************************
//Author: Keith Custer
//Date: February 23, 2016
//Purpose: This program demonstrates the use of input prompts and
// the getline() function
// It also uses the setprecision function from the iomanip library.
//Version: 1.1
//****************************************************************
#include <iostream>
#include <iomanip> // for setprecision()
#include <string>

using namespace std;

class orderInfo //Class orderInfo contains all functions and variables for getting user input
{
public:
        //The orderInfo constructor will automatically call these functions once an oderInfo object has been created
        orderInfo()
        {
            cout << fixed << showpoint << setprecision(2); //set up how number will be displayed
            getTitle();
            getCompanyName();
            getCompanyRep();
            getPartNum();
            getQuantity();
            getUnitPrice();
            getDate();
            displayOrderInfo();
        }

        //This function asks user for title
        string getTitle()
        {
            cout << "Enter the title for this execution. " << endl;  // Prompt
            getline (cin, title);
            cout << endl;

        }

        //This function asks user for company name
        string getCompanyName()
        {
            cout << "What is the company name? " << endl;
            getline(cin, company);
            cout << endl;

        }

        //This function asks user for the company representative
        string getCompanyRep()
        {
            cout << "Who is your company representative? " << endl;
            getline(cin, companyRep);
            cout << endl;

        }

        //This function asks user for part number
        int getPartNum()
        {
            cout << "Enter part number: " << endl;  // Prompt
            cin >> partNumber;
            cout << endl;

        }

        //This function asks user for quantity
        int getQuantity()
        {
            cout << "Enter the quantity of this part ordered:  " << endl;  // Prompt
            cin >> quantity;
            cout << endl;

        }

        //This function asks user unit price
        float getUnitPrice()
        {
            cout << "Enter the unit price for this part:" << endl; // Prompt
            cout << "$";
            cin >> unitPrice;
            cout << endl;

        }

        //This function asks user for the date order was placed
        char getDate()
        {

            cout << "Date the order was placed." << endl;

            //Function for looping through dateArray
            //Uses the variable x as a counter to coincide with both the dateArray and mmddyyyy indexes
            //When each loop is made it assigns the user input to the mmddyyyy index that coincides with the current loop counter number
            for (int x = 0; x < 3; x++)
            {
                cout << dateArray[x];
                cin >> mmddyyyy[x];
            }

            cout << endl;

        }


        //This function does not return a value(hence void type), but just displays all info collected from other functions
        void displayOrderInfo()
        {
            totalPrice = quantity * unitPrice;

            cout << "Title: " << title << endl;
            cout << "Company: " << company << endl;
            cout << "Company Representative: " << companyRep << endl;
            cout << "Part Number: " << partNumber
                 << ", quantity of " << quantity
                 << ", at $" << unitPrice << " each" << endl;
            cout << "totals $" << totalPrice << endl;
            cout << "Date the order was placed: " << mmddyyyy[0] << "/" << mmddyyyy[1] << "/" << mmddyyyy[2] << endl;
        }
//These are all of the private variables that only the orderInfo class has access to
private:

  int partNumber;
  int quantity;

  float unitPrice;
  float totalPrice;

  string title;
  string dateArray[3] = {"Month: ", "Day: ", "Year: "};
  string mmddyyyy[3];
  string companyRep;
  string company;

};
int main ()
{

  orderInfo orderObject; //Created an object from the orderInfo class

  return 0;
}
