int validarCPF(char *cpf, int tam) {
    int i, j;
    int num[11];
    int soma1, soma2, flag;
    float resto1, resto2;

    // verificar se cpf tem 11 digitos
    if (tam != 11) {
        return 0;
    }

    // verificar se todos os caracteres sao numeros
    for (i = 0; i < tam; i++) {
        if (cpf[i] < 48 || cpf[i] > 57) {
            return 0;
        }
    }

    // transformar a string em vetor de inteiro
    for (i = 0; i < tam; i++) {
        num[i] = cpf[i] % 48;
    }

    //==========================================//
    //     Inicio calculo verificador cpf       //
    //==========================================//

    flag = 1;

    for (i = 0; i < tam - 1; i++) {
        if (num[i] != num[i + 1])
            flag = 0;
    }

    if (flag == 1) {
        return 0;

    } else {
        //calculo primeiro digito verificador
        for (int i = 0, j = 10; j >= 2; i++, j--) {
            soma1 += num[i] * j;
        }

        resto1 = (soma1 * 10) % 11;
    }

    //calculo segundo digito verificador
    for (i = 0, j = 11; j >= 2; i++) {
        soma2 += num[i] * j;

        j--;
    }

    resto2 = (soma2 * 10) % 11;

    // converter digito verificador para 0 se necessario.
    if (resto1 == 10) {
        resto1 = 0;
    }
    if (resto2 == 10) {
        resto2 = 0;
    }

    // retornar resultado final
    if (resto1 == num[9] && resto2 == num[10]) {
        return 1;
    } else {
        return 0;
    }
}