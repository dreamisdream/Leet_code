struct ListNode
{
    /* data */
    int data;
    ListNode *next;
};


ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(n == 1 || !head) return head; // �������������Ȼ��дҲ�У�д��Ϊ�����Ҹо���

        ListNode *prev = NULL, *curr = head; // ����prev��currָ�룬���ڷ�ת����
        while(m > 1)
        {
            prev = curr;
            curr = curr -> next; // ��prev��curr��λ����Ҫ��ת�ĳ�ʼλ��
            m --;
            n --; // �������Ҫ��
        }
        ListNode *before = prev, *after = curr; // ����prevǰ��һλ��curr����һλ��ָ�룬���㷭ת�����������������
        while(n > 0)
        {
            // ��ת�����Ĳ���
            ListNode* nextptr = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextptr;
            n --;
        }
        if(before) before -> next = prev; // ����������������
        else head = prev; // ����������������
        after -> next = curr; // ����������������
        return head;
    }