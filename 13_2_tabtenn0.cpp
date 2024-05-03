// tabtenn0.cp simple base-class methods
#include <iostream>
#include "13_1_tabtenn0.h"

TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht) : firstname(fn), lastname(ln), hasTable(ht)
{
    // empty body
}
void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}