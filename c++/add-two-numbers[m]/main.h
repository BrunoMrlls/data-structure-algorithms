
#ifndef DATA_STRUCTURE_ALGORITHMS_MAIN_H
#define DATA_STRUCTURE_ALGORITHMS_MAIN_H

#include <iostream>

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#endif //DATA_STRUCTURE_ALGORITHMS_MAIN_H
