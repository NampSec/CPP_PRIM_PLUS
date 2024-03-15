#include <iostream>

void showMenu(void);

void choice_t(void);
int main()
{
    using namespace std;
    char choice;
    showMenu();
    do
    {
		cin >> choice;
        switch (choice)
        {
        case 't':
            choice_t();
        case 'c':
        case 'p':
        case 'g':
        default:
            cout << "Please enter a c, p, t, or g: ";
            break;
        }
    } while (choice != 'q');
    
    return 0;
}

void showMenu(void)
{
    std::cout << "Please enter one of the following choices:\n"
            << "c) carnivore    p) pianist\n"
            << "t) tree         g) game\n";
}
void choice_t(void)
{
    std::cout << "A maple is a tree.\n";
}
