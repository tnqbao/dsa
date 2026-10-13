#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; 
        string rev = (to_string(x));
        reverse(rev.begin(), rev.end());
        if (rev != string(to_string(x))) return false;
        return true;
    }
};