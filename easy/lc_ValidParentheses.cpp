#include <stack>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.length() <=1 ) return false;

        stack<char> storage;

        int count = 0;
        const char* arr = s.c_str();
        for (int i = 0; i < s.size(); i++) {
            if (arr[i] == '(' || arr[i] == '{' || arr[i] == '[') {
                storage.push(arr[i]);
                continue;
            }

            if (storage.empty() || int(arr[i]) != int(storage.top()) + (arr[i] == ')' ? 1 : 2))
                return false;

            storage.pop();
        }

        return storage.empty();
    }
};

