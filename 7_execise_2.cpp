#include <iostream>

const int ARR_SIZE = 10;

int average(int arr_input[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr_input[i];
    }
    return sum / size;    
}

void showsocres(int arr_input[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr_input[i] << " ";
    }
    std::cout << std::endl;
}

int inputscores(int arr_input[])
{
    int score;
    std::cout << "Enter score (max 10): ";
    for (int i = 0; i < ARR_SIZE; i++)
    {
        std::cin >> score;
        if (score <= 0)
        {
            arr_input[i] = 0;
            return i;
        }
        else
        {
            arr_input[i] = score;
        }
        
    }
    return ARR_SIZE;
}

int main()
{
    using namespace std;
    int arr_input[ARR_SIZE];
    int num_of_scores = inputscores(arr_input);
    cout << "Average score: " << average(arr_input, num_of_scores) << endl;
    showsocres(arr_input, num_of_scores);
    return 0;
}