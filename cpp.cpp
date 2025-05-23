#include <iostream>
using namespace std;
int main()
{
   class Solution {
       public:
    void printNumber(int value) {
        cin >> value;
        cout << value;
    }
};
Solution a = Solution();
a.printNumber(34);
}