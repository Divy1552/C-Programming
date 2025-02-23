# include <stdio.h>

float Loan_Amount(float P,float R,float EMI) {

    float Interest;
    
    Interest = P * (R/100) * (float) 1/12;

    P = P + Interest - EMI;
    
    return P;
}

int main() {
    
    float P,R,EMI;
    
    printf("Enter Amount of Loan : ");
    scanf("%f",&P);
    printf("Enter Interest Rate : ");
    scanf("%f",&R);
    printf("Enter EMI of Loan : ");
    scanf("%f",&EMI);
    
    printf("Remaining Amount of Loan after 1st Payment : %.2f\n",P = Loan_Amount(P,R,EMI));
    printf("Remaining Amount of Loan after 2nd Payment : %.2f\n",P = Loan_Amount(P,R,EMI));
    printf("Remaining Amount of Loan after 3rd Payment : %.2f\n",P = Loan_Amount(P,R,EMI));
    
    return 0;
}