#include <vector>
#include <iostream>
using namespace std;

void print(std::vector<std::vector<int>> &matrix);
void print(std::vector<int> &matrix);

class Solution
{
public:
    vector<int> spiralOrderFF(vector<vector<int>> &matrix)
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
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int x = 0;
        int y = 0;
        int dx = 0;
        int dy = 1;
        std::vector<int> result;
        for (size_t i = 0; i < rows * cols; i++)
        {
            result.push_back(matrix[y][x]);
            std::cout << "i: " << i << " r: " << x << " c: " << y << " M: " << matrix[x][y] << std::endl;
            matrix[y][x] = -1;

            // if (!(0 <= x + dx) && (x + dx < cols) && (0 <= y + dy) && (y + dy < rows) || matrix[y + dy][x + dx] == -1)
            // {
            //     int temp = dx;
            //     dx = -dy;
            //     dy = temp;
            // }

            if (!(0 <= x) && (x < cols) && (0 <= y) && (y < rows) || matrix[y + 1][x + 1] == -1)
            {
            }
        }
        return result;
    }
};

int main()
{
    Solution s;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
        //    {7, 8, 9}
    };

    vector<int> result = s.spiralOrder(matrix);

    print(matrix);
    print(result);
    return 0;
}

// Function to print a 2D vector(the function you provided)
void print(std::vector<std::vector<int>> &matrix)
{
    int rows = matrix.size();
    if (rows == 0)
    {
        std::cout << "==============PRINT===============" << std::endl;
        std::cout << "Matrix is empty." << std::endl;
        std::cout << "==================================" << std::endl;
        return;
    }
    int cols = matrix[0].size();
    std::cout << "==============PRINT 2D===============" << std::endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << matrix[i][j] << std::string(4, ' ');
        }
        std::cout << std::endl;
    }
    std::cout << "==================================" << std::endl;
}

// Overloaded function to print a 1D vector
void print(std::vector<int> &vec)
{
    std::cout << "==============PRINT 1D===============" << std::endl;
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << std::string(4, ' ');
    }
    std::cout << std::endl;
    std::cout << "==================================" << std::endl;
}
