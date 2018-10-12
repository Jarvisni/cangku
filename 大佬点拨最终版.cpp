#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<algorithm>
#include<string>
using namespace std;

struct Poker
{
	int id;//用于排序 
	int value; //牌面数符 
	int color;  //花色 
	int realvalue()//真实代表值 
	{
		if(value<10)
			return value;
		else
			return 10;
	}
}pai[53];

int pai_index=1;

int mycomp(const Poker  &x,const Poker &y)
{
	return x.id<y.id;
}


string tablecolor[5]={"0","红心","方片","梅花","黑桃"};
string tablevalue[14]={"0","A","2","3","4","5","6","7","8","9","10","J","Q","K"};


Poker get_pai()//随便搞出来某张 
{
	Poker mou=pai[pai_index++];
	printf("你拿到了一张%s%s\n",tablecolor[mou.color].c_str(),tablevalue[mou.value].c_str());
	return mou;
}

int main()
{
	int a,b,c,zhuang;
	char x;
	char y;
	bool dead;
	struct wanjia
	{
		int hua; 
		int sum;
	}wan;
	
	
	for(int i=1;i<=52;++i)
    {
    	pai[i].id=rand();
    	pai[i].value=(i-1)%13+1;
    	pai[i].color=(i-1)/13+1;
    }
    
	
	

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
		wan.hua=rand()%4+1;
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
				sort(pai+1,pai+1+52,mycomp);
				Poker shu=get_pai(); 
    			wan.sum=wan.sum+shu.realvalue();
   				printf("你的总点数为%d\n",wan.sum);
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
    
   

