#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	printf("###      ###       #####    #######       ###     ##       ##  ####### \n");
	printf("#  #    #   #    ##        ##            #   #    # #     # #  #       \n");
	printf("#   #  #     #   #         ##           #     #   #  #   #  #  #       \n");
	printf("#  #   #######   ###       ##           #######   #   # #   #  #       \n");
	printf("###    #     #    ###      ##           #     #   #    #    #  ####### \n");
	printf("#  #   #     #       ##    ##   #####   #     #   #         #  #       \n");
	printf("#   #  #     #        ##   ##       ##  #     #   #         #  #       \n");
	printf("#  #   #     #       ##    ##       ##  #     #   #         #  #       \n");
	printf("###    #     #   ######     ##########  #     #   #         #  ####### \n");
	printf("##     #     #   ######             ##  #     #   #         #  ####### \n");
	printf("\n");
	printf("\n");
	printf("\n");
	int player = 0;
	int computer = 0;
	int exit0 = 0;
	//�÷��̾�� ���� ����
	printf("���� ���� \n \n");
	printf("player�� computer�� ���� ���ڸ� �ְ� �޴´�. \n");
	printf("player�� �� ����! 1~ 3�� ���� �Է��Ѵ� \n");
	printf("��ǻ�ʹ� �÷��̾ ������ ���� �̾ �������� ����Ѵ�. \n");
	printf("31�� ��ġ�� ����� �й�, 31�� ��ġ�� �ʴ� ����� �¸��Ѵ�. \n");
	printf("start! \n");
	//�ݺ�
	while (player || computer <= 31) {
		//�÷��̾��� ���� �Է�
		printf("�÷��̾� : ");
		scanf_s("%d", &player);
		//��ǻ���� ������ �Է�
		srand(time(NULL));
		computer = (rand() % 3) + 1;
		printf("\n��ǻ�� : %d \n \n",player + computer);
	}
	printf("END");
	//31�� �ٴٸ��� ���� ����
	return 0;
}