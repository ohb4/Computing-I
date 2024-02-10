#include <iostream>

using namespace std;

class Course{
    private:
    int quiz1, quiz2;
    int mid1, mid2, mid3;
    int finl;

    public:
    float total;
    Course(int quiz1, int quiz2, int mid1, int mid2, int mid3,int finl);
    void setQuizzes(int , int );
    void setMidterms(int , int, int );
    void setFinal(int);
    float Calculation();
    string LetterGrade();
};

Course::Course (int qz1, int qz2, int md1, int md2, int md3,int fnl)
{
    quiz1 = qz1; quiz2 = qz2; mid1 = md1; mid2 = md2; mid3 = md3; finl = fnl;
}
void Course::setQuizzes(int value1, int value2)
{
    cout << "Enter quiz 1 Score (out of 15): ";
    cin >> value1;
    cout << "Enter quiz 2 Score (out of 15): ";
    cin >> value2;

    quiz1 = value1; quiz2 = value2;
}
void Course::setMidterms(int value1, int value2, int value3)
{
    cout << "Enter midterm 1 Score (out of 10): ";
    cin >> value1;
    cout << "Enter midterm 2 Score (out of 10): ";
    cin >> value2;
    cout << "Enter midterm 3 Score (out of 10): ";
    cin >> value3;

    mid1 = value1; mid2 = value2; mid3 = value3;
}
void Course::setFinal(int value)
{
    cout << "Enter Final Score (out of 50): ";
    cin >> value;

    finl = value;
}
float Course::Calculation()
{
    total = quiz1+quiz2+mid1+mid2+mid3+finl;
    return (total/110)*100;
}

string Course::LetterGrade()
{
    if (Calculation() >= 92)
    {
        return "A";
    }
    else if (Calculation() < 92 && Calculation() >= 85)
    {
        return "A-";
    }
    else if (Calculation() < 85 && Calculation() >= 80)
    {
        return "B+";
    }
    else if (Calculation() < 80 && Calculation() >= 75)
    {
        return "B";
    }
    else if (Calculation() < 75 && Calculation() >= 70)
    {
        return "B-";
    }
    else if (Calculation() < 70 && Calculation() >= 64)
    {
        return "C";
    }
    else if (Calculation() < 64 && Calculation() >= 59)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}

int main()
{
    Course C(0,0,0,0,0,0);

    C.setQuizzes(0,0);
    C.setMidterms(0,0,0);
    C.setFinal(0);

    cout << endl;

    cout << "Your Total Percentage is "<< C.Calculation() << "%" << endl;

    cout << "Your Letter Grade is ";
    cout << C.LetterGrade();

}