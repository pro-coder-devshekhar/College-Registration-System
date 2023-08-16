#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int studId;
    string studName, bloodGrp, studAddress, dateOfBirth;
    int tempStudentId;
    string tempStudentName, tempBloodGrp, tempStudAddress, tempDateOfBirth;
    map<int, Student> mpStudent;

    void addStudentRecord(Student s)
    {
        cout << "Enter Student ID, Name, Blood Grp., Address and DOB" << endl;
        cin >> studId;
        while (cin.fail())
        {
            cout << "Invalid Input" << endl;
            cin.clear();
            cin.sync();
            cout << "Enter Student ID, Name, Blood Grp., Address and DOB" << endl;
            cin >> studId;
        }
        cin.get();
        getline(cin, s.studName);
        cin >> s.bloodGrp;
        // cin >> s.studAddress;
        cin.get();
        getline(cin, s.studAddress);
        cin >> s.dateOfBirth;
        mpStudent.insert({studId, s});
    }

    void updateStudentRecord()
    {
        cout << "Enter the student id to update the record" << endl;
        cin >> tempStudentId;
        while (cin.fail())
        {
            cout << "Invalid Input" << endl;
            cin.clear();
            cin.sync();
            cout << "Enter the student id to update the record" << endl;
            cin >> tempStudentId;
        }
        for (auto itr = mpStudent.find(tempStudentId); itr != mpStudent.end(); itr++)
        {
            cout << "Enter updated Name, Blood Grp., Address and DOB" << endl;
            cin.get();
            getline(cin, tempStudentName);
            cin >> tempBloodGrp;
            // cin >> tempStudAddress;
            cin.get();
            getline(cin, tempStudAddress);
            cin >> tempDateOfBirth;
            itr->second.studName = tempStudentName;
            itr->second.bloodGrp = tempBloodGrp;
            itr->second.studAddress = tempStudAddress;
            itr->second.dateOfBirth = tempDateOfBirth;
            cout << "Update Successful!!" << endl;
            break;
        }
    }

    void displayStudentRecord()
    {
        cout << "Enter the student id to view the record" << endl;
        cin >> tempStudentId;
        while (cin.fail())
        {
            cout << "Invalid Input" << endl;
            cin.clear();
            cin.sync();
            cout << "Enter the student id to view the record" << endl;
            cin >> tempStudentId;
        }
        for (auto itr = mpStudent.find(tempStudentId); itr != mpStudent.end(); itr++)
        {
            cout << itr->first << " | " << itr->second.studName << " | " << itr->second.bloodGrp << " | " << itr->second.studAddress << " | " << itr->second.dateOfBirth << endl;
            break;
        }
    }

    void displayAllStudentRecord()
    {
        for (auto itr = mpStudent.begin(); itr != mpStudent.end(); itr++)
        {
            cout << itr->first << " | " << itr->second.studName << " | " << itr->second.bloodGrp << " | " << itr->second.studAddress << " | " << itr->second.dateOfBirth << endl;
        }
    }
};