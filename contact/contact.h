#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 1000

typedef struct pCON    //���������Ϣ�ṹ��
{
	char  name[20];      //����
	char  sex[3];      //�Ա� 
	char  age[3];      //����
	char  tele[15];    //�绰
	char  address[20];   //��ַ
}pCon;

typedef struct CONTACT     //����ͨѶ¼�ṹ
{
	struct pCON    data[MAX_SIZE];   //���洢����
	int size;             //��ǰ��������
}Con;


void Init(Con* pcon);  //��ʼ��
void Insert(Con* pcon); //����
void Delete(Con* pcon); //ɾ��
void Search(Con* pcon); //����
void Change(Con* pcon);  //�޸�
void Show(Con* pcon);   //��ʾ
void Clear(Con* pcon); // ���
void Sort(Con* pcon); //����������
int Find(Con* pcon, char*  name);//���������ҳ�λ��