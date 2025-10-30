#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> res(n, 0); // vector of size n initialized with 0
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> result = sol.getNoZeroIntegers(5);

    cout << "Vector: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
