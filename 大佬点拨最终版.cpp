#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<algorithm>
#include<string>
using namespace std;

struct Poker
{
	int id;//�������� 
	int value; //�������� 
	int color;  //��ɫ 
	int realvalue()//��ʵ����ֵ 
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


string tablecolor[5]={"0","����","��Ƭ","÷��","����"};
string tablevalue[14]={"0","A","2","3","4","5","6","7","8","9","10","J","Q","K"};


Poker get_pai()//�������ĳ�� 
{
	Poker mou=pai[pai_index++];
	printf("���õ���һ��%s%s\n",tablecolor[mou.color].c_str(),tablevalue[mou.value].c_str());
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
		printf("�Ըкɹ٣����߷��ƣ���������÷���������8888����\n");
		
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
	    
	    
		printf("ׯ��������%d��\n",zhuang);
		printf("��������%d��\n",wan.sum);
		while (2)
		{
		    printf("�㻹Ҫһ����ô��y/n\n");
		    x = getchar();
			while (x != 'y' && x != 'n')
				x = getchar();
			
			if(x=='y')
			{
				sort(pai+1,pai+1+52,mycomp);
				Poker shu=get_pai(); 
    			wan.sum=wan.sum+shu.realvalue();
   				printf("����ܵ���Ϊ%d\n",wan.sum);
				if(wan.sum>21)
				{
					printf("�������۸¸¸�\n");
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
						printf("ׯ�ҵ�ù��");
				        dead = 1;
					}
				}
				
				
				if(wan.sum>zhuang || dead)
					printf("���Ӯ\n");
				else if(wan.sum<zhuang)
					printf("ׯ��Ӯ\n");
				else
					printf("���ƽ��\n");
				break;
				
			}
    	}
		
		
		printf("����һ�Σ�������y��n�����߰�q�˳�����\n\n\n");
		putchar('\n'); putchar('\n');
		
		x = getchar();
		while (x != 'y' && x != 'n' && x != 'q')
			x = getchar();
		
	    if(x=='n'||x=='q')
		    return 0;
	}
}
    
   

