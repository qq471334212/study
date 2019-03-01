#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>


int main(int argc,char**argv){
/*


=========================================================================

//编写登录系统,要求账号匹配成功之后,匹配密码,密码匹配成功后,显示登录成功.
//如果账号匹配失败,则重新输入
//密码匹配失败,则重新输入密码.直到正确为止
//如果匹配失败三次,则重新输入密码,需要验证码
//将玩家账号密码保存在一个double值中,整数部分为账号,尾数部分为密码.
	
	int name=1234,pswd=4321;
	int c=1;
	srand(time(0));
	int d=rand()%9000+1000;
	while(1){			
			printf("请用户输入你的账户:\n");
			int a=scanf("%d");
			if(a==name){
				printf("账号匹配成功");
				break;
				
			}
			printf("账号错误\n");
	}
	while(1){
			
		if(c>=3){

			printf("密码输出错误三次,请输入验证码:%d\n",d);
			int e=scanf("%d");
				
				
			}
		}
			
				
			
		printf("请用户输入你的密码");
		int b=scanf("%d");
		if(b==pswd && d==e){

			printf("登录成功");
			break;	
		}else{
			c++;
		}


===============================================================

*/


//假定有一个开奖系统,系统随机生成一个开奖号码(1~99);然后用户可以通过购买彩票,彩票中奖号码自选(手动输入),要求就是四个号码全中,4个号码中3个为二等奖,4个号码中2个为三等奖.
/*
================================================================
	srand((unsigned)time(NULL));
	
	int haoma_1=rand()%99+1;

	int haoma_2=rand()%99+1;
	
	int haoma_3=rand()%99+1;
	
	int haoma_4=rand()%99+1;
	
	printf("请用户输入4个在1~99的号码\n");
	
	int a,b,c,d;
	
	int e=0;
	
	printf("%d\n%d\n%d\n%d\n",haoma_1,haoma_2,haoma_3,haoma_4);
	
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	
	while(getchar()!='\n');

	if(a==haoma_1){
	
		e++;

	}
	if(b==haoma_2){
	
		e++;
	
	}
	if(c==haoma_3){
	
		e++;
	
	}
	if(d==haoma_4){
	
		e++;

	}
	switch(e){
	
	case 2:
		printf("恭喜你中了三等奖\n");
		break;
	case 3:
		printf("恭喜你中了二等奖\n");
		break;
	case 4:
		printf("恭喜你中了一等奖\n");
		break;
	default:
		printf("很遗憾未中奖\n");
		break;
	
	
	}


*/
/*
========================================================
	int x;
	char y;
	scanf("%d",&x);
	while(getchar()!='\n');
	scanf("%c",&y);
	while(getchar()!='\n');
	printf("x的值为：%d\n",x);
	printf("y的值为：%c\n",y);

========================================================
	int a=5;
	printf("a的长度为：%ld\n",sizeof(a));
	printf("a的存储位置地址为：%p\n",&a);
========================================================


	char x='a';
	scanf("%c",&x);
	int y=x-'0';
	printf("%d\n",y);
========================================================


	int a=12345;
	int b,c,d,e,f;
	b=a/10000;
	c=a%10000/1000;
	d=a%1000/100;
	e=a%100/10;
	f=a%10;
	printf("%d\n",f*10000+e*1000+d*100+c*10+b);
========================================================		

	int a,b,c,max;
	printf("请输入三个数\n");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?a:b;
	max=(max>c)?max:c;
	printf("三位中最大的一个数为:%d\n",max);
========================================================

	double a=0,b=0,c=0,square_1=0,square_2=0,square_3=0;
	printf("请输入三个数:");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	
	if(a>=b+c||b>=a+c||c>=a+b){
		
		printf("这无法构成一个三角形");
	
	}else{
		
		if(a==b&&b==c){
		
			printf("这是一个等边三角形");
		
		}else{
		
			square_1=pow(a,2);
			
			square_2=pow(b,2);
			
			square_3=pow(c,2);
			
			if(square_1==square_2+square_3 || square_2==square_1+square_3 || square_3==square_1+square_2){
			
					if(a==b || b==c || a==c){
					
						printf("这是一个等腰直角三角形\n");
					
					}else{
					
						printf("这是一个普通等腰直角三角形\n");

					}
			
			}else{
			
				printf("这是一个普通非直角三角形\n");
			
			}

		}
	
	}       //有错误,未改
==========================================================
*/
/*
	int year,month;
	
	printf("请输入一个年份:");
	
	scanf("%d",&year);

	while(getchar()!='\n');
	
	if((year%4==0 && year%100!=0) || year%400==0){
	
		printf("这是闰年\n请输入月份:");
	
		scanf("%d",&month);

		while(getchar()!='\n');

		switch(month){
		
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:

				printf("%d年%d月有31天\n",year,month);
				
				break;
			
			case 2:
				
				printf("%d年%d月有28天\n",year,month);
				
				break;
			
			case 4: case 6: case 9: case 11:
				
				printf("%d年%d月有30天\n",year,month);
			
				break;
			
			default :

				printf("月份输入有误");
		}
	
	}else{
	
		printf("这不是闰年\n");
	
		int b;

		b=year-year%4;
		
			if((b%4==0 && b%100!=0) || b%400==0){
			
				printf("最近的闰年是%d",b);
			
			}else{
			
				printf("最近的闰年是%d",b-4);

			}

	}
==========================================================
*/




	return 0;
}
