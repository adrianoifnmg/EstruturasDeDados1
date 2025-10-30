#include <stdio.h>  //standart In Out
#include <stdlib.h> 
#include <time.h> 

int main(){
	srand(time(NULL));
	
	FILE* arq = fopen("wordlist.txt","r");
	if(!arq){
		printf("Arquivo não existente\n");
		return 0;
	}

	char words[500][100];
	int c = 0;
		
	while(1){
		fscanf(arq," %[^\n]s",words[c]);
		if(feof(arq))
			break;
		//printf("Nome: %s\n",words[c]);		
		c++;
	}

	do{
		printf("Word: %s\n",words[rand()%c]);
		getchar();
	}while(1);

}
