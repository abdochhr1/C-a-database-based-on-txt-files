#include <stdio.h>

char nom[20] , prenom[20] , numero[20] ;



int addData(char nom[20] , char prenom[20] ,  char numero[20]) {
	
	
	FILE*  fichier =  NULL  ; 
	
	fichier = fopen("rep.txt" , "a") ; 
	
	rewind(fichier) ;  
	
	fprintf(fichier , "nom=%s\nprenom=%s\nnumero=%s\n" , nom , prenom , numero) ; 
	
	if (fichier != NULL ) {
		
		return 1 ; 
		
	}
	else {
		
		return 0 ; 
		
	}
	
}

int main() {

   int i = 0 ; 

   do {
    printf("Entrer un nom : \n") ;
    scanf("%s" , nom) ; 
    
    printf("Entrer un prenom !: \n") ; 
    scanf("%s" , prenom) ; 
    
    printf("Entrer le numero de telephone ! \n") ; 
    scanf("%s" , numero) ;
    
    addData(nom , prenom , numero) ; 
   i += 1 ; 
   }
   while (i!=2 ) ; 
    return 0 ; 
	
}
		
		
	
	
