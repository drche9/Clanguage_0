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
	//플레이어에게 게임 설명
	printf("게임 설명 \n \n");
	printf("player와 computer는 서로 숫자를 주고 받는다. \n");
	printf("player의 선 공격! 1~ 3의 값을 입력한다 \n");
	printf("컴퓨터는 플레이어를 마지막 값을 이어서 랜덤으로 출력한다. \n");
	printf("31를 외치는 사람이 패배, 31을 외치지 않는 사람이 승리한다. \n");
	printf("start! \n");
	//반복
	while (player || computer <= 31) {
		//플레이어의 숫자 입력
		printf("플레이어 : ");
		scanf_s("%d", &player);
		//컴퓨터의 랜덤값 입력
		srand(time(NULL));
		computer = (rand() % 3) + 1;
		printf("\n컴퓨터 : %d \n \n",player + computer);
	}
	printf("END");
	//31에 다다르면 게임 오버
	return 0;
}