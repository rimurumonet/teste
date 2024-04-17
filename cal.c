#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu_mostrar(void);
int opt=-1;

int main(int argc, char *argv[]){
int num1, num2,result;
    do {
	menu_mostrar();
	scanf("%d", &opt);
	getchar();
	fflush(stdin);
		switch (opt){
			case 1:
				
                printf("digite um numero\n");
                scanf("%d",&num1);
   

                if (num1 > 0){
	 
                printf("digite um numero\n");
                scanf("%d",&num2);
 
                printf("resultado:\n %d\n",num1+num2);}
                else {
 	            printf("menor que zero\n");
	            }
	            break;
	                  case 2: 
	                         printf("digite um numero\n");
                scanf("%d",&num1);
   

                if (num1 > 0){
	 
                printf("digite um numero\n");
                scanf("%d",&num2);
 
                printf("resultado:\n %d\n",num1-num2);}
                else {
 	            printf("menor que zero\n");
	            }
	            break;
	                  case 3:
	                  	     printf("digite um numero para multiplicar:\n");
	                  	     scanf("%d",&num1);
	                  	     
	                  	          if(num1 > 0){
	                  	          	printf("digite o segundo número:\n");
	                  	          	scanf("%d",&num2);
	                  	          	
	                  	          	     printf("resultado:\n%d\n",num1*num2);
									}
									else {
 	            printf("menor que zero\n");
	            }break;
	            
	            case 4:{
	            	    printf("digite um numero para dividir:\n\n");
	            	    scanf("%d",&num1);
	            	    
	            	    if (num1 > 0){
	            	    	printf("digite o segundo numero:\n");
	            	    	scanf("%d",&num2);
	            	    	printf("resultado:\n%d",num1/num2);
						}
						else{
							printf("numero menor que zero!");
						}
	            	
					break;
				}
									}
	            }while (opt!=0);
	system("pause");
	return(0);
}

void menu_mostrar(void){

	printf("\n1 - soma");
	printf("\n2 - subtração");
	printf("\n3 - multiplicação");
	printf("\n4 - divisão");
	printf("\n0 - Sair...\n\n");}
