#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
	Yakýnlýk ve uzaklýk algoritmasý ayrý olarak incelenmelidir. 
	Sürecin içerisine yedireceðiz. ve uzaklýk ve yakýnlýklara göre farkklý fonksoynlarla çaðrýlma iþlemide yapýlabilir.
*/

void pred(int random,int interval); // prediction of value that taken form user and guding to user the value


int main(){
	
	int l;
	char ent;
	printf("\n... conditions...");
	printf("\nnote :: hint activated only diffculty level 3");
	do{
		printf("\n\n--> please press to enter to start the game <--\n");
		scanf("%c",&ent);
		
	}while(ent !='\n');
	printf("Welcome to game!\npredict to number that is defined with random generator\nPlease choose difficulty level (1,2,3) ::");
	
	
	
	
	scanf("%d", &l);
	printf("\n\n------------------\n\n");
	srand(time(NULL));
	int random;
	switch(l){
		case(1):{
			random =rand() % (10 + 1 - 1) + 1;
			pred(random,10);
			break;
		}
		
		case(2):{
			random =rand() % (100 + 1 - 9) + 9;
			pred(random,100);
			break;
		}
		
		case(3):{
			random =rand() % (1000 + 1 - 99) + 99;
			
			pred(random,1000);
			break;
		}
	}
		
	return 0;
	
}

void pred(int random,int interval){
	
	int p;
	double dif,ratio;
	
	do{
		printf("\nplease enter your value (press 0 to quit) :: ");
		scanf("%d", &p);
		if(p == 0){
			printf("\n\n\t\t see you later !!!");
			break;
		}
		if(interval==1000){
			if(random>p){
			dif = random - p;
			printf("\nhint :: up ....\n");	
			// diffuclty 3 için bu hint verilecektir. bunu ayrý þekilde deðerlendireceðiz.
				
			}
			else if(random<p){
			dif = p - random;	
			printf("\nhint :: down ....\n");	
			}
		}
		
		ratio = (dif/(double)interval)*100;
		
		///////////////////////
		
		if(ratio<=10 && (ratio !=0)){
			printf("\nvery hot hot hot!!!!! \n");
		}
		else if(ratio>10 && ratio<=30){
			printf("\nits getting hotter!\n");
		}
		else if(ratio>30 && ratio<=50){
			printf("\n warm not cold not hot \n");
		}
		else if(ratio>50 && ratio<=70){
			printf("\n warm (not cold, not hot \n");
		}
		else if(ratio>70){
			printf("\nughhhh very cold here\n");
		}
		
	}while(p != random);
	
	if(p == random){
		printf("\n\n\n!!!!Congratulations!!!\n the value  = %d ",p);
	}
	
}


















