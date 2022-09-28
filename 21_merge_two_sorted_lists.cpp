#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* タイトル:		二つ順番があるリストの合併するプログラム
//* プログラム名:	21_merge_two_sorted_lists.cpp
//* 作成者:		    張　健一
//* 作成日:		    2022/09/28
//* リンク:         https://leetcode.cn/problems/merge-two-sorted-lists/
//********************************************************************************

//* Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
 


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

    //　リストが空になたっらもう一個のリストを返す
    if (list1 == NULL) {
        return list2;
    }

    if (list2 == NULL) {
        return list1;
    }

    //　リスト１の値がリスト２の値より小さい場合
    //  リスト１の次のポインタを再帰的に次のnodeに指す
    //  逆の場合は逆で処理する
    if (list1->val <= list2->val) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    else {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}