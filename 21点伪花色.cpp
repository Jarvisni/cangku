#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string> 
using namespace std;


int main()
{
	int a,b,c,d,zhuang;
	char x;
	string y;
	bool dead;
	struct wanjia
	{
		int hua; 
		int sum;
	}wan;

	while (1)
	{	
		printf("性感荷官，在线发牌，线上美高梅，点击就送8888筹码\n");
		
		srand(time(NULL));
		printf("Game Start\n");
		a=rand()%10+1;
		b=rand()%10+1;
		wan.sum=0;
		wan.hua=0;
		zhuang=0;
		dead = 0;
		zhuang=a+rand()%10+1;
	    wan.sum=b+rand()%10+1;
	    
	    
		printf("庄家现在有%d点\n",zhuang);
		printf("你现在有%d点\n",wan.sum);
		while (2)
		{   
			
		    printf("你还要一张牌么？y/n\n");
		    x = getchar();
			while (x != 'y' && x != 'n')
				x = getchar();
			
			if(x=='y')
			{
				wan.hua=rand()%4 + 1;	
				if(wan.hua==1)
					y="黑桃"; 
				if(wan.hua==2)
					y="红心";
				if(wan.hua==3)
				    y="梅花";
				if(wan.hua==4)
				    y="方片";
				
				
				c = rand()%10 + 1;
				wan.sum=wan.sum+c;
				printf("你拿到了一张%s%d你的总点数为%d\n", y.c_str(), c, wan.sum);
				if(wan.sum>21)
				{
					printf("你死了哇嘎嘎嘎\n");
					break;			
				}
			}
			
			else if(x=='n')
			{
				while(zhuang<=17)
				{
					zhuang=zhuang+rand()%10+1;
					if(zhuang>21)
					{
						printf("庄家倒霉，");
				        dead = 1;
					}
				}
				
				
				if(wan.sum>zhuang || dead)
					printf("玩家赢\n");
				else if(wan.sum<zhuang)
					printf("庄家赢\n");
				else
					printf("打成平局\n");
				break;
				
			}
    	}
		
		
		printf("再玩一次？请输入y或n，或者按q退出程序\n\n\n");
		putchar('\n'); putchar('\n');
		
		x = getchar();
		while (x != 'y' && x != 'n' && x != 'q')
			x = getchar();
		
	    if(x=='n'||x=='q')
		    return 0;
	}
}

