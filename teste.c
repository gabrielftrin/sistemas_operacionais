#include <stdio.h>
#include <time.h>

int main ( ) {
    printf("Digite o tempo de execução dos 4 processos, respectivamente.\n");
    int qtde=4;//Quantidade de processos
    int i = 1;
    int a,b,c,d,tempo,turna, turnb, turnc,turnd, menorexec;
    int processos[5];
    /* for (contador,condição,(caso afirmativo, continua),incrementação)
    {..código...} */
    scanf("%d", &processos[0]);
    printf("Você digitou %d \n", processos[0]);
    scanf("%d", &processos[1]);
    printf("Você digitou %d \n", processos[1]);
    scanf("%d", &processos[2]);
    printf("Você digitou %d \n", processos[2]);
    scanf("%d", &processos[3]);
    printf("Você digitou %d \n\n", processos[3]);
    printf("Tempo de execução dos processos %d, %d, %d, %d. \n\n", processos[0], processos[1], processos[2], processos[3]);
    printf("=============================================\n");
    printf("=============================================\n\n");
    printf("Vamos agora iniciar o escalonamento dos processos. \nEscolha o algoritmo desejado.\n\n");
    printf("1 - FIFO\n");
    printf("2 - SJF\n");
    printf("3 - Round Robin\n");
    printf("4 - EDF\n\n");
    int algoritmo;
    scanf("%d", &algoritmo);
    switch (algoritmo) {
            case 1:
                printf("Você escolheu o FIFO!!\n\n");
                turna=processos[0];
                turnb=processos[0]+processos[1];
                turnc=processos[0]+processos[1]+processos[2];
                turnd=processos[0]+processos[1]+processos[2]+processos[3];
                printf("Tempo médio de resposta do processo A: %d.\n", turna);
                printf("Tempo médio de resposta do processo B: %d.\n", turnb);
                printf("Tempo médio de resposta do processo C: %d.\n", turnc);
                printf("Tempo médio de resposta do processo D: %d.\n", turnd);
                break;
            case 2:
                printf("Você escolheu o SJF!!\n");
                menorexec = processos[0];
                for (i=1;i<= qtde-1;)
                {
                    for (j=(i+1);j > qtde ;j++)
                    {
                        if (processos[i] > processos[j])
                        {
                            menorexec = processos[j];
                        }
                        else
                        {
                            menorexec = processos[i];
                        }







                menorexec=processos[0];
                int cont=0;
                for (i=1;i<5;i++)
                {
                    if (processos[cont] < menorexec) {
                        menorexec = processos[cont];
                    }
                    cont++;
                }
                int vetor [100];
                vetor[0]=menorexec;
                switch (menorexec){
                    case processos[0]:
                        cont=1;
                        for (i=1;i<5;i++)
                        {
                        if (processos[cont] < menorexec) {
                            menorexec = processos[cont];
                        }
                        cont++;
                        }
                }

                printf("MENOR TEMPO EXEC PROCESSO %d\n\n\n", menorexec);

                printf("Tempo médio de resposta do processo A: %d.\n", turna);
                printf("Tempo médio de resposta do processo B: %d.\n", turnb);
                printf("Tempo médio de resposta do processo C: %d.\n", turnc);
                printf("Tempo médio de resposta do processo D: %d.\n", turnd);
                break;
            case 3:
                printf("Você escolheu o Round Robin!!\n");
                break;
            case 4:
                printf("Você escolheu o EDF!!\n");
                break;
            default:
                printf("Programa encerrado.\n");
    }
}
