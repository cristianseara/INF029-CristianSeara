#include <stdio.h>
#define TAM_ALUNO 3

int main()
{
    int sair = 0;
    int listaAluno[TAM_ALUNO];
    int qtdAluno = 0;
    int opcao; 
    
    

    while(!sair){
        printf("\n....Projeto Escola....\n");
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
                
                    printf(" 0 - Voltar\n");
                    printf(" 1 - Cadastrar Aluno\n");
                    printf(" 2 - Listar Aluno\n");
                    printf(" 3 - Atualizar Aluno\n");
                    printf(" 4 - Excluir Aluno\n");
                    
                    scanf("%d", &opcaoAluno);
                    
                    switch(opcaoAluno){
                        case 0:{
                            sairAluno = 0;
                            break;    
                        }
                        case 1:{
                            printf(" Cadastrar Aluno\n");
                            int matricula;
                            printf("Digite a matricula\n");
                            scanf("%d",&matricula);
                            if(matricula < 0){
                                printf("matricula invalido\n");
                            }else{
                                if(qtdAluno == TAM_ALUNO){
                                printf("Listar de alunos cheia\n");
                                }else{
                                    listaAluno [qtdAluno] = matricula;
                                    qtdAluno ++;
                                }
                            }
                            break;    
                        }
                        case 2:{
                            printf(" Listar Aluno\n");
                            for(int i = 0; i < TAM_ALUNO; i++)
                            {
                                printf("matricula: %d\n", listaAluno[i]);
                            }
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
                            printf(" opcao invalido\n");
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
                printf("opcao invalido\n");
                break;
            }
        }
    }
    
    
    return 0;
}




