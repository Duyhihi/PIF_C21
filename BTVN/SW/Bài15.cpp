#include <stdio.h>

int main(){
	char data[44];
    int i;
	FILE *fptr ;
	fptr = fopen("sample.wav","r"); 
	fread(data,sizeof(int),44,fptr);	
    
    printf("Number of Channel = %d\n",data[23]*256 + data[22]);
    printf("Bits per sample = %d\n",data[35]*256 + data[34]);
    printf("Sample Rate = %dHz",data[27]*256*256*256 + data[26]*256*256+data[25]*256+data[24]);
    fclose(fptr);
    
}
