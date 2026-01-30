#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> sumZero(int n)
    {
        std::vector<int> res; // result
        int pair = n / 2;
        for (size_t i = 1; i <= pair; i++)
        {
            res.push_back(i);
            res.push_back(-i);
        }

        if (n % 2 == 1)
        {
            res.push_back(0);
        }

        return res;
    }
};

int main()
{
    Solution s;

    std::vector<int> result = s.sumZero(5);

    for (size_t i = 0; i < result.size(); i++)
    {
        std::cout << result.at(i) << std::endl;
    }

    return 0;
}
