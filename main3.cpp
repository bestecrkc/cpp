#include <iostream>
using namespace std;

class Course {
private:
    string courseName;
    string courseCode;
    int hoursPerWeek;

public:
   
    Course(string name, string code, int hours) {
        courseName = name;
        courseCode = code;
        hoursPerWeek = hours;
    }

    
    void showCourse() {
        cout << "\n--- Course Information ---" << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Hours per Week: " << hoursPerWeek << endl;
    }
};

int main() {

    string name, code;
    int hours;

    
    cout << "Enter Course Name: ";
    getline(cin, name);

    cout << "Enter Course Code: ";
    getline(cin, code);

    cout << "Enter Hours per Week: ";
    cin >> hours;

    
    Course c1(name, code, hours);

    
    c1.showCourse();

    return 0;
}