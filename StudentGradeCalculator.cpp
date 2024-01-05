// StudentGradeCalculator
// TITLE: Student Grade Calculator

#include <iostream>
#include <string>
using namespace std;

//student class with the private and public varbiles
class student{
public:
 student();
 student(string name, string surname, int a1,int a2,int test,
 int exam);
 string getName();
 string getSurname();
 int getAssignment1Mark();
 int getAssignment2Mark();
 int getLabTestMark();
 int getExamMark();
 void setAssignment1Mark(int);
 void setAssignment2Mark(int);
 void setLabTestMark(int);
 void setExamMark(int);
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
//giving the varibles a base answer in case of no userinput
student::student(){
    name="No name";
    surname="No name";
    assignment1Mark=-1;
    assignment2Mark=-1;
    labTestMark=-1;
    examMark=-1;
}
//delcaring each variable
student::student(string n, string sn, int a1,int a2,int i ,int e){
    name=n;
    surname=sn;
    assignment1Mark=a1;
    assignment2Mark=a2;
    labTestMark=i;
    examMark=e;
}
//getting the name of the student and returning it
string student::getName(){
    cout<<"Enter your name: ";
    cin>>name;
    return name;
}
//getting the surname of the student and returning it
string student::getSurname(){
    cout<<"Enter your Surname: ";
    cin>>surname;
    return surname;
}
//getting the mark for assigment1 of the student and returning it
int student::getAssignment1Mark(){
    cout<<"Enter your Assiagment 1 Mark: ";
    cin>>assignment1Mark;
    return assignment1Mark;
}
//getting the mark for assigment2 of the student and returning it
int student::getAssignment2Mark(){
    cout<<"Enter your Assiagment 2 Mark: ";
    cin>>assignment2Mark;
    return assignment2Mark;
}
//getting the mark for lab test of the student and returning it
int student::getLabTestMark(){
    cout<<"Enter your lab test mark: ";
    cin>>labTestMark;
    return labTestMark;
}
//getting the mark for exam of the student and returning it
int student::getExamMark(){
    cout<<"Enter your exam mark: ";
    cin>>examMark;
    return examMark;
}
//giving each varbile the corresponding varbiable to set the marks
void student::setAssignment1Mark(int a1){
    assignment1Mark=a1;
}

void student::setAssignment2Mark(int a2){
    assignment2Mark=a2;
}

void student::setLabTestMark(int i){
    labTestMark=i;
}

void student::setExamMark(int e){
    examMark=e;
}
//boolean statment to check if the student marks will result in pass or fail
bool student::passed(){
    if((assignment1Mark+assignment2Mark>=20)&&(labTestMark+examMark>=30))
    return true;
    else
    return false;
}
//calculatuing the student grade and printing the grade letter
char student::getGrade(){
    int total;
    total=assignment1Mark+assignment2Mark+labTestMark+examMark;
    if(total<50)
    return'F';
    else if((total>=50)&&(total<60))
    return'P';
    else if((total>=60)&&(total<70))
    return'C';
    else if((total>=70)&&(total<80))
    return'B';
    else if((total>=80))
    return'A';
}
//main where we test 2 objects,
//one we  intailize first and the second where we as for the user input
//and prints the grade
int main(){
    student s1("Zach","Bin",16,18,7,35);

    if(s1.passed())
    cout<<"The grade letter is: "<<s1.getGrade()<<endl;


    student s2;
    s2.getName();
    s2.getSurname();
    s2.getAssignment1Mark();
    s2.getAssignment2Mark();
    s2.getLabTestMark();
    s2.getExamMark();
    if(s2.passed())
    cout<<"The grade letter is: "<<s2.getGrade()<<endl;



    return 0;
}
