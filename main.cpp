/*******************************************************************************
* タイトル:		メインプログラム
* プログラム名:	main.cpp
* 作成者:		張　健一
* 作成日:		2022/09/28
********************************************************************************

/*******************************************************************************
* scanf のwarning防止
*******************************************************************************/
#define _CRT_SECURE_NO_WARNINGS

/*******************************************************************************
* インクルードファイル
*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <Windows.h>


int main( int argc, char *argv[] )
{	
	
	// キー入力待ち
	rewind(stdin);
	(void)_getch();
	
	/* 終了 */
	return 0;
}
