//MERGE TWO SORTED LISTS

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if( list1==NULL||list2==NULL){
//             return  list1==NULL? list2 :list1 ;
//         }
//         if(list1->val<=list2->val){
//            list1->next= mergeTwoLists(list1->next,list2);
//             return list1;
//         }
//         else{
//           list2->next=mergeTwoLists(list1,list2->next);
//             return list2;
//         }
//     }
// };

// Reverse Linked List

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* next = NULL;

//         while(curr != NULL) {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
// };

//Middle of Linked List

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };

//  Detect Cycle (True/False)

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if(slow == fast) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };

// Detect Cycle Start Node


// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         bool isCycle = false;

//         // Step 1: Detect cycle
//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) {
//                 isCycle = true;
//                 break;
//             }
//         }

//         // Step 2: If no cycle
//         if (!isCycle) {
//             return NULL;
//         }

//         // Step 3: Find starting node of cycle
//         slow = head;
//         while (slow != fast) {
//             slow = slow->next;
//             fast = fast->next;
//         }

//         return slow;
//     }
// };

//  Remove Cycle from Linked List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         bool isCycle = false;

//         // Step 1: Detect cycle
//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) {
//                 isCycle = true;
//                 break;
//             }
//         }

//         // Step 2: If no cycle
//         if (!isCycle) {
//             return NULL;
//         }

//         // Step 3: Find starting node of cycle
//         slow = head;
//         ListNode* prev = NULL;
//         while (slow != fast) {
//             prev = fast;
//             slow = slow->next;
//             fast = fast->next;
//         }
//         prev->next=NULL;

//         return slow;
//     }
// };