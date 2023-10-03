#include <stdio.h>

int main()
{

    int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, nulo = 0, branco = 0, voto = 10;

    printf("________________\n");
    printf("Contabilizacao dos votos: \n");

    do
    {
        voto = 10;
        printf("________________\n");    

        printf("Candidato votado: ");
        scanf("%d", &voto);

        switch (voto)
        {
        case 1:
            cand1++;
            printf("Voto contabilizado para candidato: 1 \nTotal de votos: [%i]\n", cand1);
            break;

        case 2:
            cand2++;
            printf("Voto contabilizado para candidato: 2 \nTotal de votos: [%i]\n", cand2);
            break;

        case 3:
            cand3++;
            printf("Voto contabilizado para candidato: 3 \nTotal de votos: [%i]\n", cand3);
            break;

        case 4:
            cand4++;
            printf("Voto contabilizado para candidato: 4 \nTotal de votos: [%i]\n", cand4);
            break;

        case 5:
            nulo++;
            printf("Voto contabilizado para candidato: VOTO NULO \nTotal de votos: [%i]\n", nulo);
            break;

        case 6:
            branco++;
            printf("Voto contabilizado para candidato: VOTO EM BRANCO \nTotal de votos: [%i]\n", branco);
            break;

        default:
            printf("[!] Voto nao contabilizado\n");
        }
    }

    while (voto != 0);
    printf("\n\nTotal de votos:\n");
    printf("-----------------\n");

    printf("Candidato 1: [%i]", cand1);
    printf("\nCandidato 2: [%i]", cand2);
    printf("\nCandidato 3: [%i]", cand3);
    printf("\nCandidato 4: [%i]", cand4);
    printf("\nNulos: [%i]", nulo);
    printf("\nEm branco: [%i]", branco);

    return 0;
}