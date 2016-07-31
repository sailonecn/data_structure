#include<stdio.h>
//the enumerated type is constant,not variable.can not be changed.
enum Week_day{SUN, MON, TUE, WED, THU, FRI, SAT};
enum day{Morning, Noon=12, Afternoon, Night=24,VALUE1,VALUE2}DAY;

int main(int argc, char* argv[])
{
	enum Week_day week;
	int k;
	do{
		printf("Input the choice:\n");
		scanf(" %d",&k);
		week = (enum Week_day)k;//scanf(" %d",&week); is "Correct"
		switch (week){
		case SUN:puts("Sunday\n"); break;
		case MON:puts("Monday\n"); break;
		case TUE:puts("Tuesday\n"); break;
		case WED:puts("Wednesday\n"); break;
		case THU:puts("Thursday\n"); break;
		case FRI:puts("Friday\n"); break;
		case SAT:puts("Saturday\n"); break;
		default:puts("Error INPUT !\n"); break;
		}
		{
		/*
		int time;
		printf("time:\n");
		scanf("%d", &time);
		*/
		DAY = Noon;
		printf("DAY = %d\n", DAY);
		{
			//the some symbols will be replaced with elements in enum day;
			//"Afternoon" become into "13" because the value of "Noon"
			//VALUE1&2 "25" "26"
			int sum = 0;
			sum = Afternoon + Morning;
			printf("Afternoon(%d) + Morning(%d) = %d\n",Afternoon, Morning, sum);
			if (Afternoon == 13)printf("Noon = 12 make it changed \n");
			printf("Value1 = %d\n",VALUE1);
			printf("Value2 = %d\n", VALUE2);
		}
		}

	} while ((k < 7) && (k > 0));

		return 0;
}