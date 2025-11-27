#include <stdio.h>
#define TAM_ALUNO 3

    int main()
{
    int listaAluno[TAM_ALUNO];
    int opcao;
    int qtdAluno;
    int sair = 0; //falso
   
   while (!sair){
    printf("projeto escola\n");
    printf("0 - sair\n");
    printf("1 - aluno\n");
    printf("2 - professor\n");
    printf("3 - discplina\n");    
    
    scanf("%d",&opcao);
    
    switch (opcao){
        case 0:{
            sair = 1;
            break;
        }case 1:{
            printf("Módulo aluno\n");
            int opcaoAluno;
            int sairAluno = 0;

        while (!sair){
            printf(" 0 - Voltar\n");
            printf(" 1 - Casdaeter Aluno\n");
            printf(" 2 - Listar Aluno\n");
            printf(" 3 - Atualizar Aluno\n");
            printf(" 4-  Escluir Aluno\n"); 
            scanf(%d,&opcaoAluno);

            switch (opcaoAluno){
                case 0:{
                sairAluno = 1;
                break;
        }
        case 0:{
                sairAluno = 1;
                break;
        }
        case 1:{
                printf(" Casdaeter Aluno\n");
                printf(" Digite matricula\n");

                break;
        }
        case 2:{
                printf(" Listar Aluno\n");
                break;
        }
        case 3:{
                printf(" Atualizar Aluno\n");
                break;
        }
        case 4:{
                printf(" Escluir Aluno\n");
                break;
        }
        default:{
            printf ("opcão Inválida\n");
        }
    }
}
            

            break;
        }case 2:{
            printf("Módulo professor\n");
            break;
        }case 3:{
            printf("Módulo discplina\n");;
            break;
        }
        default:{
            printf ("opcão Inválida\n");
        }
    }
}
    
    
    
    
    
    
    
    
    return 0;
}