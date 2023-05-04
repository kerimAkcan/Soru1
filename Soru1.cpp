#include<stdio.h>
#define max_boyut 100
main(){
	int diziBoyut[max_boyut];
	int elemanSay[max_boyut];
	
	int size, i, count,j;
	
	printf("Dizi boyutu girin:");
	scanf("%d", &size);
	
	if(size <=0){
		printf("lutfen pozitif deger girin");
	}
	
	for(i =0; i<size; i++){
		printf("Dizi elemanlarýný giriniz:");
		scanf("%d", &diziBoyut[i]);
	}
	
	for (i = 0; i < size; i++) {
        count = 1;
        for (j = i + 1; j < size; j++) {
            if (diziBoyut[i] == diziBoyut[j]) {
                count++;
               	elemanSay[j] = 0;
            }
        }

        if (elemanSay[i] != 0) {
           	elemanSay[i] = count;
        }
    } 

    for (i = 0; i < size; i++) {
        if (elemanSay[i] != 0) {
            printf("\n eleman: %d, \n eleman sayýsý: %d", diziBoyut[i], elemanSay[i]);
        }
    }
	
}
