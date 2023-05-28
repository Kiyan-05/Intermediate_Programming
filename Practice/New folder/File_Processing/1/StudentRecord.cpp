#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cstring>
using namespace std;

struct studentRecord
{
    string name;
    int age;
    double gpa;
};

void readStudentRecord(vector<studentRecord>& studRecord);
void printStudentRecord(const vector<studentRecord>& studRecord);
double aveStudGPA(const vector<studentRecord>& studRecord);
void outStudGPA(double gpa);

int main()
{
    vector<studentRecord> studRecord;
    readStudentRecord(studRecord);

    double ave = aveStudGPA(studRecord);
    outStudGPA(ave);
}

void readStudentRecord(vector<studentRecord>& studRecord)
{
    ifstream inStudRecord;

    inStudRecord.open("students.txt");
    if(inStudRecord.is_open())
    {
        while(!inStudRecord.eof())
        {
            string name, ageStr, gpaStr;
            int age;
            double gpa;
            getline(inStudRecord, name, ',');
            getline(inStudRecord, ageStr, ',');
            getline(inStudRecord, gpaStr, '\n');

            istringstream(ageStr) >> age;
            gpa = stod(gpaStr);

            studentRecord student;
            student.name = name;
            student.age = age;
            student.gpa = gpa;
            studRecord.push_back(student);
        }
    }
    printStudentRecord(studRecord);
}

void printStudentRecord(const vector<studentRecord>& studRecord)
{
    for(int i=0; i<studRecord.size(); i++)
    {
        cout<<studRecord.at(i).name<<": ";
        cout<<studRecord.at(i).age<<" -- ";
        cout<<studRecord.at(i).gpa<<"\n";
    }
}

double aveStudGPA(const vector<studentRecord>& studRecord)
{
    double ave = 0;
    for(int i=0; i<studRecord.size(); i++)
    {
        ave += studRecord.at(i).gpa;
    }

    return ave/studRecord.size();
}

void outStudGPA(double gpa)
{
    ofstream outStudGPA;

    outStudGPA.open("studGpa.txt");

    if(outStudGPA.is_open())
    {
        outStudGPA<<"Student's GPA: "<<gpa;
    }
    else
    {
        cout<<"Storing Record Error";
    }
}
