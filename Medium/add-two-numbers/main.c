#include <stdlib.h>
#include <stdio.h>

struct ListNode {
     int val;
     struct ListNode *next;
};
 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *result = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *head = result;
    short carry = 0;

    result->next = NULL;
    result->val=0;

    if(l1->next == NULL && l2->next == NULL){
        result->val = l1->val+l2->val;
        if(result->val > 9){
            result->val -= 10;
            result->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            result = result->next;
            result->next = NULL;
            result->val = 1;
        }
        return head;
    }
    
    while(l1 != NULL || l2 != NULL){
        if(l1 != NULL){
            result->val += l1->val;
            l1 = l1->next;
        }
        if(l2 != NULL){
            result->val += l2->val;
            l2=l2->next;
        }

        if(carry == 1){
            result->val++;
            carry = 0;
        }

        if(result->val > 9){
            result->val -= 10;
            carry = 1;
        }
        printf("%d,",result->val);
        if(l1 != NULL || l2 != NULL){
            result->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            result = result->next;
            result->val=0;
        }
        
    }

    while(carry == 1){
        if(carry == 1){
            result->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            result = result->next;
            result->val=0;

            result->val++;
            carry = 0;
        }

        if(result->val > 9){
            result->val -= 10;
            carry = 1;
        } 

    }
    

    result->next = NULL;
    return head;
}