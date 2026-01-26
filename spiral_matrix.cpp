#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
    }
};

class SolutionOEM
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int x = 0;
        int y = 0;
        int dx = 1;
        int dy = 0;
        vector<int> res;

        for (int i = 0; i < rows * cols; i++)
        {
            res.push_back(matrix[y][x]);
            matrix[y][x] = -101;

            if (!(0 <= x + dx && x + dx < cols && 0 <= y + dy && y + dy < rows) || matrix[y + dy][x + dx] == -101)
            {
                int temp = dx;
                dx = -dy;
                dy = temp;
            }

            x += dx;
            y += dy;
        }

        return res;
    }
};
void print(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << matrix[i][j] << std::string(4, ' ');
        }
        std::cout << std::endl;
    }
}
int main()
{
    SolutionOEM s;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    //vector<int> result = s.spiralOrder(matrix);



    print(matrix);
    return 0;
}
