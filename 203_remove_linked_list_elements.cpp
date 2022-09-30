#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* �^�C�g��:		����Ԃ����郊�X�g�̍�������v���O����
//* �v���O������:	203_remove_linked_list_elements.cpp
//* �쐬��:		    ���@����
//* �쐬��:		    2022/09/28
//* �����N:         https://leetcode.cn/problems/remove-linked-list-elements/submissions/
//********************************************************************************




//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};



struct ListNode* removeElements(struct ListNode* head, int val) {
    if (head == NULL) {
        return head;
    }
    else {
        head->next = removeElements(head->next, val);
        return head->val == val ? head->next : head;
    }

}