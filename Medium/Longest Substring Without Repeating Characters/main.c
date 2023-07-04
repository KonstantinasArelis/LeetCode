int lengthOfLongestSubstring(char * s){
    int longestSubstring = 0;
    int substringStart = 0;

    if(s[0] == 0){
        return 0;
    }
    for(size_t i = 0; 1; i++){
        for(size_t j = substringStart; i!=j; j++){
            //printf("substringStart: %d, j: %d, i: %d, longest: %d\n", substringStart,j,i,longestSubstring);
            if(s[i] == s[j]){

                if(i-substringStart > longestSubstring){
                    longestSubstring = i-substringStart;
                    printf("Update1: %d\n", longestSubstring);
                }

                if(substringStart<i){
                    substringStart++;
                    i--;
                }
                break;
            }
            else if(s[i] == 0){
                if(i-substringStart > longestSubstring){
                    longestSubstring = i-substringStart;
                    printf("Update2: %d\n", longestSubstring);
                }
                return longestSubstring;
            }
        }
        //printf("%c is %d\n", s[i],substringStart);
    }

    return longestSubstring;
}