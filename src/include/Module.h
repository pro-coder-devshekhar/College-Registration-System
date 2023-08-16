#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Module
{
public:
   int moduleNo, duration;
   string moduleName, tentativeStartDate;
   float fees;
   int tempModuleNo, tempDuration;
   string tempModuleName, tempTentativeStartDate;
   float tempFees;
   map<int, Module> mpModule;

   void addModule(Module m)
   {
      cout << "Enter Module No., Name, Duration, Fees, and Tentative Start Date" << endl;
      cin >> moduleNo;
      while (cin.fail())
      {
         cout << "Invalid Input" << endl;
         cin.clear();
         cin.sync();
         cout << "Enter Module No., Name, Duration, Fees, and Tentative Start Date" << endl;
         cin >> moduleNo;
      }
      cin.get();
      getline(cin, m.moduleName);
      cin >> m.duration;
      cin >> m.fees;
      cin >> m.tentativeStartDate;
      mpModule.insert({moduleNo, m});
   }

   void updateModule()
   {
      cout << "Enter the module number to update the details" << endl;
      cin >> tempModuleNo;
      while (cin.fail())
      {
         cout << "Invalid Input" << endl;
         cin.clear();
         cin.sync();
         cout << "Enter the module number to update the details" << endl;
         cin >> tempModuleNo;
      }
      for (auto itr = mpModule.find(tempModuleNo); itr != mpModule.end(); itr++)
      {
         cout << "Enter updated Module Name, Duration, Fees, and Tentative Start Date" << endl;
         cin.get();
         getline(cin, tempModuleName);
         cin >> tempDuration >> tempFees >> tempTentativeStartDate;
         itr->second.moduleName = tempModuleName;
         itr->second.duration = tempDuration;
         itr->second.fees = tempFees;
         itr->second.tentativeStartDate = tempTentativeStartDate;
         cout << "Update Successful!!" << endl;
         break;
      }
   }

   void displayModuleDetails()
   {
      cout << "Enter the module number to display the details" << endl;
      cin >> tempModuleNo;
      while (cin.fail())
      {
         cout << "Invalid Input" << endl;
         cin.clear();
         cin.sync();
         cout << "Enter the module number to display the details" << endl;
         cin >> tempModuleNo;
      }
      for (auto itr = mpModule.find(tempModuleNo); itr != mpModule.end(); itr++)
      {
         cout << itr->first << " | " << itr->second.moduleName << " | " << itr->second.duration << " | " << itr->second.fees << " | " << itr->second.tempTentativeStartDate << endl;
         break;
      }
   }

   void displayAllModuleDetails()
   {

      for (auto itr = mpModule.begin(); itr != mpModule.end(); itr++)
      {
         cout << itr->first << " | " << itr->second.moduleName << " | " << itr->second.duration << " | " << itr->second.fees << " | " << itr->second.tentativeStartDate << endl;
      }
   }
};