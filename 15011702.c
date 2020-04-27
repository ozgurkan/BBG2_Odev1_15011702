#include <stdio.h>
#include <stdlib.h>

int main()
{
            int diziboyu,eleman,toplam=0;  //deðiþkenler alındı
            int *array1;

            printf("Dizinin boyutunu giriniz:");//dizi boyu alndı
            scanf("%d",&diziboyu);

            array1 = (int*)malloc(sizeof(int)*diziboyu);// dizi oluşturuldu

            if(array1==NULL){
                printf("yeterli yer açýlamadý");
                exit(1);
            }

            //Dizinin elemanlarnı aldığımız for
               for (int i=0;i<diziboyu;i++) {printf("Dizinin %d. elemanini girin.",i+1); scanf("%d",&eleman);array1[i] = eleman;}

               //Dizinin elamanlarnı yazdırdığımız for
               for (int i = 0; i < diziboyu; i++){printf("%d ",array1[i]);}
                 printf("\n");

                for(int x=0;x<diziboyu;x=x+2){
                    if(diziboyu-x>1){
                        toplam = array1[x] + array1[x + 1];

                        for(int y=0;y<diziboyu;y++){
                                        if (toplam<=array1[y]) {

                                                for(int k=x+1;k>=0;k--){

                                                      if(toplam<array1[k]){x=x+1;break;}

                                                }

                                            diziboyu = diziboyu + 1;
                                            array1 = realloc(array1,sizeof(int)*diziboyu);
                                                for (int z=diziboyu;z>y;z--)
                                                    {
                                                        array1[z-1]=array1[z-2];
                                                    }
                                             array1[y] = toplam;
                                    break;
                                    }
                                            else if(y>=diziboyu-1)
                                                    {
                                                        diziboyu = diziboyu + 1;
                                                        array1 = realloc(array1,sizeof(int)*diziboyu);
                                                        array1[diziboyu-1] = toplam;
                                                        break;
                                                    }
                        }


                     printf("**********************************************\n");
                                for (int i = 0; i < diziboyu; i++)
                                {
                                    printf("%d  ",array1[i]);
                                }
                                printf("\n\n");

                    }
                        else
                        {
                         printf("   dizinin toplanabilecek elemani kalmadi.\n");
                        }



                }
                  return 0;
                }

