#include"contact.h"

void print()
{
	printf("**************************************\n"); 
	printf("      1.�����ϵ����Ϣ                \n");
	printf("      2.ɾ��ָ����ϵ����Ϣ            \n");
	printf("      3.����ָ����ϵ����Ϣ            \n");
	printf("      4.�޸�ָ����ϵ����Ϣ            \n");
	printf("      5.��ʾ������ϵ����Ϣ            \n");
	printf("      6.���������ϵ����Ϣ            \n");
	printf("      7.������������ϵ����Ϣ          \n");
	printf("      8.�˳�ͨѶ¼                    \n");
	printf("\n");
	printf("**************************************\n");
	printf("     ������Ҫ���������               \n");
}

int main()
{
	Con pcon;
	Init(&pcon);
	int choice = 1;
	while (1)
	{
		print();
		printf("��ѡ��");
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
			printf("�������������²�����\n");
			break;
		}
		printf("\n");
	}
	return 0;
}
