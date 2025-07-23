#include <string.h>

#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

#define DEBUG_MODE 1
#define PRINT(x)                                                               \
  do {                                                                         \
    if (DEBUG_MODE) {                                                          \
      std::cout << x << std::endl;                                             \
    }                                                                          \
  } while (0)

class Solution {
public:
  int maximumUniqueSubarray(vector<int> &nums) { return 0; }
};
int main() {
  Solution *s = new Solution();
  string str = "234Adas";

  //  PRINT(s->isValid(str));

  return 0;
}
