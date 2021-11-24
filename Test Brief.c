#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct compte{
	char nom[50];
	char prenom[50];
	char cin[12];
	float montant;
};
typedef struct compte client;
struct compte cmp[50];
int n=0;

void introuduire_compte(){ 
//Creation Un Compte Bancaire
	printf("entrez votre nom: ");
	scanf("%s",cmp[n].nom);
	printf("entrez votre prenom: ");
	scanf("%s",cmp[n].prenom);
	printf("entrez votre cin: ");
	scanf("%s",cmp[n].cin);
	printf("entrez votre montant: ");
	scanf("%f",&cmp[n].montant);
	n++;
	}
void Depot()
{
	//Versement
	char cin[10];
	printf("entrez votre cin :");
	scanf("%s",cin);
    int i;
    float x;
    for (i = 0; i <= n; i++)
    {
        if (strcmp(cin,cmp[i].cin) == 0)
        {   
        printf("entrez le solde :");
        scanf("%f",&x);
        cmp[i].montant += x;
        printf("nouveau montant est %g\n", cmp[i].montant);
       
        break;
        }
    }
}
void retrait()
{
	//Tiraje
	char cin[10];
	printf("entrez votre cin");
	scanf("%s",cin);
    int i;
    float x;
    for (i = 0; i <= n; i++)
    {
        if (strcmp(cin,cmp[i].cin) == 0)
        {   
        printf("donner moi une valeur");
        scanf("%f",&x);
        cmp[i].montant -= x;
        printf("nouveau montant est %g\n",cmp[i].montant);
        break;
        }
    
    }
}
void trieascendent(){
//Par Ordre Ascendent
client temps;
 int i,k;
 	for(i = 0; i < n; i++){
 	for(k=0;k<n-i-1;k++){
 	if (cmp[k].montant > cmp[k + 1].montant){
 	temps=cmp[k];
    cmp[k] =cmp[k + 1];
    cmp[k + 1] = temps;	
	 }
	  }
	 }
	 for(i=0;i<n;i++){
	 	printf("donner moi les comptes par ascendent %s\t%s\t%s\t%f\n",cmp[i].nom,cmp[i].prenom,cmp[i].cin,cmp[i].montant);
	 }
 
}
void affichage(){
	int i;
	printf("affichez le comptes\n");
	for(i=0;i<n;i++){
		printf("_________________________\n");
		printf("cin:%s\n",cmp[i].cin);
		printf("nom:%s\n",cmp[i].nom);
		printf("prenom:%s\n",cmp[i].prenom);
		printf("montant:%f\n",cmp[i].montant);
		printf("_________________________\n");
		
	}
}
void triedescendent(){
//Par Ordre Descendent
client temps;
 int i,k;
 	for(i = 0; i < n; i++){
 	for(k=0;k<n-i-1;k++){
 	if (cmp[k].montant < cmp[k + 1].montant){
 	temps=cmp[k];
    cmp[k] =cmp[k + 1];
    cmp[k + 1] = temps;	
	 }
	  }
	 }
	 for(i=0;i<n;i++){
	 	printf("donner moi les comptes par descendent %s\t%s\t%s\t%f\n",cmp[i].nom,cmp[i].prenom,cmp[i].cin,cmp[i].montant);
	 }
 
}
		
int main(){
	int choix,i,y;
	do{
	printf("\t\t\t\t\t1-introdruire compte client\n");
	printf("\t\t\t\t\t2-introduire plusieurs compte\n");
	printf("\t\t\t\t\t3-operation\n");
	printf("\t\t\t\t\t4-Affichage\n");
	printf("\t\t\t\t\t5-fidelisation\n");
	printf("\t\t\t\t\t6-Quittez l application\n");
    printf("\t\t\t\t\tentrez votre choix\n");
    scanf("%d",&choix);
    switch(choix){
    	case 1:
    	printf("introdruire compte client\n");
    	introuduire_compte();
    	

		
	
		break;
		case 2:
	    //Creation Plusieurs Compte Bancaire
		printf("introduire plusieurs compte\n");
		printf("entrez nombre des comptes\n");
		scanf("%d",&y);
        for(i=0;i<y;i++){
        introuduire_compte();
        }
        system("cls");
        affichage();
	
		break;
		case 3:
		//Operation : Versement Et Tiraje	
		{ int choix1;
		printf("1-depot\n");
		printf("2-retrait\n");
		printf("entrer votre choix \n");
		scanf("%d",&choix1);
				  
		switch(choix1)
		{
		case 1:
		{ Depot();
		break;
		}
		case 2:{
		retrait();
		break;
		}		
		}
		break;	
		}
		
		
		
		
	
		case 4:
		printf("Affichage\n");
		printf("1-ascendent\n");
		printf("2-descendent\n");
		int choix;
		scanf("%d",&choix);
		switch(choix){
			case 1:
			trieascendent();
			break;
			case 2:
			triedescendent();
			break;	
		}
	    
	    
	    
	    
		break;
		case 5:
		printf("fidelisation");
		break;
		case 6:
		printf("Quittez l application");
				    				
	}}while (choix!=0);

    
	


	return 0;
}



