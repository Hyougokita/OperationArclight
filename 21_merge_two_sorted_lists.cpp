#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* �^�C�g��:		����Ԃ����郊�X�g�̍�������v���O����
//* �v���O������:	21_merge_two_sorted_lists.cpp
//* �쐬��:		    ���@����
//* �쐬��:		    2022/09/28
//* �����N:         https://leetcode.cn/problems/merge-two-sorted-lists/
//********************************************************************************

//* Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
 


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

    //�@���X�g����ɂȂ����������̃��X�g��Ԃ�
    if (list1 == NULL) {
        return list2;
    }

    if (list2 == NULL) {
        return list1;
    }

    //�@���X�g�P�̒l�����X�g�Q�̒l��菬�����ꍇ
    //  ���X�g�P�̎��̃|�C���^���ċA�I�Ɏ���node�Ɏw��
    //  �t�̏ꍇ�͋t�ŏ�������
    if (list1->val <= list2->val) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    else {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}