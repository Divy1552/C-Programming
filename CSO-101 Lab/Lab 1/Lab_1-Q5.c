# include <stdio.h>

int main() {
    
    int sum = 0;
    
    for (int i = 1;i > 0;i++) {
        
        int n;
        printf("n = ");
        scanf("%d",&n);
        
        if (n > 0)
            sum += n;
            
        else if (n == -1) {

            float average = (float) sum/(i-1);
            printf("Average of Numbers : %f\n",average);
            break;
            
        } else {

            printf("Invalid Number!\n");
            break;
        }
    }
        
    return 0;
}