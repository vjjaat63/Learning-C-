#include <iostream>
#include <fstream>
#include "Students.h"
using namespace std;

int main()
{
    Students::collectdetails();
    cout << "Available data is \n";
    Students::printdetails();

    cout << "\n List of the student's roll numbers : ";
    Students::print_roll_no();

    cout << "\n List of the student's names : ";
    Students::print_names();

    cout << "\n List of the student's mobile numbers : ";
    Students::print_phone_no();

    cout << "\n List of the student's mails : ";
    Students::print_mails();

    return 0;
}
