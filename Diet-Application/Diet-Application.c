#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
	float weight,age,height,targetweight;
	char name[100],surname[100];
void HomePage()
{  system("COLOR D");   
    printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t  *********************************\n");
	printf("\t\t\t\t  *********************************\n");
	printf("\t\t\t\t  ****"); printf("  Welcome  To  My  Diet  ");printf("****\n");
	printf("\t\t\t\t  *********************************\n");
	printf("\t\t\t\t  *********************************\n");
	printf("\n\n\n\n\n\n\n\n");
	system("pause"); system("cls");
}
void Menu()
{
	printf("\t\t\t\t    ***My Diet***\n\n\n");
	printf("choose the number you want.\n\n\n");
	printf("1-your Details               2-Update the details             3-your diet\n\n\n");
	printf("4-Get Premium Version        5-Calculate Calories             6-Exit     \n\n\n");
}
void Gender()
{
	 printf("\n\n                 \t\t\t  ****My Diet****\n\n\n ");
	 printf("please choose your Gender:\n\n\n");
	printf("\t\t\t1-Female");
	printf("\t\t\t\t2-Male\n\n\n");
}
void Details()
{
	printf("Please Enter your informations\n\n\n");
	printf("Your Name:\t\t");
	scanf(" %s",name);
	printf("\n\nYour Surname:\t\t");
	scanf(" %s",surname);
	printf("\n\nYour Weight in KG:\t\t");
	scanf("%f",&weight);
	printf("\n\nYour Height in cm:\t\t");
	scanf("%f",&height);
	printf("\n\nYour Age:\t\t");
	scanf("%f",&age);
		printf("\n\nTargetWeight:\t\t");
	scanf("%f",&targetweight);
	system("pause"); system("cls");	
}
void diet()
{   
	printf("\t\t\t\tMorning:\n\n 1 slice of whole wheat or rye bread + 1 tbsp labneh cheese + Tomato/parsley/red pepper\n\n");
    printf("\t\t\t\tNoon:\n\n 6-7 spoons of olive oil, fresh beans, etc. vegetable dish + 1 slice of bread + 1 bowl of tzatziki "); 
	printf("\n(with a pinch of chili pepper/mint added)\n\n");
    printf("\t\t\t\tSnack:\n\n 1 rusk or 2 grissini or 2 emek + 1 tablespoon of unsalted raw pistachios or 10 pcs of raw almonds\n\n");
    printf("\t\t\t\tEvening:\n\n160 g Grilled or tuna fish + Boiled/baked vegetables (zucchini/eggplant/pepper etc.) or mixed salad + 14-15 black grapes\n\n");
    printf("\t\t\t\t2-3 liters of water will be consumed every day\n\n");
    system("pause"); system("cls");
}
void showdetails()
{ 
	printf("\tYour Health Information are:\n\n");
	printf("\tYour Name:%s\n\n",name);
	printf("\tYour Surname:%s\n\n",surname);
	printf("\tYour Age:%.0f\n\n",age);
	printf("\tYour Wieght:%.0f\n\n",weight);
	printf("\tYour Hieght:%.0f\n\n",height);
	printf("\tYour Target Wieght:%.0f\n\n",targetweight);
	system("pause"); system("cls");	
}
void fruitsmenu()
{
	printf("\t1-Apple\t\t");
	printf("\t        2-Banana\t\t");
	printf("3-Orange\n\n");
	printf("\t4-PineApple\t\t");
	printf("\t5-Mango\t\t");
	printf("\t6-Avocado\n\n");
	printf("\t7-strawberry\t\t");
	printf("\t8-back\n\n");
}
void fastfood()
{
    printf("\t1-Pizza\t\t");
	printf("         2-Burger\t\t");
	printf("   3-Fried Chicken\n\n");
	printf("\t4-French Fries\t\t");
	printf(" 5-Cola\t\t");
		printf("           6-back\n\n");	
}
void others()
{
	 printf("\t1-Cake\t\t");
	printf("2-Sugar\t\t");
	printf("3-Labaneh\n\n");
	printf("        4-Butter\t");
	printf("5-Cheese");
	printf("\t6-Milk\t\t\n\n");
		printf("\t7-back\n\n");	
}
void vegetables()
{
	 printf("\t1-Carrot\t\t");
	printf("2-Potato\t\t");
	printf("3-Tomato\n\n");
	printf("\t4-Lettuce\t\t");
	printf("5-Broccoli\t\t");
		printf("6-back\n\n");
}
void calculatemenu()
{
	printf("\t1-Fruit                      2-Vegetables                  3-Chicken\n\n");
	printf("\t4-Meat                       5-FastFood                    6-Others\n\n");
	printf("\t7-Check Calories             8-Exit\n\n");
}
void calculate(int b)
{int i=0; 
float calories,k;
  float d,sum=0,q,x[10000];
    height=height*0.39;
    	weight*=2.2;
	printf("\tChoose the category you want to calculate your calories\n\n");
	if(b==1)
	{
	   calories=655+(4.3*weight)+(4.3*height)-(4.7 * age);
		printf("\tThe calories you should have per day are:%.2f\n\n",calories);
	}
	else if(b==2)
	{ calories=655+(6.2*weight)+(12.7*height)-(6.8*age);
	printf("\tThe calories you should have per day are:%.2f\n\n",calories);
	}
	do{
	calculatemenu();
	scanf("%f",&d);
	system("cls");
	if(d==1)
	{
		do{
			fruitsmenu();
			scanf("%f",&k);
			if(k==1)
			{ printf("\tEnter the quantity:\n\n");
				scanf("%f",&q);
				x[i]=q*72;
			}
			else if(k==2) 
			{printf("\tEnter the quantity:\n\n");
				scanf("%f",&q);
				x[i]=q*105;
			}
			else if(k==3)
			{printf("\tEnter the quantity:\n\n");
				scanf("%f",&q);
				x[i]=q*62;
			}
			else if(k==4)
			{printf("\tEnter how many slices have you eaten:\n\n");
				scanf("%f",&q);
				x[i]=q*40;
			}
			else if(k==5)
			{printf("\tEnter the quantity:\n\n");
				scanf("%f",&q);
				x[i]=q*0.65;
			}
			else if(k==6)
			{printf("\tEnter the quantity:\n\n");
				scanf("%f",&q);
				x[i]=q*260;
			}
			else if(k==7)
			{printf("\tEnter the quantity:\n\n");
				scanf("%f",&q);
				x[i]=q*0.32;
			}
			system("cls");
			i++;
		}while(k!=8);
	}
	else if(d==2)
	{
		do{
			vegetables();
			scanf("%f",&k);	
				if(k==1)
			{ printf("\tEnter the quantity:\n\n");
				scanf("%f",&q);
				x[i]=q*25;
			}
			else if(k==2) 
			{printf("\tEnter the quantity:\n\n");
				scanf("%f",&q);
				x[i]=q*171;
			}
			else if(k==3)
			{printf("\tEnter the quantity:\n\n");
				scanf("%f",&q);
				x[i]=q*22;
			}
			else if(k==4)
			{printf("\tEnter how many leafs have you eaten:\n\n");
				scanf("%f",&q);
				x[i]=q*1;
			}
			else if(k==5)
			{printf("\tEnter how many grams have you eaten:\n\n");
				scanf("%f",&q);
				x[i]=q*0.34;
			}
			system("cls");
			i++;
		}while(k!=6);
	}
	else if(d==3)
		{
		printf("\tplease enter how many grams have you eaten:\n\n");
		scanf("%f",&q);	
		x[i]=q*2.2;
		system("cls");
		}
	else if(d==4)
		{
		printf("\tplease enter how many grams have you eaten:\n\n");
		scanf("%f",&q);	
		x[i]=q*2.87;
		system("cls");
		}
	else if(d==5)
	{ 
		do{
			fastfood();
			scanf("%f",&k);
				if(k==1)
			{ printf("\tEnter how many slices have you eaten:\n\n");
				scanf("%f",&q);
				x[i]=q*237;
			}
			else if(k==2) 
			{printf("\tEnter how many sandwiches have you eaten:\n\n");
				scanf("%f",&q);
				x[i]=q*319;
			}
			else if(k==3)
			{printf("\tEnter the quantity:\n\n");
				scanf("%f",&q);
				x[i]=q*141;
			}
			else if(k==4)
			{printf("\tEnter how many grams have you eaten:\n\n");
				scanf("%f",&q);
				x[i]=q*2.74;
			}
			else if(k==5)
			{printf("\tEnter how many ml have you drunk:\n\n");
				scanf("%f",&q);
				x[i]=q*0.41;
			}
			system("cls");
			i++;	
		}while(k!=6);
		}	
	else if(d==6)
	{
	do{
		others();
		scanf("%f",&q);
			if(k==1)
			{ printf("\tEnter how many pieces:\n\n");
				scanf("%f",&q);
				x[i]=q*235;
			}
			else if(k==2) 
			{printf("\tEnter how many tsp:\n\n");
				scanf("%f",&q);
				x[i]=q*16;
			}
			else if(k==3)
			{printf("\tEnter how many tbsp:\n\n");
				scanf("%f",&q);
				x[i]=q*30;
			}
			else if(k==4)
			{printf("\tEnter how many grams have you eaten:\n\n");
				scanf("%f",&q);
				x[i]=q*7.17;
			}
			else if(k==5)
			{printf("\tEnter how many grams :\n\n");
				scanf("%f",&q);
				x[i]=q*3.5;
			}
			else if(k==6)
			{printf("\tEnter how many ml have you drunk:\n\n");
				scanf("%f",&q);
				x[i]=q*0.62;
			}
			system("cls");
			i++;	
	}while(k!=7);		
		}
    else if(d==7)
    	{
    		printf("\tyour calories you get it today are %.2f\n\n",sum);
    		if(sum>calories) printf("You are over the daily need of calories you should exercise!!\n\n");
    		else if(sum==calories) printf("You have reached the limit!!\n\n");
    		else printf("you are under the daily need of calories!!\n\n");
		}
		i=0;
		sum+=x[i];
		i++;
		}while(d!=7 && d!=8);
		if(d==8) return;
		
	system("pause"); system("cls");	
}
void payment()
{int num,ccv,mm,yy;
printf("Enter your Card Number to pay:\t\t");
scanf("%d",&num);
printf("\n\nCCV:\t\t");
scanf("%d",&ccv);
printf("\n\nMM:\t\t"); scanf("%d",&mm); printf("YY:\t\t"); scanf("%d",&yy);
system("pause");
printf("\n\nYour Process is done!\n");
system("pause");
system("cls");	
}
void Premium()
{
	printf("\tThank you for Buying this version\n\n");
	printf("\tThis version will give you special Exercises to do in your daily morning\n\n");
	printf("\tstretching\n\n");
	printf("\t30 sec squat\n\n");
	printf("\t30 sec crunch\n\n"); 
	printf("\t30 sec burpee\n\n");
	printf("\t30 sec push up\n\n"); 
	printf("\t30 sec jump\n\n");
	printf("\t30 sec leg raise(Left)\n\n"); 
	printf("\t30 sec leg raise(Right)\n\n");
	printf("\t30 sec bicycle crunch\n\n");
	printf("\t30 sec plank\n\n");
	printf("\t30 sec Left plank\n\n");
	printf("\t30 sec Right plank\n\n");
	system("pause"); 
	system("cls");
}
void operations(int b)
{int c;
        scanf("%d",&c);
		printf("\n");
		system("pause");
		system("cls");
			if(c==1){
			showdetails(); 
			Menu(); 
			operations(b);
		}
		else if(c==2){
			Details(); 
			Menu(); 
			operations(b);
		}
		else if(c==3){
			diet(); 
			Menu();
			operations(b);
		}
		else if(c==4){
			payment();
			Premium(); 
			Menu();
			operations(b);
		}
		else if(c==5){
			calculate(b); 
			Menu();
			operations(b);
		}
		else if(c==6){
			return;
		}
}
void MainMenu()
{   int b;
   system("COLOR 3");
    Gender();
    scanf("%d",&b);
	system("pause"); system("cls");	
	if(b==2){
		system("COLOR 3");
		 Details();}
	else if(b==1) {	
	system("COLOR FD");	
	Details(); 
	} 
	else printf("wrong number\n");
		Menu();
        operations(b);
}
int main()
{int b;
	HomePage();
	MainMenu();
	system("pause"); system("cls");
	printf("I wish you loved your birthday Gift :)");
	system("pause");
		printf("Happy birthday Again");
	system("pause");
		printf("and don't forget always Respect XD");
	system("pause");
		printf("BTW if you want to delete those go to the line 405");
	system("pause");
		printf("Enjoy :)");
	system("pause");
return 0;
}
