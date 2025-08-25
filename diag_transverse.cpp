#include <iostream>
#include <vector>
using namespace std;

#define DEBUG_MODE 1
#define PRINT(x)                                                               \
  do {                                                                         \
    if (DEBUG_MODE) {                                                          \
      std::cout << x << std::endl;                                             \
    }                                                                          \
  } while (0)

class Solution {
public:
  vector<int> findDiagonalOrder(vector<vector<int>> &mat) {
    if (mat.empty() || mat[0].empty())
      return {};
    int m = mat.size();
    int n = mat[0].size();
    PRINT("Mat Size: " << m << " " << n);
    vector<int> result(m * n);

    int row = 0;
    int col = 0;
    for (int i = 0; i < m * n; i++) {
      result[i] = mat[row][col]; // For First element
      if ((row + col) % 2 == 0) {
        PRINT("UPPPPP! " << row << " " << col);
        if (col == n - 1) {
          row++;
        } else if (row == 0) {
          col++;
        } else {
          row--;
          col++;
        }

      } else {
        PRINT("NO UPP! " << row << " " << col);
        if (row == m - 1) {
          col++;
        } else if (col == 0) {
          row++;
        } else {
          row++;
          col--;
        }
      }
    }
    return result;
  }
};

int main() {
  Solution sol;
  vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector<int> res = sol.findDiagonalOrder(mat);

  std::cout << "Output: ";
  for (int val : res) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  return 0;
}
