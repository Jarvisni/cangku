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
		printf("�Ըкɹ٣����߷���\n");
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
	    
	    
		printf("ׯ��������%d��\n",boss);
		printf("��������%d��\n",wan.sum);
		while (2)
		{
		    printf("�㻹��Ҫһ����ô��y/n\n");
		    x = getchar();
			while (x != 'y' && x != 'n')
				x = getchar();
			
			if(x=='y')
			{
				wan.sum=wan.sum+rand()%10+1;
				printf("����ܵ���Ϊ%d\n",wan.sum);
				if(wan.sum>21)
				{
					printf("�������۸¸¸�\n");
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
						printf("ׯ�ҵ�ù��");
				        sp = 1;
					}
				}
				
				
				if(wan.sum>boss || sp)
					printf("���Ӯ\n");
				else if(wan.sum<boss)
					printf("ׯ��Ӯ\n");
				else
					printf("���ƽ��\n");
				break;
				
			}
    	}
		
		;
		printf("����һ�Σ�������y��n�����߰�q�˳�����\n");
		putchar('\n'); putchar('\n');
		
		x = getchar();
		while (x != 'y' && x != 'n' && x != 'q')
			x = getchar();
		
	    if(x=='n'||x=='q')
		    return 0;
	}
}

