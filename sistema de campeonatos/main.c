#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    typedef struct tipo_tecnico {
        char nome[51], sobrenome[51], nacionalidade[21];
    }Tecnico;

    typedef struct tipo_time {
        char nome[31];
        int qtd_vitorias, qtd_empates, qtd_derrotas;
        Tecnico tecnico;
    }Time;

    typedef struct tipo_campeonato {
        char nome[51], usuario[31], senha[11];
        Time times[5];
    }Campeonato;


    int op, i;
    Campeonato campeonato[5];

    char nome[51];

    for (i=0; i<5; i++){
        strcpy(time[i].nome, "");
    }

    do{
        printf("######CAMPEONATO######\n\n");
        printf("1 - Cadastrar Time:\n");
        printf("2 - Localizar Time:\n");
        printf("3 - Listar Times:\n");
        printf("4 - Alterar Time:\n");
        printf("5 - Excluir Time:\n");
        printf("6 - Agendar Partida:\n");
        printf("7 - Jogar Partida:\n");
        printf("0 - Sair:\n");
        printf("OPCAO:\n");
        scanf("%i", &op);

        switch(op){
            case 1:
                printf("#####CADASTRAR#####\n\n");
                for(i=0; i<5; i++);{
                    if(strcmp(campeonato.time[i].nome, "")==0){
                       break;
                    }
                }

                printf("NOME:\n");
                fgets(campeonato.time[i].nome, 51, stdin);
                printf("TECNICO:\n");
                fgets(campeonato.time[i].tecnico.nome, 51, stdin);
                campeomato.time[i].vitorias = 0;
                campeomato.time[i].empates = 0;
                campeomato.time[i].derrotas = 0;

                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                break;

            case 6:
                break;

            case 7:
                break;

            default;



        }

    }while(op!=0);



    return 0;
}
