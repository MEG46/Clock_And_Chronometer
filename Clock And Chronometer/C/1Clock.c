#include <stdio.h>
#include <unistd.h>

int main(){	
	int sec,min,hour,count=1;
	do{
	printf("Enter the hour : ");
	scanf("%d",&hour);
	printf("Enter the minutes : ");
	scanf("%d",&min);
	printf("Enter the seconds : ");
	scanf("%d",&sec);
	if((sec>=0&&sec<60)&&(min>=0&&min<60)&&(hour>=0&&hour<24)){
	while(1){
		system("cls");
		if(sec==60){
			min++;
			sec=0;
		}
		if(min==60){
			hour++;
			sec=0;
			min=0;
		}
		if(hour==24){
			count=0;
			break;
		}
		
		if(sec<10&&min<10&&hour<10){
		   printf("0%d:0%d:0%d\n",hour,min,sec);	
		}else if(sec>=10&&min<10&&hour<10){
		   printf("0%d:0%d:%d\n",hour,min,sec);	
		}else if(sec<10&&min>=10&&hour<10){
		   printf("0%d:%d:0%d\n",hour,min,sec);	
		}else if(sec>=10&&min>=10&&hour<10){
		   printf("0%d:%d:%d\n",hour,min,sec);	
		}else if(sec<10&&min>=10&&hour>=10&&hour<24){
		   printf("%d:%d:0%d\n",hour,min,sec);	
		}else if(sec<10&&min<=10&&hour>=10&&hour<24){
		   printf("%d:0%d:0%d\n",hour,min,sec);	
		}else if(sec>=10&&min<=10&&hour>=10&&hour<24){
		   printf("%d:0%d:%d\n",hour,min,sec);	
		}else{
			printf("%d:%d:%d\n",hour,min,sec);
		}
		
		sleep(1);
		sec++;
	}
}else{
	printf("Please enter again!\n");
	count=1;
}
}while(count!=0);
	printf("Finished!");
	return 0;
}