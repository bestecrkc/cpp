#include <iostream>
using namespace std;

class StudentResult {
private:
    string studentName;
    int studentId;
    double mark1, mark2, mark3;

public:
    
    StudentResult(string name, int id, double m1, double m2, double m3) {
        studentName = name;
        studentId = id;
        mark1 = m1;
        mark2 = m2;
        mark3 = m3;
    }

    double calculateTotal() {
        return mark1 + mark2 + mark3;
    }

    double calculateAverage() {
        return calculateTotal() / 3;
    }

    char determineGrade() {
        double avg = calculateAverage();

        if (avg >= 90) return 'A';
        else if (avg >= 80) return 'B';
        else if (avg >= 70) return 'C';
        else if (avg >= 60) return 'D';
        else return 'F';
    }

    void printResult() {
        cout << "\n--- Student Result ---" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Student ID: " << studentId << endl;
        cout << "Mark1: " << mark1 << endl;
        cout << "Mark2: " << mark2 << endl;
        cout << "Mark3: " << mark3 << endl;
        cout << "Total: " << calculateTotal() << endl;
        cout << "Average: " << calculateAverage() << endl;
        cout << "Grade: " << determineGrade() << endl;
    }
};

int main() {

    string name;
    int id;
    double m1, m2, m3;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Student ID: ";
    cin >> id;

    cout << "Enter Mark 1: ";
    cin >> m1;

    cout << "Enter Mark 2: ";
    cin >> m2;

    cout << "Enter Mark 3: ";
    cin >> m3;

    StudentResult s1(name, id, m1, m2, m3);

    s1.printResult();

    return 0;
}