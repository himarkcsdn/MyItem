#include"contact.h"

void Init(Con* pcon)  //��ʼ��
{
	if (pcon == NULL)
	{
		printf("�Ƿ�����\n");
		return;
	}
	pcon->size = 0;
}

void Insert(Con* pcon)//����
{
	if (pcon->size==MAX_SIZE)
	{
		printf("ͨѶ¼�������޷����룡\n");
		return;
	}
	printf("������������");
	scanf("%s", (pcon->data[pcon->size]).name);
	printf("�������Ա�");
	scanf("%s", (pcon->data[pcon->size]).sex);
	printf("���������䣺");
	scanf("%s", (pcon->data[pcon->size]).age);
	printf("������绰��");
	scanf("%s", (pcon->data[pcon->size]).tele);
	printf("�������ַ��");
	scanf("%s", (pcon->data[pcon->size]).address);
	pcon->size++;
}

int Find(Con* pcon, char* name)  //�����������ҳ�λ��
{
	int i = 0;
	for (i = 0; i < pcon->size; i++)
	{
		if (strcmp(name, pcon->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}


void Delete(Con* pcon ) //ɾ��
{
	char name[20];
	int i = 0;
	int ret = 0;
	printf("������Ҫɾ����������");
	scanf("%s", name);
	ret = Find(pcon, name);
	if (ret != -1)
	{
		for (i = ret; i < pcon->size; i++)
		{
			pcon->data[ret] = pcon->data[ret + 1];

		}
		pcon->size--;
		printf("�ɹ�ɾ����\n");
	}
	else
	{
		printf("ɾ��ʧ����Ϣ�����ڣ�\n");
	}
}
void Search(Con* pcon)  //����
{
	char name[20];
	int ret = 0;
	int i = 0;
	if (pcon->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
		return;
	}
	printf("������Ҫ���ҵ�������");
	scanf("%s", name);
	ret = Find(pcon, name);
	if (ret != -1)
	{
			printf("������ %s  �Ա�%s   ���䣺 %s  �绰�� %s   ��ַ��%s \n",
				(pcon->data[pcon->size]).name, (pcon->data[pcon->size]).sex,
				(pcon->data[pcon->size]).age, (pcon->data[pcon->size]).tele,
				(pcon->data[pcon->size]).address
				);
	}
	else
	{
		printf("����ʧ�ܣ�δ�ҵ�����Ϣ\n");
	}

}
void Change(Con* pcon)   //�޸�
{
	char name[20];
	int i = 0;
	int ret = 0;
	printf("��������ϵ��������\n");
	scanf("%s", name);
	ret = Find(pcon, name);
	if (ret != -1)
	{
		printf("�������޸ĺ��������");
		scanf("%s", (pcon->data[pcon->size]).name);
		printf("�������޸ĺ���Ա�");
		scanf("%s", (pcon->data[pcon->size]).sex);
		printf("�������޸ĺ�����䣺");
		scanf("%s", (pcon->data[pcon->size]).age);
		printf("�������޸ĺ�ĵ绰��");
		scanf("%s", (pcon->data[pcon->size]).tele);
		printf("�������޸ĺ�ĵ�ַ��");
		scanf("%s", (pcon->data[pcon->size]).address);
		printf("�޸ĳɹ���\n");
	}
	
}
void Show(Con* pcon)   //��ʾ
{
	int i = 0;
	if (pcon->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}

	for (i = 0; i < pcon->size; i++)
	{
		printf("������ %s  �Ա�%s   ���䣺 %s  �绰�� %s   ��ַ��%s \n",
			(pcon->data[i]).name, (pcon->data[i]).sex,
			(pcon->data[i]).age, (pcon->data[i]).tele,
			(pcon->data[i]).address
			);
	}
}
void Clear(Con* pcon)   // ���
{
	pcon->size = 0;

}
void Sort(Con* pcon) //����������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < pcon->size - 1; i++)
	{
		for (j = 0; j < pcon->size - i - 1; j++)
		{
			if (strcmp(pcon->data[j].name, pcon->data[j + 1].name)>0)
			{
				pCon tmp;
				tmp = pcon->data[j];
				pcon->data[j] = pcon->data[j + 1];
				pcon->data[j + 1] = tmp;
			}
		}
	}
}