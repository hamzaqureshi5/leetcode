#include <string.h>

#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_set>
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
  bool isValid(string word) {
    unsigned char v = 0;
    unsigned char c = 0;
    if (word.size() < 3)
      return 0;
    static const std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u',
                                                    'A', 'E', 'I', 'O', 'U'};

    for (unsigned char ch : word) {
      if (std::isdigit(ch))
        continue;
      if (std::isalpha(ch)) {
        vowels.count(ch) ? ++v : ++c;
      } else {
        return false;
      }
    }

    return v > 0 && c >> 0;
  }
};

int main() {
  Solution *s = new Solution();
  string str = "234Adas";

  PRINT(s->isValid(str));

  return 0;
}
