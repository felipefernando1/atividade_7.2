#include <stdio.h>

typedef struct {
    char nome[30];
    float n1, n2, n3;
} Aluno;

int main() {
    Aluno alunos[3];
    float media, maiorMedia = 0.0;

    alunos[0] = (Aluno){"João", 7.5, 8.0, 9.0};
    alunos[1] = (Aluno){"Maria", 6.0, 7.5, 8.5};
    alunos[2] = (Aluno){"Pedro", 9.0, 8.5, 7.0};

    for (int i = 0; i < 3; i++) {
        media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3.0;

        if (media > maiorMedia) {
            maiorMedia = media;
        }
    }
    printf("Maior média: %.2f\n", maiorMedia);

    return 0;
}