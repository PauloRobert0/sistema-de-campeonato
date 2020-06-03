#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    typedef struct tipo_tecnico {
        char nome[51], sobrenome[51], nacionalidade[21];
    }Tecnico;

    typedef struct tipo_times {
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
        strcpy(campeonato->times[i].nome, "");
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
        setbuf(stdin, NULL);

        switch(op){
            case 1:
                system("cls");
                printf("#####CADASTRAR TIME#####\n\n");
                for(i=0; i<5; i++);{
                    if(strcmp(campeonato->times[i].nome, "")==0){
                       break;
                    }
                }

                printf("NOME:\n");
                fgets(campeonato->times[i].nome, 51, stdin);


                printf("\n#####CADASTRAR TECNICO#####\n");

                printf("\nTECNICO:\n");
                fgets(campeonato->times[i].tecnico.nome, 51, stdin);
                printf("\nSOBRENOME:\n");
                fgets(campeonato->times[i].tecnico.sobrenome, 51, stdin);
                printf("\nNACIONALIDADE:\n");
                fgets(campeonato->times[i].tecnico.nacionalidade, 21, stdin);
                campeonato->times[i].qtd_vitorias=0;
                campeonato->times[i].qtd_empates=0;
                campeonato->times[i].qtd_derrotas=0;
                system("cls");

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

        }

    }while(op!=0);



    return 0;
}
