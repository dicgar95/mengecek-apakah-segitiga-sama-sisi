#include <stdio.h>

int main(){
  int sisi1,sisi2,sisi3;
  printf("program mengetahui segitiga sama sisi atau bukan\n");
  printf("masukan sisi ke 1 :");
  scanf("%d",&sisi1 );
  printf("masukan sisi ke 2 :");
  scanf("%d",&sisi2 );
  printf("masuka sisi ke 3 :");
  scanf("%d",&sisi3 );
  if (sisi1==sisi2&&sisi2==sisi3) {
    /* code */printf("segitiga sama sisi\n");
  } else
    /* code */printf("bukan segitiga sama sisi\n");

}
