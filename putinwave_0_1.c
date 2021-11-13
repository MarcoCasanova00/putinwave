/******************************************************************************

                            KGB STENOGRAPHY

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *wav, *tohide, *final;
char bit [1], bit2[1], byte[1], other[100];

int hide () {
    int a=0;
    long count, c=0;
    scanf("%d", &count);
    printf("Reading file, please wait...\n");
    
    for (int b=0; b<44;b++) {
            fread(byte, 1, 1, final);
    }
    while (c<count) {
        if (a!=100000) {
            fread(bit, 1, 1, wav);
            fwrite(bit, 1, 1, final);
            a++;
        } else {
            if (count-c>100) {
                fread(other, 100, 1, wav);
                fread(other, 100, 1, tohide);
                fwrite(other, 100, 1, final);
                a=0;
                c=c+100;
            }
            else {
                fread(bit,1, 1, wav);
                fread(bit2 1, 1, tohide);
                fwrite(bit2, 1, 1, final);
                a=0;
                c++;
            }
        }
    }
    while (!feof(wav)) {
        fread(bit, 1, 1, wav);
        fwrite(bit, 1 , 1, final);
    }
];

int extract() {
    int a=0;
    long count, c=0;
    
}
    }
            }
            }
        }
    }
    }
}

