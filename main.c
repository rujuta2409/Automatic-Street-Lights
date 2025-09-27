#include<stdio.h>

void main() {
    int lux;
    printf("Enter intensity of light:-");
    scanf("%d",&lux);
    printf("Entered value of intensity is %d\n",lux);
    if(lux<40){
        printf("Lights ON");
    
    }
    else{
        printf("Lights OFF");
    }
}
