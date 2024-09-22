// Author: Georgio Zoughby



struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
	public:
		ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
			ListNode* dummy = new ListNode();  
			ListNode* temp = dummy;            
			int trailing = 0;

			while (l1 != nullptr || l2 != nullptr || trailing != 0) {
				int sum = trailing;

				if (l1 != nullptr) {
					sum += l1->val;
					l1 = l1->next;
				}

				if (l2 != nullptr) {
					sum += l2->val;
					l2 = l2->next;
				}

				temp->next = new ListNode(sum % 10);
				temp = temp->next;

				trailing = sum / 10;
			}

			return dummy->next;
		}
};

