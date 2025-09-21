#include <iostream>
#include <vector>
using namespace std;
int findLastDigit(long long base, long long power)
{
    if (power == 0) return 1;
    if (base == 0) return 0;
    int lastDigit = base % 10;

    vector<int> cycle;
    int current = lastDigit;
    do
    {
        cycle.push_back(current);
        current = (current * lastDigit) % 10;
    }
    while (current != cycle[0]);

    int cycleLength = cycle.size();
    int position = (power % cycleLength == 0) ? cycleLength - 1 : (power % cycleLength) - 1;
    return cycle[position];
}

int main()
{
    long long base, power;
    while(1)
    {
        cin>>base>>power;
        int result = findLastDigit(base, power);
        cout <<result<<endl;
    }
}
