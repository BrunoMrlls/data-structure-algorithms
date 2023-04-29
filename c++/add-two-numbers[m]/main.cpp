#include "main.h"

using namespace std;

ListNode* addTwoNumber(ListNode* n1, ListNode* n2);

int main() {
    https://leetcode.com/problems/add-two-numbers/
    ListNode* node1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* node2 = new ListNode(5, new ListNode(6, new ListNode(4)));
    //output  342 + 465 = 807 = [7,0,8]
    cout << addTwoNumber(node1, node2) << endl;
}

ListNode* addTwoNumber(ListNode* n1, ListNode* n2) {
    auto* ans = new ListNode();
    ListNode* tmp = ans;
    int sobeUm = 0;
    while (n1 != nullptr || n2 != nullptr || sobeUm) {
        int soma = 0;
        if (n1 != nullptr) {
            soma += n1->val;
            n1 = n1->next;
        }
        if (n2 != nullptr) {
            soma += n2->val;
            n2 = n2->next;
        }
        soma+=sobeUm;
        sobeUm = soma / 10;
        auto* current = new ListNode(soma%10);
        tmp->next = current;
        tmp = tmp->next;
    }
    return ans->next;
}
