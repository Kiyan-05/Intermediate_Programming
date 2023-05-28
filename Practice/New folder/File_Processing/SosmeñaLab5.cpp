#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

struct student
{
    string studentName;
    double score;
};

void readFromRecord(student studScoreRec[],int s);
double recAverage(student studScoreRec[], int s);
double recSTDev(student studScoreRec[], int s);
void writeResultToFile(double ave, double stDev);


int main()
{
    double ave, stDev;
    int s = 7;
    student studScoreRec[s];

    readFromRecord(studScoreRec,s);
    ave = recAverage(studScoreRec,s);
    stDev = recSTDev(studScoreRec,s);

    writeResultToFile(ave,stDev);
}

void readFromRecord(student studScoreRec[], int s)
{
    ifstream inStudentScore;

    inStudentScore.open("StudentScore.txt");

    for(int i=0; !inStudentScore.eof(); i++)
    {
        //getline(inStudentScore,studScoreRec[i].studentName, ' ');
        inStudentScore>> studScoreRec[i].studentName >>studScoreRec[i].score;
    }


    for(int i=0; i<s; i++)
    {
        cout<<studScoreRec[i].studentName<<": "<<studScoreRec[i].score<<"\n";
    }
}

double recAverage(student studScoreRec[], int s)
{
    double res = 0;

    for(int i=0; i<s; i++)
    {
        res += studScoreRec[i].score;
    }
    return res/s;
}

double recSTDev(student studScoreRec[], int s)
{
    double mean = recAverage(studScoreRec,s);
    double x = 0, fn = 0, res = 0;

    for(int i=0; i<s; i++)
    {
        x += pow(studScoreRec[i].score - mean,2);
    }
    fn = x/(s-1);
    res = sqrt(fn);
    return res;
}

void writeResultToFile(double ave, double stDev)
{
    ofstream outStudentScore;

    outStudentScore.open("scoreDescStat.txt");
    if(outStudentScore.is_open())
    {
        outStudentScore<<"Average Score: "<<ave<<"\n";
        outStudentScore<<"Standard Deviation: "<<stDev;
    }
}



