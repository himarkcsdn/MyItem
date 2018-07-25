#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 1000

typedef struct pCON    //定义个人信息结构体
{
	char  name[20];      //姓名
	char  sex[3];      //性别 
	char  age[3];      //年龄
	char  tele[15];    //电话
	char  address[20];   //地址
}pCon;

typedef struct CONTACT     //定义通讯录结构
{
	struct pCON    data[MAX_SIZE];   //最大存储数量
	int size;             //当前容纳数量
}Con;


void Init(Con* pcon);  //初始化
void Insert(Con* pcon); //插入
void Delete(Con* pcon); //删除
void Search(Con* pcon); //查找
void Change(Con* pcon);  //修改
void Show(Con* pcon);   //显示
void Clear(Con* pcon); // 清空
void Sort(Con* pcon); //以名字排序
int Find(Con* pcon, char*  name);//根据姓名找出位置