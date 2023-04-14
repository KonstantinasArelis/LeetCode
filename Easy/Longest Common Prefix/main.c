char * longestCommonPrefix(char ** strs, int strsSize){
    char *prefix = (char*)calloc(200,1);
    prefix[0] = strs[0][0];
    unsigned int prefixSize=1;

    while(1){
       for(int i=0;i<strsSize;i++){
            for(int j=0;j<prefixSize;j++){
                if(prefix[j]!=strs[i][j] || strs[i][j]==0){
                    printf("prefix: %c, strs: %c, prefixSize: %d\n",prefix[j],strs[i][j],prefixSize);
                    prefix[j]=0;
                    return prefix;
                }
            }
        }
        prefix[prefixSize]=strs[0][prefixSize];
        prefixSize++;
    }
}