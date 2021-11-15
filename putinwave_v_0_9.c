/******************************************************************************

                            PUTINWAVE STEGANOGRAPHY / PUT FILES IN .WAV FILES BY STEVE LITHIUM

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *wav, *tohide, *final;
char bit [1], bit2[1], byte[1], other[100];



int hide() {

    int a=0;
    long count, c=0;
	
	printf("Insert the size in byte for the file to hide:");
    scanf("%d", &count);
    printf("Reading file, please wait...\n");
    
    for (int b=0; b<44; b++) 
{
            fread(byte, 1, 1, wav);
	fwrite(byte, 1, 1, final);
	}
   

    while (c<count) 
{
        if (a!=100000)
{ 
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
                fread(bit, 1, 1, wav);
                fread(bit2, 1, 1, tohide);
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
    };



int extract() {
    int a=0;
    long count, c=0;

printf("Insert the size in byte for the file to extract:");
scanf("%d", &count);
printf("Extracting file... please wait...\n");

	for (int b=0; b<44; b++) {
			fread(byte, 1, 1, wav);
}

	while (c<count) {
	if (a!=100000) {
		fread(bit, 1, 1, wav);
	a++;
	} else {
	if (count-c>100) {
	fread(other, 100, 1, wav);
	fwrite(other, 100, 1, tohide);
	a=0;
	c=c+100;;
	} else {
	fread(bit, 1, 1, wav);
	fwrite(bit, 1, 1, tohide);
	a=0;
	c++; }}}
};



int main(int argc, char *argv[]) {
if (argc!=4) {
	printf("\nputinwave v. 1.0 by steve_lithium \n\
	usage: putinwave.exe -[a/e] file.wave file.ext\n \
	-a : add file to file.wav.\n \
		example: kgb.exe -a file.wav hide.zip\n\
	-e : extract file from file.wav\n\
		example: putinwave.exe -e file.wav hide.zip\n");
	exit(0); }

if (strcmp(argv[1], "-a")==0) {
	wav = fopen(argv[2], "rb");
	tohide = fopen(argv[3], "rb");
	final = fopen("putinwave.wav", "wb");
	hide(); 
} else if (strcmp(argv[1], "-e")==0) {
	wav = fopen(argv[2], "rb");
	tohide = fopen(argv[3], "wb");

	extract();
} else {

	printf("\nSyntax error!"); 
exit(0); }
}




 
