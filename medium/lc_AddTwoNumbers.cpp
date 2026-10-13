

struct ListNode {
    int val;ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode result;
        ListNode* target = &result;
        int borrow = 0;

        while (l1 != nullptr || l2 != nullptr || borrow != 0) {
            int sum = borrow;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            borrow = sum / 10;

            ListNode* newNode = new ListNode(sum % 10);
            target->next = newNode;
            target = target->next;
        }

        return result.next;
    }
};
