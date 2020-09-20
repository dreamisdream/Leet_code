struct ListNode
{
    /* data */
    int data;
    ListNode *next;
};


ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(n == 1 || !head) return head; // 特殊情况处理（当然不写也行，写是为了找找感觉）

        ListNode *prev = NULL, *curr = head; // 定义prev和curr指针，用于翻转链表
        while(m > 1)
        {
            prev = curr;
            curr = curr -> next; // 将prev与curr定位到需要翻转的初始位置
            m --;
            n --; // 这里很重要！
        }
        ListNode *before = prev, *after = curr; // 定义prev前面一位和curr后面一位的指针，方便翻转完链表后重新连起来
        while(n > 0)
        {
            // 翻转链表四步大法
            ListNode* nextptr = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextptr;
            n --;
        }
        if(before) before -> next = prev; // 将链表重新连起来
        else head = prev; // 将链表重新连起来
        after -> next = curr; // 将链表重新连起来
        return head;
    }