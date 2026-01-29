#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int findClosest(int x, int y, int z)
    {
        int d1 = std::abs(x - z);
        int d2 = std::abs(y - z);
        if (d1 < d2)
            return 1;
        if (d1 > d2)
            return 2;
        else
            return 0;
    }
};

void print(std::vector<std::vector<int>> &matrix);
void print(std::vector<int> &matrix);

int main()
{
    Solution s;

    int result = s.findClosest(2, 7, 4);
    std::cout << result << std::endl;
    return 0;
}
