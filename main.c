#include <stdio.h>
#include <stdlib.h>


long long fibonacci (int num , long long *arr){
    if ( num == 0 || num == 1){
        arr[0]= 0 ;
        arr[1]= 1;
        return 1;
    }
    else if (arr[num-1] != 0 && arr[num-2] != 0  ){
        return arr[num-1]+arr[num-2];
    }
    else {
     arr[num] = fibonacci(num - 1, arr) + fibonacci(num - 2, arr) ;
     return arr[num];

    }



}



int main() {
    int n ;
    printf("please insert a number : ");
    scanf("%d", &n);
    long long *arr;
    arr = (long long*) calloc(n,sizeof (long long));
    if (arr == NULL){
        printf("falied to alocate memory ");
        return 1;
    }


    printf("%lld", fibonacci(n, arr));
    for (int i =0  ;i <= n ; i++){
        printf("\n %lld is the fobinacci of %d", arr[i], i );
    }
    free(arr);






    return 0;
}
