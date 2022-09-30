#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* タイトル:		二つ順番があるリストの合併するプログラム
//* プログラム名:	203_remove_linked_list_elements.cpp
//* 作成者:		    張　健一
//* 作成日:		    2022/09/28
//* リンク:         https://leetcode.cn/problems/remove-linked-list-elements/submissions/
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