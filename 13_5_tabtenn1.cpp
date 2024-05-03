// tabtenn1.cpp -- simple base class
#include "13_4_tabtenn1.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht)
    : firstname(fn), lastname(ln), hasTable(ht)
{
    // empty body
}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}

// RatedPlayer class
RatedPlayer::RatedPlayer(unsigned int r, const string & fn, const string & ln, bool ht)
    : TableTennisPlayer(fn, ln, ht), rating(r)
{
    // empty body
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp)
    : TableTennisPlayer(tp), rating(r)
{
    // empty body
}