#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, n, k = 0;
int pos1, pos2, pos3, pos4;
int maior = 0, maior2 = 0, maior3 = 0, maior4 = 0;
char nomes[23][20]={"Hugo Souza", "Matheus Cunha", "Santos", "Cleiton", "Fabricio Bruno", "Pablo", "Matheuzinho", "Varela", "Filipe Luis", "Ayrton Lucas", "Arturo Vidal", "Thiago Maia", "Erick", "Gerson", "Everton Ribeiro", "De Arrascaeta", "Victor Hugo", "Matheus Franca", "Gabigol", "Bruno Henrique", "Pedro", "Marinho", "Everton"};
char funcao[23][20]= {"Goleiro", "Goleiro", "Goleiro", "Defesa", "Defesa", "Defesa", "Defesa", "Defesa", "Defesa", "Defesa", "Meio", "Meio", "Meio", "Meio", "Meio", "Meio", "Meio", "Meio", "Ataque", "Ataque", "Ataque", "Ataque", "Ataque"};
int nota[23]={8, 7, 9, 8, 7, 6, 7, 10, 9, 6, 7, 8, 10, 9, 9, 8, 8, 9, 7, 9, 8, 9, 9};


for (i = 0; i < 3; i++){
  if (nota[i] > maior){
    maior = nota[i];
  }
}

for (i = 0; i < 3; i++){
    if (nota[i] == maior){
        pos1 = i;
    }}
printf("Goleiro:\n%s - nota: %d\n", nomes[pos1], maior);



maior = 0;
maior2 = 0;
maior3 = 0;
maior4 = 0;

for (n = 0; n< 5; n++){
    for (i = 3; i < 10; i++){
        if (nota[i] > maior){
            maior = nota[i];
        }
        if(nota[i] > maior2 && nota[i] != maior){
            maior2 = nota[i];
        }
        if (nota[i]>maior3 && nota[i]!= maior && nota[i] != maior2){
            maior3 = nota[i];
        }
        if (nota[i]> maior4 && nota[i]!= maior && nota[i]!= maior2 && nota[i]!= maior3){
            maior4 = nota[i];
        }
}   }
    for (i = 3; i < 10; i++){
        if (nota[i] == maior){
            p1 = i;
        }
        if (nota[i] == maior2 && nota[i]!= maior){
            p2 = i;
        }   
        if (nota[i] == maior3 && nota[i]!= maior && nota [i] != maior2){
        p3 = i;
        }
        if (nota[i] == maior4 && nota[i]!= maior && nota [i] != maior2 && nota[i] != maior3){
            p4 = i;
        }
}

printf("\nDefesa: \n");
printf("%s - nota: %d\n", nomes[pos1], maior);
printf("%s - nota: %d\n", nomes[pos2], maior2);
printf("%s - nota: %d\n", nomes[pos3], maior3);
printf("%s - nota: %d\n", nomes[pos4], maior4);



maior = 0;
maior2 = 0;
maior3 = 0;
maior4 = 0;

for (n = 0; n< 5; n++){
    for (i = 10; i < 17; i++){
        if (nota[i] > maior){
            maior = nota[i];
        }
        if(nota[i] > maior2 && nota[i] != maior){
            maior2 = nota[i];
        }
        if (nota[i]>maior3 && nota[i]!= maior && nota[i] != maior2){
            maior3 = nota[i];
        }
        if (nota[i]> maior4 && nota[i]!= maior && nota[i]!= maior2 && nota[i]!= maior3){
            maior4 = nota[i];
        }
}   }
for (i = 10; i < 17; i++){
    if (nota[i] == maior){
        pos1 = i;
    }
    if (nota[i] == maior2 && nota[i]!= maior){
        pos2 = i;
    }
     if (nota[i] == maior3 && nota[i]!= maior && nota [i] != maior2){
        pos3 = i;
    }
    if (nota[i] == maior4 && nota[i]!= maior && nota [i] != maior2 && nota[i] != maior3){
        pos4 = i;
    }
}

printf("\nMeio: \n");
printf("%s - nota: %d\n", nomes[p1], maior);
printf("%s - nota: %d\n", nomes[p2], maior2);
printf("%s - nota: %d\n", nomes[p3], maior3);
printf("%s - nota: %d\n", nomes[p4], maior4);



maior = 0;
maior2 = 0;
maior3 = 0;
maior4 = 0;

for (n = 0; n< 3; n++){
for (i = 17; i < 23; i++){
    if (nota[i] > maior){
        maior = nota[i];
    }
    if(nota[i] > maior2 && nota[i] != maior){
        maior2 = nota[i];
    }
    if (nota[i]>maior3 && nota[i]!= maior && nota[i] != maior2){
        maior3 = nota[i];
    }
    if (nota[i]> maior4 && nota[i]!= maior && nota[i]!= maior2 && nota[i]!= maior3){
        maior4 = nota[i];
    }
}}
for (i = 17; i < 24; i++){
    if (nota[i] == maior){
        pos1 = i;
    }
    if (nota[i] == maior2 && nota[i] != maior){
        pos2 = i;
    }

}

printf("ataque: \n");
printf("%s - nota: %d\n", nomes[pos1], maior);
printf("%s - nota: %d\n", nomes[pos2], maior2);



    return 0;
}
