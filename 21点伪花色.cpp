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
		printf("�Ըкɹ٣����߷��ƣ���������÷���������8888����\n");
		
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
				wan.hua=rand()%4 + 1;	
				if(wan.hua==1)
					y="����"; 
				if(wan.hua==2)
					y="����";
				if(wan.hua==3)
				    y="÷��";
				if(wan.hua==4)
				    y="��Ƭ";
				
				
				c = rand()%10 + 1;
				wan.sum=wan.sum+c;
				printf("���õ���һ��%s%d����ܵ���Ϊ%d\n", y.c_str(), c, wan.sum);
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

