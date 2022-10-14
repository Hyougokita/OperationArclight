#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* タイトル:		行列に指定した数値と重複した値を削る
//* プログラム名:	27_remove-element.cpp
//* 作成者:		    張　健一
//* 作成日:		    2022/10/15
//* リンク:         https://leetcode.cn/problems/remove-element/
//********************************************************************************

int removeElement(int* nums, int numsSize, int val) {
    //　早いと遅いポインタを宣言する
    int slow = 0, fast = numsSize - 1;
    int count = 0;
    while (slow <= fast) {
        // 左のポインタが指定した値を探したとき
        if (nums[slow] == val) {
            //　右のポインタが指定した値と違う場合
            if (nums[fast] != val) {
                //　左のポインタに数値をコピーする
                nums[slow] = nums[fast];
                count++;
                slow++;
                fast--;
            }
            //　そうじゃないと違う値を探すまで左へ移動する
            else {
                fast--;
                count++;
            }
        }
        //　指定した値を探すまで右へ移動する
        else {
            slow++;
        }
    }
    return (numsSize - count);
}