#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  char nom[20] , nom1[20] , prenom[20] , prenom1[20] , numero[20] ;

  FILE* fichier ; 
  
int len(char word[20]) {
	
	int len = 0  ; 
	
	while (word[len] != '\0'){
			
		len +=1 ;
			
	}
	
	return len ; 

}
	
int isEqual(char nom1[20] , char prenom1[20] , char nom[20] ,char prenom[20]){
	
	int i , n = 1 ; 
	
	for (i =  0 ; i < len(nom1) -1 ; i++ ){
		
		
		if (nom1[i] != nom[i]) {
			
			n = 0 ; 
			
			break ;
		}
			
	}
	
	
		  
	for (i = 0 ; i < len(prenom1) -1 ; i++){
  
        if (prenom1[i] != prenom[i]){
			
			n = 0 ; 
			
			break  ; 
		}		
	}
 
  return n ; 
  
 }

int search() {
	
	
	fichier = fopen("rep.txt" , "r") ; 
	
   do { 
	   
	fseek(fichier , -1 , SEEK_CUR)  ; 
     
    fseek(fichier , 4 , SEEK_CUR) ; 
    
    fgets(nom1 , 20 , fichier ) ; 
    
    fseek(fichier , 7 , SEEK_CUR) ;
    
    fgets(prenom1 , 20 , fichier) ; 
    
    fseek(fichier , 7 , SEEK_CUR) ;
    
    fgets(numero , 20 , fichier) ;
    
    
	

	} while( (isEqual(nom1 , prenom1 , nom , prenom) != 1 ) &&  fgetc(fichier) != EOF  ) ;
	
	

   return 0 ; 
   
 }

int main() {
	
	
	printf("entrer le nom a chercher ! \n") ; 
	scanf("%s" , nom) ; 
	
	printf("Entrer le prenom a chercher ! \n") ; 
	scanf("%s" , prenom) ; 
	
    search() ; 
		
		
	if (isEqual(nom1 , prenom1 , nom , prenom))	 {
		
		printf("Le numero de %s %s est : %s" , prenom , nom , numero)  ; 
		
	}
	
	else {
		
		
		printf("Aucun numero correspond a ces information ! \n") ; 
	}
			
}
