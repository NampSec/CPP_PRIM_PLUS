#include <iostream>
#include "namesp.h"

namespace pers
{
    using std::cout;
    using std::cin;
    void getPerson(Person &p) {
        cout << "Enter last name: ";
        cin >> p.lname;
        cout << "Enter first name: ";
        cin >> p.fname;
    } // 补充名称空间函数定义
    void showPerson(const Person &rp)
    {
        cout << rp.fname << ", " << rp.lname;
    }
} // namespace pers {

namespace debts
{
    void getDebt(Debt &rd)
    {
        getPerson(rd.name);
        std::cout << "Enter debt: ";
        std::cin >> rd.amount;
    }
    void showDebt(const Debt &rd)
    {
        showPerson(rd.name);
        std::cout << ": $" << rd.amount << std::endl;
    }
    double sumDebts(const Debt arr[], int n)
    {
        double total = 0;
        for (int i = 0; i < n; i++)
            total += arr[i].amount;
        return total;
    }
}
