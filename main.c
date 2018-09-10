#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, x,aux,cont1=0,cont2=0, h=0, cont=0;
	int tam=0,moda=0;
	float media=0,mediana=0, total=0;
	int maioratt = 0, contmax = 0;
	printf("Digite o tamanho do vetor \n");
	scanf("%d",&tam);
	int vet[tam];
	int vetm [tam];


	for(i=0;i<tam;i++){
	printf("Digite os valores que serao inseridos no vetor\n");
	scanf("%d",&vet[i]);
	
	}
//media
	system("cls");
	for(i=0;i<tam;i++){
	total += vet[i];
}
	media=total/tam;
	printf("A Media e: %.2f\n ",media);
	
//1,2,3,4,5,6,7,8,9,10
//mediana	
	for(i=0;i<tam;i++){
    for(x=0;x<tam;x++){
        if(vet[i] < vet[x]){
                aux = vet[i];
                vet[i] = vet[x];
                vet[x] = aux;
            }
        }
    }
    //par
	if(tam%2 == 0){
    mediana = tam/2; 
	    //impar
		} else { 
	 mediana = (vet[tam/2+1]+vet[tam/2])/2;
    }    	
	printf("Mediana e: %.2f\n",mediana);
	
	//moda

    for (i = 0; i < tam; i++){
        cont = 0;

        for (x = 0; x < tam; x++){
            if (vet[x] == vet[i])
            cont++;
        }

        if (cont > contmax){
            contmax = cont;
            maioratt = vet[i];
        }
    }
    printf ("A moda e: %d", maioratt);
  

	





	
	return 0;
}
