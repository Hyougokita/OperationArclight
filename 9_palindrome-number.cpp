#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* タイトル:		前から読んでも後ろから読んでも同じ数字かどうかを判断する
//* プログラム名:	09_palindrome-number.cpp
//* 作成者:		    張　健一
//* 作成日:		    2022/10/17
//* リンク:         https://leetcode.cn/problems/palindrome-number/
//********************************************************************************

bool isPalindrome(int x) {
    //　負数なら絶対回文数じゃない
    if (x < 0) {
        return false;
    }
    //　範囲は2^-31<x<x^31なので
    char a[11];
    //　数値から文字列に変換する
    sprintf(a, "%d", x);
    //　ダブルポインタで比較する
    int slow = 0, fast = strlen(a) - 1;
    while (slow < fast) {
        if (a[slow] != a[fast]) {
            return false;
        }
        slow++;
        fast--;
    }
    return true;
}