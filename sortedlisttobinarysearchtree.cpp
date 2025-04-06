#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
   
    int getSize(ListNode* head) {
        int size = 0;
        while (head != nullptr) {
            size++;
            head = head->next;
        }
        return size;
    }

   
    TreeNode* sortedListToBSTHelper(ListNode*& head, int size) {
        if (size <= 0) {
            return nullptr;
        }

       
        TreeNode* left = sortedListToBSTHelper(head, size / 2);

      
        TreeNode* root = new TreeNode(head->val);
        root->left = left;

       
        head = head->next;

       
        root->right = sortedListToBSTHelper(head, size - size / 2 - 1);

        return root;
    }

    
    TreeNode* sortedListToBST(ListNode* head) {
        int size = getSize(head);
        return sortedListToBSTHelper(head, size);
    }

    
    void inorder(TreeNode* root) {
        if (root == nullptr) return;
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
};

int main() {
   
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next->next = new ListNode(7);


    Solution sol;
    TreeNode* root = sol.sortedListToBST(head);

    
    sol.inorder(root);  // Output: 1 2 3 4 5 6 7

     return 0;
}
