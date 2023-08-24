//yatzy fast po datorn och i terminalen...
//Author: regalskeppet/lokks

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define OK 0
#define ERR 1

int var1;

int dice1, dice2, dice3, dice4, dice5;

char namn1[3], namn2[3], namn3[3], namn4[3], namn5[3];

int ett1, ett2, ett3, ett4, ett5;
int tva1, tva2, tva3, tva4, tva5;
int tre1, tre2, tre3, tre4, tre5;
int fyra1, fyra2, fyra3, fyra4, fyra5;
int fem1, fem2, fem3, fem4, fem5;
int sex1, sex2, sex3, sex4, sex5;

int sum1, sum2, sum3, sum4, sum5;

int bns1, bns2, bns3, bns4, bns5;
int ettpar1, ettpar2, ettpar3, ettpar4, ettpar5;
int tvapar1, tvapar2, tvapar3, tvapar4, tvapar5;
int tretal1, tretal2, tretal3, tretal4, tretal5;
int fyrtal1, fyrtal2, fyrtal3, fyrtal4, fyrtal5;
int lst1, lst2, lst3, lst4, lst5;
int sst1, sst2, sst3, sst4, sst5;
int kuk1, kuk2, kuk3, kuk4, kuk5;
int chans1, chans2, chans3, chans4, chans5;
int yatzy1, yatzy2, yatzy3, yatzy4, yatzy5;

int ttl_sum1, ttl_sum2, ttl_sum3, ttl_sum4, ttl_sum5;

bool spel_sant = true;

void yatzy_tabell();
void random_all();
void funktion1();
void spara_alla();

int main() {
	
	int start;
	int antal_pers;
	
	printf("0==================================0\n");
	printf("| Vaelkommen till mitt yatzy-spel! | \n");
	printf("0==================================0\n");
	printf("Skriv 1 for att borja: ");
	scanf("%i", &start);
	
	if(start != 1) {
		printf("Ingen yatzy for dig do");
		return 0;
	} else {
		printf("Kul att du ville kora!\n");
	}
	
	printf("Hur monga ska kora? (1 - 5): ");
	scanf("%i", &antal_pers);
	if(antal_pers == 1) {
		funktion1();
	} /*else if (antal_pers == 2) {
		funktion2();
	} else if (antal_pers == 3) {
		funktion3();
	} else if (antal_pers == 4) {
		funktion4();
	} else if (antal_pers == 5) {
		funktion5();
	} */
	
	return OK;
}


void spara_alla() {
	
	int i;
	i = 0;
	char val_spar[10];	
	int j;
	
	yatzy_tabell();
	
	printf("\n");
	printf("Vad ville du spara de som? --> ");
	scanf("%i", j);
	
	if(j == 1) {
		
		while(i < 5) {	
			
			if(dice1 == 1) {
				var1++;
				i = 1;
				printf("%i\n", var1);
				continue;
			} else if(dice2 == 1) {
				var1++;
				i = 2;
				printf("%i\n", var1);
				continue;
			} else if(dice3 == 1) {
				var1++;
				i = 3;
				printf("%i\n", var1);
				continue;
			} else if(dice4 == 1) {
				var1++;
				i = 4;
				printf("%i\n", var1);
				continue;
			} else if(dice5 == 1) {
				var1++;
				i = 5;
				printf("%i\n", var1);
				continue;
			} else {
				i = 5;
				var1 = 0;
			}
			
			
		}
	
	}
	printf("PENIS");
}



void random_all() { 
	
	srand(time(NULL));
	
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
	dice3 = rand() % 6 + 1;
	dice4 = rand() % 6 + 1;
	dice5 = rand() % 6 + 1;
	
	rand();
	
	printf("\nHaer e taerningarnas nummer: %i, %i, %i, %i, %i\n", dice1, dice2, dice3, dice4, dice5);
}
 
