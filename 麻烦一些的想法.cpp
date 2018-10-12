#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string>
using namespace std;
int pocker(int a) 
{
	for(a=1;a<=13;a++)
	{
		pocker(a)==a;
		pocker(a+13)==a;
		pocker(a+26)==a;
		pocker(a+39)==a;
	} 
}
	
	int zhi(int b)
{
		for(b=1;b<=52;b++)
	{
		if (pocker(b)<=10)
	   zhi(b)==pocker(b);
	    else
	    zhi(b)==10;
	}
}
	
	string sign(int c) 
{	
		for(c=0;c<=3;c++)
	{
		sign(1+c*13)="A";
		sign(2+c*13)="2";
	    sign(3+c*13)="3";
	    sign(4+c*13)="4";
	    sign(5+c*13)="5";
	    sign(6+c*13)="6";
	    sign(7+c*13)="7";
	    sign(8+c*13)="8";
	    sign(9+c*13)="9";
	    sign(10+c*13)="10";
	    sign(11+c*13)="J";
        sign(12+c*13)="Q";
	    sign(13+c*13)="K";
	
	}
}
	
	string hua(int d)
{
	 for(d=1;d<=13;d++)
	{
		hua(d)="黑桃";
		hua(d+13)="红心";
		hua(d+26)="方片";
		hua(d+39)="梅花";
	}
}








int main()
{
	printf("游戏开始\n");

    int a,b,c,d;
    a=rand()%13+1;
    b=rand()%52+1;
    c=rand()%3+1;
    d=rand()%13+1;
    hua(d);
	sign(c); 
    string m=hua(d);
    string n=sign(c);
		printf("你拿到了一张牌，这是一张%s%s牌\n",m.c_str(),n.c_str());
    srand(time(NULL));
    return 0;
}




















