class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) 
            return NULL;
        ListNode *startA=headA;
        ListNode *startB=headB;
        int a=0,b=0;
        while(startA){
            a++;
            startA=startA->next;
        }
        while(startB){
            b++;
            startB=startB->next;
        }
        if(a<b)
            return getAns(headA,headB,a,b);
        else
            return getAns(headB,headA,b,a);
    }
    ListNode *getAns(ListNode *headA, ListNode *headB, int a, int b) {
        for(int i=1;i<=b-a;i++)
        headB=headB->next;
        while(headA && headB){
            if(headA == headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};
