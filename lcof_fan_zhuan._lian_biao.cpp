
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* �^�C�g��:		���X�N����]����v���O����
//* �v���O������:	lcof_fan_zhuan_lian_biao.cpp
//* �쐬��:		    ���@����
//* �쐬��:		    2022/10/01
//* �����N:         https://leetcode.cn/problems/fan-zhuan-lian-biao-lcof/solution/fan-zhuan-lian-biao-by-leetcode-solution-jvs5/
//********************************************************************************



//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};



struct ListNode* reverseList(struct ListNode* head){
    //�@�I������
    if(head == NULL || head->next == NULL){
        return head;
    }
    // �ċA����
    struct ListNode* newHead = reverseList(head->next);
    // ����node�������Ɏw��
    head->next->next = head;
    // �������k���Ɏw��
    head->next = NULL;
    return newHead;
}