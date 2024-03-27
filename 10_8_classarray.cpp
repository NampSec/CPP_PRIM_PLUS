#include "10_7_stock20.h"

const int STKS = 4;
Stock stocks[STKS] = {
    Stock("NanoSmart", 12, 20.0),
    Stock("Boffo Objects", 200, 2.0),
    Stock("Monolithic Obelisks", 130, 3.25),
    Stock("Fleep Enterprises", 60, 6.5)
};
Stock stocks2[STKS] = {
    Stock("NanoSmart", 12, 20.0),
    Stock(),
    Stock("Monolithic Obelisks", 130, 3.25),
};