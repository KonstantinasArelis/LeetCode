#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *temp1, *temp2, *l3, *head;
    int value;
    short carry=0;

    l3 = NULL;
    temp1 = l1;
    temp2 = l2;

    while(temp1 != NULL || temp2 != NULL || carry != 0){
        if(l3 == NULL){
            l3 = (struct ListNode *)malloc(sizeof(struct ListNode));
            head = l3;
            l3->next = NULL;
        }else{
            l3->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            l3 = l3->next;
            l3->next = NULL;
        }

        value = 0;
        if(temp1 != NULL){
            value += temp1->val;
            temp1 = temp1->next;
        }
        if(temp2 != NULL){
            value += temp2->val;
            temp2 = temp2->next;
        }

        if(carry == 1){
            value++;
            carry = 0;
        }

        if(value>9){
            value -= 10;
            carry = 1;
        }

        l3->val = value;
    }

    return head;
}  