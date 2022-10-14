#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* �^�C�g��:		�s��Ɏw�肵�����l�Əd�������l�����
//* �v���O������:	27_remove-element.cpp
//* �쐬��:		    ���@����
//* �쐬��:		    2022/10/15
//* �����N:         https://leetcode.cn/problems/remove-element/
//********************************************************************************

int removeElement(int* nums, int numsSize, int val) {
    //�@�����ƒx���|�C���^��錾����
    int slow = 0, fast = numsSize - 1;
    int count = 0;
    while (slow <= fast) {
        // ���̃|�C���^���w�肵���l��T�����Ƃ�
        if (nums[slow] == val) {
            //�@�E�̃|�C���^���w�肵���l�ƈႤ�ꍇ
            if (nums[fast] != val) {
                //�@���̃|�C���^�ɐ��l���R�s�[����
                nums[slow] = nums[fast];
                count++;
                slow++;
                fast--;
            }
            //�@��������Ȃ��ƈႤ�l��T���܂ō��ֈړ�����
            else {
                fast--;
                count++;
            }
        }
        //�@�w�肵���l��T���܂ŉE�ֈړ�����
        else {
            slow++;
        }
    }
    return (numsSize - count);
}