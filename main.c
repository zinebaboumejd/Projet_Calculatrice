#include <stdio.h>
#include <stdlib.h>

int main() {
	int choix;
	float nombre1,nombre2,resultat;
	char con[5]="OUI";

	printf("Vous choisez un operatore: \n\t1-Addition \n\t2-sustractio\n\t3-multiplication \n\t4-Division\n\t5-and\n\t6-OR \n***le nombre 1 =Vrai \n***le nombre  0= faux\nEntrez le choix: ");
	scanf("%d",&choix);
	 while(choix!=1 && choix!=2 && choix!=3 && choix!=4  && choix!=5  && choix!=6 ){
	 	printf("Entrez si 1 OU 2 OU 3 OU 4 OU 5 OU 6\t");
		scanf("%d",&choix);
	 	}//end while
	printf("Donnez nombre 1:");
	scanf("%f",&nombre1);
	printf("Donnez nombre 2:");
	scanf("%f",&nombre2);
	if(choix==1){
		resultat=nombre1+nombre2;
		printf("la resulta est : %.2f\n",resultat);
	}else if(choix==2){
		resultat=nombre1-nombre2;
		printf("la resulta est : %.2f\n",resultat);
	}else if(choix==3){
		resultat=nombre1*nombre2;
		printf("la resulta est : %.2f\n",resultat);
	}else if(choix==4){	
		while(nombre2==0){
			printf("Donnez le nombre 2 supereure a 0 (nombre2>0)");
			scanf("%f",&nombre2);
		}
		resultat=nombre1/nombre2;
		printf("la resulta est : %.2f\n",resultat);
	}else if(choix==5 || choix==6 ){
		while((nombre1!=1 &&  nombre1!=0) || (nombre2!=1 &&  nombre2!=0) ){
			printf("Entrez un nmbre binair 1 ou 0 \n");//le nombre 1 =Vrai le nombre  0= faux
			printf("Donnez nombre 1\t");
			scanf("%f",&nombre1);
			printf("Donnez nombre 2\t");
			scanf("%f",&nombre2);
		}
       	if(choix==5){
		    if(nombre1==1 && nombre2==1){
			//	resultat=1;
			printf("Resultat est : 1");
			}else {
		//	resultat=0;
			printf("Resultat est : 0");
		}
          }else{
		    if(nombre1==0 && nombre2==0){
			//	resultat=1;
			printf("Resultat est : 0");
			}else {
		//	resultat=0;
			printf("Resultat est : 1");
          } 
          
      }
	}
//	printf("Vollez-vour contunie !");
//    scanf("%s",&con);
//	while(con=="OUI"){
//		
//	}
	return 0;
}