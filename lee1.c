/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
struct ListNode* temp=list1;
struct ListNode* temp1;
struct ListNode* temp2;
struct ListNode* head;
if(list1==NULL&&list2!=NULL)
return list2;
else if(list2==NULL&&list1!=NULL)
return list1;
else if(list1==NULL&&list2==NULL)
return NULL;
else{
	while(list1->next!=NULL){
		list1=list1->next;
	}
	list1->next=list2;
head=temp;
	int swap;
		for(temp1=temp;temp1->next!=NULL;temp1=temp1->next){
			for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next){
				if(temp1->val>temp2->val){
				swap=temp1->val;
				temp1->val=temp2->val;
				temp2->val=swap;
				}
			}
		}

        return head;}
}
