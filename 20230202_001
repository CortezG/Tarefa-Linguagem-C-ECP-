#include <stdio.h>
#include <string.h>

#define MAX_NOME 120
#define MAX_EQUIPE 20
#define MAX_INTEGRANTES 4

struct Aluno {
char nome[MAX_NOME];
char sobrenome[MAX_NOME];
};

struct Equipe {
struct Aluno integrantes[MAX_INTEGRANTES];
};

int main() {
struct Equipe equipes[MAX_EQUIPE];
int numeroDeEquipes = 0;

// Armazenar equipes e integrantes durante a execução do programa
while (numeroDeEquipes < MAX_EQUIPE) {
    printf("Informe o nome da equipe %d: ", numeroDeEquipes + 1);
    for (int i = 0; i < MAX_INTEGRANTES; i++) {
        printf("Informe o nome do integrante %d: ", i + 1);
        scanf("%s", equipes[numeroDeEquipes].integrantes[i].nome);
        printf("Informe o sobrenome do integrante %d: ", i + 1);
        scanf("%s", equipes[numeroDeEquipes].integrantes[i].sobrenome);
    }
    numeroDeEquipes++;
}

// Procurar equipe de um determinado aluno
char nomeDoAluno[MAX_NOME];
printf("Informe o nome do aluno: ");
scanf("%s", nomeDoAluno);

int equipeEncontrada = -1;
for (int i = 0; i < numeroDeEquipes; i++) {
    for (int j = 0; j < MAX_INTEGRANTES; j++) {
        if (strcmp(equipes[i].integrantes[j].nome, nomeDoAluno) == 0) {
            equipeEncontrada = i;
            break;
        }
    }
    if (equipeEncontrada != -1) {
        break;
    }
}

if (equipeEncontrada == -1) {
    printf("Nenhum aluno encontrado com o nome informado.\n");
} else {
    printf("O aluno faz parte da equipe %d.\n", equipeEncontrada + 1);
}

return 0;
}
