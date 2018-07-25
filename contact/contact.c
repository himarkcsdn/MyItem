#include"contact.h"

void Init(Con* pcon)  //初始化
{
	if (pcon == NULL)
	{
		printf("非法输入\n");
		return;
	}
	pcon->size = 0;
}

void Insert(Con* pcon)//插入
{
	if (pcon->size==MAX_SIZE)
	{
		printf("通讯录已满，无法插入！\n");
		return;
	}
	printf("请输入姓名：");
	scanf("%s", (pcon->data[pcon->size]).name);
	printf("请输入性别：");
	scanf("%s", (pcon->data[pcon->size]).sex);
	printf("请输入年龄：");
	scanf("%s", (pcon->data[pcon->size]).age);
	printf("请输入电话：");
	scanf("%s", (pcon->data[pcon->size]).tele);
	printf("请输入地址：");
	scanf("%s", (pcon->data[pcon->size]).address);
	pcon->size++;
}

int Find(Con* pcon, char* name)  //根据姓名查找出位置
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


void Delete(Con* pcon ) //删除
{
	char name[20];
	int i = 0;
	int ret = 0;
	printf("请输入要删除的姓名！");
	scanf("%s", name);
	ret = Find(pcon, name);
	if (ret != -1)
	{
		for (i = ret; i < pcon->size; i++)
		{
			pcon->data[ret] = pcon->data[ret + 1];

		}
		pcon->size--;
		printf("成功删除！\n");
	}
	else
	{
		printf("删除失败信息不存在！\n");
	}
}
void Search(Con* pcon)  //查找
{
	char name[20];
	int ret = 0;
	int i = 0;
	if (pcon->size == 0)
	{
		printf("通讯录为空！\n");
		return;
	}
	printf("请输入要查找的姓名！");
	scanf("%s", name);
	ret = Find(pcon, name);
	if (ret != -1)
	{
			printf("姓名： %s  性别：%s   年龄： %s  电话： %s   地址：%s \n",
				(pcon->data[pcon->size]).name, (pcon->data[pcon->size]).sex,
				(pcon->data[pcon->size]).age, (pcon->data[pcon->size]).tele,
				(pcon->data[pcon->size]).address
				);
	}
	else
	{
		printf("查找失败！未找到该信息\n");
	}

}
void Change(Con* pcon)   //修改
{
	char name[20];
	int i = 0;
	int ret = 0;
	printf("请输入联系人姓名：\n");
	scanf("%s", name);
	ret = Find(pcon, name);
	if (ret != -1)
	{
		printf("请输入修改后的姓名：");
		scanf("%s", (pcon->data[pcon->size]).name);
		printf("请输入修改后的性别：");
		scanf("%s", (pcon->data[pcon->size]).sex);
		printf("请输入修改后的年龄：");
		scanf("%s", (pcon->data[pcon->size]).age);
		printf("请输入修改后的电话：");
		scanf("%s", (pcon->data[pcon->size]).tele);
		printf("请输入修改后的地址：");
		scanf("%s", (pcon->data[pcon->size]).address);
		printf("修改成功！\n");
	}
	
}
void Show(Con* pcon)   //显示
{
	int i = 0;
	if (pcon->size == 0)
	{
		printf("通讯录为空！\n");
	}

	for (i = 0; i < pcon->size; i++)
	{
		printf("姓名： %s  性别：%s   年龄： %s  电话： %s   地址：%s \n",
			(pcon->data[i]).name, (pcon->data[i]).sex,
			(pcon->data[i]).age, (pcon->data[i]).tele,
			(pcon->data[i]).address
			);
	}
}
void Clear(Con* pcon)   // 清空
{
	pcon->size = 0;

}
void Sort(Con* pcon) //以名字排序
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