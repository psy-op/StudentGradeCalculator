// StudentGradeCalculator
// TITLE: Student Grade Calculator

#include <iostream>
#include <string>
using namespace std;

// Student class with private and public variables
class student {
public:
    // Default constructor with base values
    student();
    
    // Parameterized constructor with specified values
    student(string name, string surname, int a1, int a2, int i, int e);

    // Getter methods
    string getName();
    string getSurname();
    int getAssignment1Mark();
    int getAssignment2Mark();
    int getLabTestMark();
    int getExamMark();

    // Setter methods
    void setAssignment1Mark(int a1);
    void setAssignment2Mark(int a2);
    void setLabTestMark(int i);
    void setExamMark(int e);

    // Additional methods
    bool passed();
    char getGrade();

private:
    string name;
    string surname;
    int assignment1Mark;
    int assignment2Mark;
    int labTestMark;
    int examMark;
};

// Default constructor with base values
student::student() {
    name = "No name";
    surname = "No name";
    assignment1Mark = -1;
    assignment2Mark = -1;
    labTestMark = -1;
    examMark = -1;
}

// Parameterized constructor with specified values
student::student(string n, string sn, int a1, int a2, int i, int e) {
    name = n;
    surname = sn;
    assignment1Mark = a1;
    assignment2Mark = a2;
    labTestMark = i;
    examMark = e;
}

// Getter methods with user input
string student::getName() {
    cout << "Enter your name: ";
    cin >> name;
    return name;
}

string student::getSurname() {
    cout << "Enter your Surname: ";
    cin >> surname;
    return surname;
}

int student::getAssignment1Mark() {
    cout << "Enter your Assignment 1 Mark: ";
    cin >> assignment1Mark;
    return assignment1Mark;
}

int student::getAssignment2Mark() {
    cout << "Enter your Assignment 2 Mark: ";
    cin >> assignment2Mark;
    return assignment2Mark;
}

int student::getLabTestMark() {
    cout << "Enter your lab test mark: ";
    cin >> labTestMark;
    return labTestMark;
}

int student::getExamMark() {
    cout << "Enter your exam mark: ";
    cin >> examMark;
    return examMark;
}

// Setter methods
void student::setAssignment1Mark(int a1) {
    assignment1Mark = a1;
}

void student::setAssignment2Mark(int a2) {
    assignment2Mark = a2;
}

void student::setLabTestMark(int i) {
    labTestMark = i;
}

void student::setExamMark(int e) {
    examMark = e;
}

// Boolean statement to check if the student marks will result in pass or fail
bool student::passed() {
    return (assignment1Mark + assignment2Mark >= 20) && (labTestMark + examMark >= 30);
}

// Calculating the student grade and returning the grade letter
char student::getGrade() {
    int total = assignment1Mark + assignment2Mark + labTestMark + examMark;
    if (total < 50)
        return 'F';
    else if (total >= 50 && total < 60)
        return 'P';
    else if (total >= 60 && total < 70)
        return 'C';
    else if (total >= 70 && total < 80)
        return 'B';
    else if (total >= 80)
        return 'A';
}

// Main where we test 2 objects,
// One we initialize first and the second where we ask for us
