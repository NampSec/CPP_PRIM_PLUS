#include <iostream>

int main()
{
    using namespace std;
    int quizscores[10] = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    cout << "Doing it right:\n";
    for (size_t i = 0; quizscores[i]  == 20; i++)
        cout << "quiz " << i << "is a 20\n";
    return 0;
}