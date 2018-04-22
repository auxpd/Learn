#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
//#include <conio.h>
//#include <windows.h> 
//#include "stdafx.h" 

#define LEN sizeof(struct student)
#define DEBUG

/*
 * 学生信息结构体
 */
struct student{
	int number;				//学号
	char name[10];			//姓名
	int count;				//金额
	struct student *next;
};




