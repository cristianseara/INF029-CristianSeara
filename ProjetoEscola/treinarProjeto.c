#include <stdio.h>
#define TAM_ALUNO 3

int main(){

    int sair = 0;
    int listarAluno [TAM_ALUNO];
    int opcao;
    

    while(!sair){

    printf("\n.....Escola Projeto......\n");
    printf(" 0 - Sair\n");
    printf(" 1 - Aluno\n");
    printf(" 2 - Professor\n");
    printf(" 3 - Disciplina\n");

    scanf("%d", &opcao);

    switch(opcao){
        case 0:{
            sair = 1;
            break;
        }
        case 1:{
            printf("Modulo Aluno\n");
            int sairAluno = 0;
            int opcaoAluno;

            while(!sair){
              
                printf(" 0 - Voltar Aluno\n");
                printf(" 1 - Cadastrar Aluno\n");
                printf(" 2 - Listar Aluno\n");
                printf(" 3 - Atualizar Aluno\n");
                printf(" 4 - Excluir Aluno\n");

                scanf("%d",&opcaoAluno);

                switch(opcaoAluno){
                    case 0:{
                        sairAluno = 1;
                        break;
                    }
                    case 1:{
                        printf(" Cadastrar Aluno\n");
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
                        printf(" Excluir Aluno\n");
                        break;
                    }
                    default:{
                        printf ("opcao invalida\n");
                        break;
                    }
                }
            }

            break;
        }
        case 2:{
            printf("Modulo Professor\n");
            break;
        }
        case 3:{
            printf("Modulo Disciplina\n");
            break;
        }
        default:{
            printf("opcao invalida\n");
            break;
        }
    }
}



    return 0;
}