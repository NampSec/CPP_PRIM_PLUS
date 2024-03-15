#include <iostream>
#include <fstream>
#include <cstring>

const int SIZE =  60;
int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;
    cout << "Enter the name of the file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if(!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    inFile >> value;
    while(inFile.good()) // 当遇到eof时或者无法解析的数据
    // 比如无法转化为double类型的value，inFile.good()返回false
    {
        sum += value;
        ++count;
        inFile >> value;
    }
    if (inFile.eof())
    {
        cout << "End of file reached.\n";
    }else if (inFile.fail())
    {
        cout << "Input terminated by data mismatched.\n";
    } else
    {
        cout << "Input terminated by unknown reason.\n";
    }
    if (count == 0)
    {
        cout << "No data processed.\n";
    }
    else
    {
        cout << "Items read " << count << endl;
        cout << "Sum of values " << sum << endl;
        cout << "Average " << sum/count << endl;
    }
    inFile.close();
    return 0;
    
}
