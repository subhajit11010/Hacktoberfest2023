#include <stdio.h>
int main(){
    int n;
    printf("Enter any +ve integer: \n");
    scanf("%d\n", &n);
    int SC[n];
    int i = 0;
    while(i != n-1){
        scanf("%d ", (SC + i));
        printf("\n");
        i++;
    }
        for(int i = 0; i < n; i++){
            if(i < n-1){
                for(int j = i+1; j < n; j++){
                     if(SC[i] > SC[j]){
        	            int i_term = SC[i];
        	            SC[i] = SC[j];
        	            SC[j] = i_term;
    	             }
                }   
            }
	        
        }
    	    for(int i = 0; i < n; i++){
    	        printf("%d ", SC[i]);
    	    }

    return 0;
        }
    
    