void yatzy_tabell() {
	
	printf("\n");
	
	printf("0======0==========================================0\n");
	printf("|      | CP-YATZY                RIX_NECROTS-BOLAG|\n");
	printf("0======0======0======0======0=======0======0======0\n");
	printf("|      |  %s     %s     %s     %s     %s           \n", namn1, namn2, namn3, namn4, namn5);
	printf("0======0======0======0======0=======0======0=====--\n");
	printf("|ETTOR |  %i     %i     %i     %i     %i           \n", ett1, ett2, ett3, ett4, ett5);
	printf("|TVAOR |  %i     %i     %i     %i     %i           \n", tva1, tva2, tva3, tva4, tva5);
	printf("|TREOR |  %i     %i     %i     %i     %i           \n", tre1, tre2, tre3, tre4, tre5);
	printf("|FYROR |  %i     %i     %i     %i     %i           \n", fyra1, fyra2, fyra3, fyra4, fyra5);
	printf("|FEMMOR|  %i     %i     %i     %i     %i           \n", fem1, fem2, fem3, fem4, fem5);
	printf("|SEXOR |  %i     %i     %i     %i     %i           \n", sex1, sex2, sex3, sex4, sex5);
	printf("0======0=========================================--\n");
	printf("|SUMMA |  %d     %d     %d     %d     %d           \n", sum1, sum2, sum3, sum4, sum5);
	printf("0======0=========================================--\n");
	printf("|BONUS |  %i     %i     %i     %i     %i           \n", bns1, bns2, bns3, bns4, bns5);
	printf("|1 PAR |  %i     %i     %i     %i     %i           \n", ettpar1, ettpar2, ettpar3, ettpar4, ettpar5);
	printf("|2 PAR |  %i     %i     %i     %i     %i           \n", tvapar1, tvapar2, tvapar3, tvapar4, tvapar5);
	printf("|TRETAL|  %i     %i     %i     %i     %i           \n", tretal1, tretal2, tretal3, tretal4, tretal5);
	printf("|FYRTAL|  %i     %i     %i     %i     %i           \n", fyrtal1, fyrtal2, fyrtal3, fyrtal4, fyrtal5);
	printf("|-STEGE|  %i     %i     %i     %i     %i           \n", lst1, lst2, lst3, lst4, lst5);
	printf("|+STEGE|  %i     %i     %i     %i     %i           \n", sst1, sst2, sst3, sst4, sst5);
	printf("|KUK   |  %i     %i     %i     %i     %i           \n", kuk1, kuk2, kuk3, kuk4, kuk5);
	printf("|CHANS |  %i     %i     %i     %i     %i           \n", chans1, chans2, chans3, chans4, chans5);
	printf("|YATZY |  %i     %i     %i     %i     %i           \n", yatzy1, yatzy2, yatzy3, yatzy4, yatzy5);
	printf("0======0=========================================--\n");
	printf("|SUMMA |  %d     %d     %d     %d     %d           \n", ttl_sum1, ttl_sum2, ttl_sum3, ttl_sum4, ttl_sum5);
	printf("0======0=========================================--\n");
}





void funktion1() {
		
	int nmrval;
	char val[2];
	
	printf("Slo alla taerningarna? --> ");
	scanf("%s", &val);
	
	if(val == "J" || "Ja" || "j" || "ja") {
		
		random_all();	
		
		while(spel_sant = true) {
			
			srand(time(NULL));		
		
			printf("Vill du: \n");
			printf("	1| Slo om alla tarningarna\n"); 
			printf("	2| Spara alla tarningar\n"); 
			printf("	3| Slo om de du vaeljer\n");
			printf("Svar: "); scanf("%d", &nmrval);
		
			if(nmrval == 1) {
				printf("Slor om alla taerningarna...");
			
				random_all();
			
			} else if(nmrval == 2) {
				printf("Vad vill du spara de som? --> ");
				
				spara_alla();
				
			} else if(nmrval == 3) {
				printf("Vilka taerningar vill du slo om?\n");
				printf("(Skriv liksom 1 foer forsta vaerdet etc)\n");
				printf("Om du inte naer du kaenner dig nojd so kommer\n");
				printf("--> \n\n");

			} else if(nmrval == 4) {
				spel_sant = false;
				exit(OK);
			}
			
			}
	} else if(val == "N" || "Nej" || "n" || "nej") {
		printf("Jaha, skit i det do...");
		exit(OK);
	}
	
	
}


