// tabtenn0.h -- a table-tennis base class
// #ifndef __TABTENN0_H__
// #define __TABTENN0_H__
#pragma once
#include <string>
using std::string;
// simple base class
class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string & fn = "none", const string & ln = "none", bool ht = false);
    void Name() const;
    bool HasTable() const { return hasTable; };
    void ResetTable(bool v){hasTable = v;};
};

// #endif