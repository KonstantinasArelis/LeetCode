bool isPalindrome(int x){
    if(x<0){
        return false;
    }
    else if(x<=9){
        return true;
    }

    int *digits = (int*)malloc(sizeof(int));
    int digitAmount=0;
    int sizeOfDigits=sizeof(int);
    int k=0;
    
    for(int i=0;x>0;i++){
        digitAmount++;
        digits[i]=x%10;
        printf("%d,",digits[i]);
        x/=10;
        sizeOfDigits+=sizeof(int);
        digits = (int*)realloc(digits,sizeOfDigits);
    }

    for(int i=digitAmount-1;i>0;i--){
        if(digits[i]!= digits[k]){
            free(digits);
            return false;
        }
        k++;
    }

    free(digits);
    return true;
    
}