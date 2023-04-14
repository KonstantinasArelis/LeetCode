int romanToInt(char * s){
    int number=0;
    unsigned int skip=0;
    
    for(size_t i=0;1;i++){
        if(s[i]==0){
            break;
        }
        
        printf("%d\n",number);
        if(skip == 1){
            skip=0;
            continue;
        }

        if(s[i]=='M'){
            number+=1000;
            continue;
        }

        if(s[i]=='D'){
            number+=500;
            continue;
        }

        if(s[i]=='C'){
            if(s[i+1]=='D'){
                number+=400;
                skip=1;
                continue;
            }
            if(s[i+1]=='M'){
                number+=900;
                skip=1;
                continue;
            }
            number+=100;
            continue;
        }

        if(s[i]=='L'){
            number+=50;
            continue;
        }

        if(s[i]=='X'){
            if(s[i+1]=='L'){
                number+=40;
                skip=1;
                continue;
            }
            if(s[i+1]=='C'){
                number+=90;
                skip=1;
                continue;
            }
            number+=10;
            continue;
        }

        if(s[i]=='V'){
            number+=5;
            continue;
        }

        if(s[i]=='I'){
            if(s[i+1]=='V'){
                number+=4;
                skip=1;
                continue;
            }
            if(s[i+1]=='X'){
                number+=9;
                skip=1;
                continue;
            }
            if(s[i+1]=='I'){
                if(s[i+2]=='I'){
                    number+=3;
                    skip=1;
                    break;
                }
                else{
                    number+=2;
                    skip=1;
                    break;
                }
            }

            number+=1;
            continue;
        }

    }
    
    return number;
}