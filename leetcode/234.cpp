// class Solution {
// public:

//     // Find middle node
//     ListNode* middleNode(ListNode* head)
//     {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while (fast != NULL && fast->next != NULL)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         return slow;
//     }

//     // Reverse linked list
//     ListNode* reverseList(ListNode* head)
//     {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* next = NULL;

//         while (curr != NULL)
//         {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }

//         return prev;
//     }

//     bool isPalindrome(ListNode* head)
//     {
//         // Empty list ya single node
//         if (head == NULL || head->next == NULL)
//             return true;

//         // Step 1: Find middle
//         ListNode* mid = middleNode(head);

//         // Step 2: Reverse second half
//         ListNode* second = reverseList(mid);

//         // Step 3: Compare first half and reversed second half
//         ListNode* first = head;

//         while (second != NULL)
//         {
//             if (first->val != second->val)
//             {
//                 return false;
//             }

//             first = first->next;
//             second = second->next;
//         }

//         return true;
//     }
// };