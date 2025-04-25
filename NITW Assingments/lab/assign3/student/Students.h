#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Students
{
public:
    // to insert values from the file to the vector
    static vector<vector<string>> details;
    static void collectdetails()
    {
        string line;
        ifstream fin("students.txt"); // taking data from students.txt

        if (!fin.is_open()) // if file is not opening
        {
            cerr << "Error opening file\n";
            return;
        }

        while (getline(fin, line)) // looping through every line
        {
            vector<string> row;
            string word;

            for (int i = 0; i < line.size(); i++) // traversing every word in a line
            {
                if (line[i] != ' ')
                {
                    word += line[i];
                }
                else if (!word.empty())
                {
                    row.push_back(word);
                    word.clear();
                }
            }

            if (!word.empty()) // for last word
            {
                row.push_back(word);
            }

            details.push_back(row);
        }

        fin.close(); // closing file
    }

    // for printng all data of the vector
    static void printdetails()
    {
        for (int i = 0; i < details.size(); i++)
        {
            for (int j = 0; j < details[i].size(); j++)
            {
                cout << details[i][j] << " ";
            }
            cout << endl;
        }
    }

    // for printing the roll no of all the students
    static void print_roll_no()
    {
        for (int i = 0; i < details.size(); i++)
        {
            cout << details[i][0] << " ";
        }
        cout << endl;
    }

    // for printing the names of all the students
    static void print_names()
    {
        for (int i = 0; i < details.size(); i++)
        {
            cout << details[i][1] << " ";
        }
        cout << endl;
    }

    // for printing the phone no of all the students
    static void print_phone_no()
    {
        for (int i = 0; i < details.size(); i++)
        {
            cout << details[i][2] << " ";
        }
        cout << endl;
    }
    // for printing the e-mail addresses of all the students

    static void print_mails()
    {
        for (int i = 0; i < details.size(); i++)
        {
            cout << details[i][3] << " ";
        }
        cout << endl;
    }
};
// initializing a static data member outside of the class
vector<vector<string>> Students::details;
