#include <iostream>
using namespace std;

int main() {

    auto employeeID = 0;
    auto salary = 0.0;
    auto bonus = 0.0;
    auto performanceGrade = ' ';
    auto fullTimeStatus = false;

   
    cout << "Enter Employee ID, Salary, Bonus, Performance Grade (A/B/C) and Full-Time Status (1=Yes,0=No): ";

    cin >> employeeID >> salary >> bonus >> performanceGrade >> fullTimeStatus;

    auto totalSalary = salary + bonus;

    cout << "\n--- Employee Information ---" << endl;
    cout << "Employee ID: " << employeeID << endl;
    cout << "Salary: " << salary << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Total Salary: " << totalSalary << endl;
    cout << "Performance Grade: " << performanceGrade << endl;
    cout << "Full-Time Status: " << fullTimeStatus << endl;

    return 0;
}