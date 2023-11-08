#include <stdio.h>
int main() {
    int n, mhkos, maxmhkos, min, max, temp, i;
    scanf("%d", &min);
    scanf("%d", &max);
    if (min>=0 && max>=0) {
        maxmhkos=-1;
        do {
            if(min<1 || min>100000000 || max<1 || max>100000000 || max==min) {
                scanf("%d", &min);
                scanf("%d", &max);
            }
        } while (min<1 || max>100000000);
        if (max<min){
            temp=max;
            max=min;
            min=temp;
        }
        for (i=min; i<=max; i++){
            n=i;
            mhkos=1;
            while (n!=1) {
                if (n%2==0){
                    n/=2;
                } else {
                    n = 3*n + 1;
                }
                mhkos++;
            }
            if (mhkos>maxmhkos){
                maxmhkos=mhkos;
            }
        }
        printf("%d\n", maxmhkos);
    } else {
        printf("0\n");
    }
    return 0;
}