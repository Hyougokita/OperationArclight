#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* タイトル:		文字列を逆転するプログラム
//* プログラム名:	344_reverse_string.cpp
//* 作成者:		    張　健一
//* 作成日:		    2022/09/28
//* リンク:         https://leetcode.cn/problems/reverse-string/
//********************************************************************************

//ダブルポインタの再帰関数
void swap(char* a, char* b) {
    //　左のポインタが右のポインタより大きい場合　終了
    if (a >= b) {
        return;
    }
    //  再帰的に交換する
    else {
        char temp = *a;
        *a = *b;
        *b = temp;
        swap(a + 1, b - 1);
    }
}

//  文字がない場合終了
void reverseString(char* s, int sSize) {
    if (sSize == 0) {
        return;
    }
    //　初期状態は頭と末尾の交換
    swap(s, (s + sSize) - 1);
}