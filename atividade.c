#include <stdio.h>
#include <ctype.h>


struct ficha_de_heroi
{
    char nome[70];
	char identidade_secreta[50];
	char principal_poder[50];
	float altura;
	char indice_de_forca[50];
	char base_de_operacao[50];
	char grupo_afiliado[50];
};

int main(){
	int cont=0;
	char opt;
	FILE *farq;
	
	struct ficha_de_heroi valaheroi;
	
	
	while(1){
		cont++;
		printf("\theroi %d\n",cont);
		printf("Digite o nome do heroi: ");
		scanf("%s",&valaheroi.nome);
		printf("Digite a identidade secreta: ");
		scanf("%s",&valaheroi.identidade_secreta);
		printf("Digite a principal poder: ");
		scanf("%s",&valaheroi.principal_poder);
		printf("Digite a altura: ");
		scanf("%f",&valaheroi.altura);
		printf("Digite a indice de forca: ");
		scanf("%s",&valaheroi.indice_de_forca);
		printf("Digite a base de operacao: ");
		scanf("%s",&valaheroi.base_de_operacao);
		printf("Digite a grupo afiliado: ");
		scanf("%s",&valaheroi.grupo_afiliado);
		printf("=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=");
		printf("Quer continuar?[s/n]");
		scanf("%c",&opt);
		
	
	
	
	laco= ("     HEROI 1    \n"+valaheroi.nome + "\n"+valaheroi.identidade_secreta +"\n "+valaheroi.principal_poder+"\n"+valaheroi.altura+"\n"+valaheroi.indice_de_forca+"\n"+valaheroi.base_de_operacao+"\n"+valaheroi.grupo_afiliado+"\n");
	
	farq = fopen("arquivo.txt", "r+");
	
	if (farq == NULL)   // <---- Testa se o arquivo foi aberto corretamente.
	{
	    farq = fopen("arquivo.txt", "w+");
	    return;
	}else{
		farq = fopen("arquivo.txt", "a+");
	}
	
	r = fputs(laco,farq)	
	
   {
       printf("Erro ao tentar gravar os dados! \n");
   }
   else
     {
        printf("Dados gravados com sucesso. \n");
     }
		
	
	
	
	fclose(pont_arq);
		
	if(tolower(opt)=='n'){
		break;
	}
		
	}
	
}

