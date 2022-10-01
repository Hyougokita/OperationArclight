
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* タイトル:		リスクを回転するプログラム
//* プログラム名:	lcof_fan_zhuan_lian_biao.cpp
//* 作成者:		    張　健一
//* 作成日:		    2022/10/01
//* リンク:         https://leetcode.cn/problems/fan-zhuan-lian-biao-lcof/solution/fan-zhuan-lian-biao-by-leetcode-solution-jvs5/
//********************************************************************************



//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};



struct ListNode* reverseList(struct ListNode* head){
    //　終了条件
    if(head == NULL || head->next == NULL){
        return head;
    }
    // 再帰条件
    struct ListNode* newHead = reverseList(head->next);
    // 次のnodeを自分に指す
    head->next->next = head;
    // 自分をヌルに指す
    head->next = NULL;
    return newHead;
}