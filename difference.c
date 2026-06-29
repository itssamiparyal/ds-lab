#include<stdio.h>
void differences(){
    int a[10],b[10],c[10],d[10], m = 0 , k = 0, n1, n2, l, i, j;
    printf("\n Enter size of set A:");
    scanf("%d",&n1);
    printf("Enter element of set A:\n");
    for(i = 0; i < n1; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter size of set B:");
    scanf("%d,&n2");
    printf("enter element of set:\n");
    for(i = 0; i<n2;i++){
        scanf("%d",b[i]);
    }
    //logic for find A-B
    for(i = 0; i<n1; i++){
        for(j = 0; j<n2; j++){
            if(b[j] == a[i]){
                break;
            }
            if (j == n2){
                for(i= 0; i<k;i++){
                    if(c[l] == a[i]){
                        break;
                    }
                    if (l == k)
                    {
                        c[k] = a[i];
                        k++;
                    }
                }
            }
            for(i = 0; i < n2; i++){
                for (j = 0; j<n1; j++){
                    if(b[i] == a[j]){
                        break;
                    }
                }
                if(j == n1){
                    for (l = 0; l < m ; l ++){
                        if(d[l] == b[i]){
                            break;
                        }
                        if(l == m){
                            d
                        }
                    }
                }
            }
            
        }
    }
}