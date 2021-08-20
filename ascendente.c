# include <stdio.h>

unsigned long tiempo = 0;

// Se calculó una acción irelevante que tuviera un retraso aproximado de 1ms
// Esto se realizó en otro código que se encuentra en el siguente repositorio 
// https://github.com/Vivanco443/c_basics_millis.git 

void retraso(int ciclos){
    double sum = 0;
    double add = 1;
    int iterations = 1000*100*ciclos;
    for (int i=0; i<iterations; i++) {
        sum += add;
        add /= 2.0;
    }
}


int main(){
    int repeticiones = 100;
    while(repeticiones != 100){
        printf("0000\n");
        retraso(200);
        printf("0001\n");
        retraso(200);
        printf("0010\n");
        retraso(200);
        printf("0100\n");
        retraso(200);
        printf("1000\n");
        retraso(200);
    }
    return 0;
}