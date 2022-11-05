#include <stdio.h>
#include <string.h>

//Declaração da Estrutura Faculdade
typedef struct{
    char nome_faculdade[20];
    char cod_faculdade[20];
    // Declaração da Estrutura Estudante
    struct Estudante{
        char estudante_id[2][20];
        char nome[2][20];
        char matricula[2][20];
        }aluno;
    }Faculdades;
int main(){

    Faculdades facul[3];

    int m=0;

    for(int i =0; i <3;i++){
        for( int j=0 ; j<2;j++){
            printf("----FACULDADE %d----\n",i+1);
            printf("Nome da Faculdade? ");
            scanf("%s",facul[i].nome_faculdade);
            fflush(stdin);
            printf("Codigo da faculdade? ");
            scanf("%s",facul[i].cod_faculdade);
            fflush(stdin);
            printf("\tId do Estudante? ");
            scanf("%s",facul[i].aluno.estudante_id[j]);
            fflush(stdin);
            printf("\tNome Estudante: ");
            scanf("%s",facul[i].aluno.nome[j]);
            fflush(stdin);
            printf("\tMatricula: ");
            scanf("%s",facul[i].aluno.matricula[j]);
            fflush(stdin);

        }
    }
    for(int l =0; l <3;l++){
                for( int h=0 ; h<2;h++){

            printf("---------------------------------------------------\n");

            printf("Nome da Faculdade: %s\n",facul[l].nome_faculdade);
            printf("Codigo da faculdade: %s\n",facul[l].cod_faculdade);
            printf("Id Estudante: %s\n",facul[l].aluno.estudante_id[h]);
            printf("Nome Estudante: %s\n",facul[l].aluno.nome[h]);
            printf("Matricula: %s\n",facul[l].aluno.matricula[h]);
            printf("---------------------------------------------------\n");
        }
    }
}
