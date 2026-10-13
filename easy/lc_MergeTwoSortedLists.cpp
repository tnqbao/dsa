#include <iostream>
using namespace std;

struct ListNode {
  int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* MergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode result;
        ListNode *target = &result;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                target->next = list1;
                list1=list1->next;
                target=target->next;
                continue;
            }

            target->next=list2;
            list2=list2->next;
            target=target->next;
        }

        if (list1 != nullptr) target->next=list1;
        if (list2 != nullptr) target->next=list2;

        return result.next;
    }
};