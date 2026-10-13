cmake_minimum_required(VERSION 4.3)
project(dsa)

set(CMAKE_CXX_STANDARD 14)

add_executable(dsa
        easy/lc_TwoSum.cpp
        easy/lc_PalindromeNumber.cpp
        easy/lc_ValidParentheses.cpp
        easy/lc_MergeTwoSortedLists.cpp
        medium/lc_AddTwoNumbers.cpp
)
