// use_stuc.cpp -- using a composite class
// compile with studentc.cpp

#include <iostream>
#include "14_1_studentc.hpp"
using std::cin;
using std::cout;
using std::endl;

void set(Student & sa, int n);
const int pupils = 3;
const int quizzes = 5;

int main()
{
    Student ada[pupils] = {
        Student(quizzes),
        Student(quizzes),
        Student(quizzes),
    };
    int i;
    for (i = 0; i < pupils; ++i)
    {
        set(ada[i], quizzes);
    }
    cout << "\nStudent List:\n";
    for (i = 0; i < pupils; ++i)
    {
        cout << ada[i].Name() << endl;
    }
    cout << "\nResults:\n";
    for (i = 0; i < pupils; ++i)
    {
        cout << ada[i].Name() << ": " << ada[i].Average() << endl;
    }
    cout << "Done.\n";
    return 0;
}

void set(Student & sa, int n)
{
    cout << "Please enter the student's name: ";
    getline(cin, sa);
    cout << "Please enter " << n << " quiz scores:\n";
    for (int i = 0; i < n; )
    {
        if (cin >> sa[i])
        {
            ++i;
        }
        else
        {
            cin.clear();
            cin.ignore();
            // 忽略错误的输入直到换行符
            // 作用类似于清空输入缓冲区
            cout << "Bad input; Please enter a number: ";
        }
    }
    while (cin.get() != '\n')
        continue;
}
