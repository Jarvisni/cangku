#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main()
{
	int a,b,boss,i;
	char x;
	_Bool sp;
	struct wanjia
	{
		int sum;
	}wan;

	while (1)
	{	
		printf("性感荷官，在线发牌\n");
		;
		srand(time(NULL));
		printf("Start\n");
		a=rand()%10+1;
		b=rand()%10+1;
		wan.sum=0;
		boss=0;
		sp = 0;
		boss=a+rand()%10+1;
	    wan.sum=b+rand()%10+1;
	    
	    
		printf("庄家现在有%d点\n",boss);
		printf("你现在有%d点\n",wan.sum);
		while (2)
		{
		    printf("你还敢要一张牌么？y/n\n");
		    x = getchar();
			while (x != 'y' && x != 'n')
				x = getchar();
			
			if(x=='y')
			{
				wan.sum=wan.sum+rand()%10+1;
				printf("你的总点数为%d\n",wan.sum);
				if(wan.sum>21)
				{
					printf("你死了哇嘎嘎嘎\n");
					break;			
				}
			}
			
			else if(x=='n')
			{
				while(boss<=17)
				{
					boss=boss+rand()%10+1;
					if(boss>21)
					{
						printf("庄家倒霉，");
				        sp = 1;
					}
				}
				
				
				if(wan.sum>boss || sp)
					printf("玩家赢\n");
				else if(wan.sum<boss)
					printf("庄家赢\n");
				else
					printf("打成平局\n");
				break;
				
			}
    	}
		
		;
		printf("再玩一次？请输入y或n，或者按q退出程序\n");
		putchar('\n'); putchar('\n');
		
		x = getchar();
		while (x != 'y' && x != 'n' && x != 'q')
			x = getchar();
		
	    if(x=='n'||x=='q')
		    return 0;
	}
}

