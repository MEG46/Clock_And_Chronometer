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
	if(sec==0&&min>0){
		    min--;
			sec=60;
		}
		if(min==0&&hour>0&&sec==0){
			hour--;
			sec=60;
			min=59;
		}
		if(hour==0&&min==0&&sec==0){
			count=0;
			break;
		}	
		sleep(1);
		sec--;
	}
}else{
	printf("Please enter again!\n");
	count=1;
}
}while(count!=0);
	printf("Finished!");
	return 0;
}