// 输入：nums = [1,1,2]
// 输出：2, nums = [1, 2, _]
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* タイトル:		ソードした行列の重複した要素を削除するプログラム
//* プログラム名:	remove-duplicates-from-sorted-array.cpp
//* 作成者:		    張　健一
//* 作成日:		    2022/10/13
//* リンク:         https://leetcode.cn/problems/remove-duplicates-from-sorted-array/
//********************************************************************************
int removeDuplicates(int* nums, int numsSize) {
    //　要素がないなら
    if (numsSize == 0) {
        return 0;
    }
    //　速いと遅いポインタを宣言する
    int slow = 0, fast = 0;
    //　速い方の数値が遅い方と同じ場合　後ろにいく
    while (fast < numsSize) {
        if (nums[slow] == nums[fast]) {
            fast++;
        }
        //　違い場合　遅い方を一個後ろにずれて速い方の数値を複製する
        else {
            slow++;
            nums[slow] = nums[fast];
        }
    }
    return slow + 1;
}