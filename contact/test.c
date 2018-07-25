#include"contact.h"

void print()
{
	printf("**************************************\n"); 
	printf("      1.添加联系人信息                \n");
	printf("      2.删除指定联系人信息            \n");
	printf("      3.查找指定联系人信息            \n");
	printf("      4.修改指定联系人信息            \n");
	printf("      5.显示所有联系人信息            \n");
	printf("      6.清空所有联系人信息            \n");
	printf("      7.以姓名排序联系人信息          \n");
	printf("      8.退出通讯录                    \n");
	printf("\n");
	printf("**************************************\n");
	printf("     请输入要操作的序号               \n");
}

int main()
{
	Con pcon;
	Init(&pcon);
	int choice = 1;
	while (1)
	{
		print();
		printf("请选择：");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			Insert(&pcon);
			system("cls");
			break;
		case 2:
			Delete(&pcon);
			system("cls");
			break;
		case 3:
			Search(&pcon);
			break;
		case 4:
			Change(&pcon);
			system("cls");
			break;
		case 5:
			Show(&pcon);
			break;
		case 6:
			Clear(&pcon);
			break;
		case 7:
			Sort(&pcon);
			break;
		case 8:
			exit(0);
		default :
			printf("输入有误请重新操作！\n");
			break;
		}
		printf("\n");
	}
	return 0;
}
