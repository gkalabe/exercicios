#include <stdio.h>
#include <stdlib.h>
    int main(){

        
        if (idade<0){
            printf("Nao Nascido\n");
        }else{
            if(idade<16){
                printf("Não Vota\n");
            }else{
                if(idade<18){
                    printf("Voto Opcional\n");
                }else{
                    if(idade<65){
                        printf("Voto Obrigatorio\n");
                    }else{
                        if(idade==41){
                            printf("Nao Vota - Ganha premio\n");
                        }else{
                            printf("Obrigatorio\n");
                        }
                        }else{
                            if(idade==88){
                                printf("Nao Vota - Ganha premio\n");
                            }else{
                                printf("Voto Opcional\n");
                            }
                        }

                    }
                }
            }
        }


        return 0;

    }