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
	int total = 0;
	//�÷��̾�� ���� ����
	printf("���� ���� \n \n");
	printf("player�� computer�� ���� ���ڸ� �ְ� �޴´�. \n");
	printf("player�� �� ����! 1~ 3�� ���� �Է��Ѵ� \n");
	printf("��ǻ�ʹ� �÷��̾ ������ ���� �̾ �������� ����Ѵ�. \n");
	printf("31�� ��ġ�� ����� �й�, 31�� ��ġ�� �ʴ� ����� �¸��Ѵ�. \n");
	printf("start! \n");
	//�ݺ�(31����)
	while (total < 31)
	{
		//�÷��̾��� �Է�
		//player�� ����  total������ ������ ���� X
		do {
			printf("player : ");
			scanf_s("%d", &player);
		}
		while (player <= total);

		/*while (total > player){
			printf("player : ");
			scanf_s("%d", &player);
		}*/
		
		//�÷��̾��� �Է�

		//printf("player : ");
		//scanf_s("%d", &player);

		//��ǻ���� �Է�
		srand(time(NULL));
		
		if (player < 31) {
			if (computer!=player) {
				computer = (rand() % 3) + 1;
				if (player + computer > 31) {
					computer = 31 - player;
				}
			}
		}
		else {
			break;
		}
		total = computer + player;
		printf("computer : %d \n \n", total);
	}
	if (player == 31) {
		printf("\nyour Defeat \n");
	}
	else {
		printf("\nyour win \n\n");
	}
	printf("GameOver");
	//31�� �ٴٸ��� ���� ����
	
	//��ǻ�Ϳ� ���� ���� �Է��ص� ��ǻ�Ͱ� ++
	//��ǻ���� ������ �÷��̾ ������ ����
	
	return 0;
}