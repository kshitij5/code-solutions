#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* revll(ListNode* head, int k, int cnt) {
        if (cnt < k)
            return head;

        ListNode* prev = NULL, * current = head, * next = NULL;
        int count = 0;
        while (current != NULL and count < k) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
        }

        if (next != NULL)
            head->next = revll(next, k, cnt - k);

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k == 1 || head == NULL)
            return head;

        ListNode* tmp = head;
        int count = 0;
        while (tmp != NULL) {
            count++;
            tmp = tmp->next;
        }

        return revll(head, k, count);
    }
};