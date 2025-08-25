
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
  vector<int> getRow(int rowIndex) {

    vector<int> dp;
    for (int i = 0; i <= n; i++) {
      vector<int> curr(i + 1, 1);
      for (int j = 1; j < i; j++) {
        curr[j] = dp[j - 1] + dp[j];
      }
      dp = curr;
    }
    return dp;
  }
};


int main() {
  Solution s;
  int n = 3;
  vector<int> res = s.getRow(n);

  std::cout << "Output: ";
  for (int val : res) {
    std::cout << val << " ";
  }
  std::cout << std::endl;
  return 0;
}