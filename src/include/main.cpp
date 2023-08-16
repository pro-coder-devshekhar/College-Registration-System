#include <iostream>
#include <bits/stdc++.h>
#include "Student.h"
#include "Module.h"
using namespace std;

int main()
{
    int choice = -1;
    Student st;
    Module md;

    while (choice != 0)
    {
        cout << "# College Registration System #" << endl;
        cout << "1> Add Record" << endl;
        cout << "2> Update Record" << endl;
        cout << "3> Get any record" << endl;
        cout << "4> Get all record" << endl;
        cout << "5> Add Module" << endl;
        cout << "6> Update Module" << endl;
        cout << "7> Get any module details" << endl;
        cout << "8> Get all modules details" << endl;
        // cout << "9> Find Std Marks" << endl;
        cout << "0> Exit.." << endl;

        cout << "Enter your choice : " << endl;
        cin >> choice;
        while (cin.fail())
        {
            cout << "Invalid Input" << endl;
            cin.clear();
            cin.sync();
            cout << "Enter your choice : " << endl;
            cin >> choice;
        }
        switch (choice)
        {
        case 1:
            st.addStudentRecord(st);
            break;

        case 2:
            st.updateStudentRecord();
            break;

        case 3:
            st.displayStudentRecord();
            break;

        case 4:
            st.displayAllStudentRecord();
            break;

        case 5:
            md.addModule(md);
            break;

        case 6:

            md.updateModule();
            break;

        case 7:
            md.displayModuleDetails();
            break;

        case 8:
            md.displayAllModuleDetails();
            break;

            // case 9:
            //     st.findStdMarks();
            //     break;

        case 0:
            cout << "YOU HAVE EXITED THE SYSTEM" << endl;
            break;

        default:
            cout << "Invalid choice.." << endl;
            getchar();
        }
    }
    return 0;
}
