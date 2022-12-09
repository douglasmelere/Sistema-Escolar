#include <stdio.h>
#include <stdlib.h>

void sistemaescolar(){    
char nome[35];
int codigo;
int k;
int num1, num2, num3, num4;
int media, soma;
int menu;

 do{
       printf("Digite 1 para cadastrar o aluno\n");
       printf("Digite 2 para cadastrar as notas do aluno\n");
       printf("Digite 3 para fazer a média\n");
       scanf("%i", &k);
    
       switch(k){
            
       case 1:
    
       printf("Digite o nome do seu aluno\n");
       scanf("%s", &nome);
       printf("Digite o codigo do aluno (8 digitos)\n");
       scanf("%i", &codigo);    
    
            
       printf("O nome do aluno é: %s\n", nome);
       printf("O codigo do aluno é: %i\n", codigo);   
       break;
    
       case 2:
            
       printf("Digite as 4 notas do aluno\n");
       scanf("%i", &num1);
       scanf("%i", &num2);
       scanf("%i", &num3);       
       scanf("%i", &num4);           
       break;  
        
       case 3:
       printf("O nome do seu aluno é: %s", nome);
       printf("\nO codigo do seu aluno é: %i\n", codigo); 
       printf("A nota 1 do aluno é: %i\n", num1);
       printf("A nota 2 do aluno é: %i\n", num2);
       printf("A nota 3 do aluno é: %i\n", num3);
       printf("A nota 4 do aluno é: %i\n", num4);
       soma=num1+num2+num3+num4;
       media=soma/4;
       printf("A media do seu aluno é: %i\n", media);      
       break;
}            
       printf("Se deseja usar o menu novamente digite um numero diferente de 13\n");
       scanf("%i", &menu);
       }while(menu !=13);

}

int main(){
 
sistemaescolar();
    
return 0;
    
}
