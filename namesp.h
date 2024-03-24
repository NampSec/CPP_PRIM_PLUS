#include <string>

namespace pers
{
    struct Person
    {
        std::string fname;
        std::string lname;
    };
    void getPerson(Person &p);
    void showPerson(const Person &p);
} // namespace pers

namespace debts
{
    using namespace pers;
    struct Debt
    {
        Person name;
        double amount;
    };
    void getDebt(Debt &d);
    void showDebt(const Debt &d);
    double sumDebts(const Debt ar[], int n);
} // namespace debts
