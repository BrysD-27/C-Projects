#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

void CorrectAnswers(string[], int);
void StudentAnswers(string[], int);
void ExamGrade(string[], string[], int);

int main()
{
    const int size = 101;
    string CorrectAns[size] = {}, StudAns[size] = {};

    CorrectAnswers(CorrectAns, size);
    StudentAnswers(StudAns, size);
    ExamGrade(CorrectAns, StudAns, size);

    return 0;
}

void CorrectAnswers(string CorrectAns[], int size)
{
    string FileName;
    cout << "Please enter the file name with the correct exam answers: ";
    getline(cin, FileName);     

    ifstream fin;
    fin.open(FileName);

    if (!fin)
    {
        cout << "Error opening file " << FileName << "!!!" << endl;
        cout << "Please try again: ";
        getline(cin, FileName);
    }
    else
    {
        for (int count = 0; count < size; count++)
        {
            fin >> CorrectAns[count];
        }
    }
}

void StudentAnswers(string StudAns[], int size)
{
    string Filename;
    cout << "Please enter the file name with the student's answers: ";
    getline(cin, Filename);

    ifstream sin;
    sin.open(Filename);

    if (!sin)
    {
        cout << "Error opening file " << Filename << "!!!" << endl;
        cout << "Please try again: ";
        getline(cin, Filename);
    }
    else
    {
        for (int count = 0; count < size; count++)
        {
            sin >> StudAns[count];
        }
    }
}

void ExamGrade(string CorrectAns[], string Studentans[], int size)
{
    int misses{}, count=0;
    float matches{};

    cout << endl << endl;
    for (int i = 0; i < size; i++)
    {
        count++;
      if (Studentans[i] == CorrectAns[i]) {
         ++matches;
               
      }
      if (Studentans[i] != CorrectAns[i]) {
                ++misses;
                cout << "Student missed question " << count << ". The correct answer was " << CorrectAns[i]
                    << ". The Student answered " << Studentans[i] << "." << endl << endl;
                
      } 
       
    }
    double score = matches / 101;
    score = score * 100;

    cout << "The Student missed a total of " << misses << " questions." << endl << endl;
    cout << "The Student's percentage score is %" << setprecision(2) << fixed << score << endl << endl;

    if (score >= 70.00) {
        cout << "Congrats! You passed the Exam!";
    }
    else {
        cout << "Sorry, you failed the Exam.";
        }
}