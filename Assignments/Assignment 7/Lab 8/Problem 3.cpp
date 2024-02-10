#include <iostream>
using namespace std;

class Student
{
    private:
    float gpa;
    string name;
    int age;
    bool stats;

    public:
    Student(string a, float b, int c);

    void setGPA(float x);
    float getGPA();
    bool status();
    void message(float b);
};
Student::Student(string a, float b, int c)
{
    name = a; gpa = b; age = c;
}
float Student::getGPA ()
{
    return gpa;
}
void Student::setGPA(float x)
{
    gpa = x;
}
bool Student::status()
{
    if (gpa > 3.41)
    {
        return true;
    }
    else return false;
}

void Student::message(float b)
{
    if (status() == true)
    {
        cout << "Congratulations "<< name << " ("<< age <<")"<< " You Are An Honors Student! ";
    }
    else cout << "Unlucky "<< name << " ("<< age <<")"<< " You Are Not An Honors Student. ";
}

int main ()
{

    // this part is bonus if we want the user to input the number of students
    // needed and each student's personal information with their message


    /*
    int stnum;
    string name;
    float gpa;
    int age;

    cout << "Enter number of students needed: ";
    cin >> stnum;


    for (int i = 0; i < stnum; i++)
    {
        cout << "Enter Student "<< i+1 << "'s Name: ";
        cin >> name;
        cout << "Enter Student "<< i+1 << "'s GPA: ";
        cin >> gpa;
        cout << "Enter Student "<< i+1 << "'s Age: ";
        cin >> age;
        cout << endl;

        Student s(name, gpa, age);
        s.message(gpa);
    }
    */

    Student s("John", 3.9, 18);

    s.message(3.9);

    cout << endl;

    s.setGPA(3.1);

    cout << s.getGPA()<< endl;

    s.message(s.getGPA());

    return 0;
}