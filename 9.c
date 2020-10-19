

bool isPalindrome(int x){
    int temp = x;
    int len_x = 0;
    long save =0;
    if(x < 0){
        return false;
    }
    while(temp>0){
        save = temp%10 + save*10;
        temp = temp/10;
        len_x +=1;
    }
    if (x != save){
        return false;
    }

    return true;
}

bool isPalindrome(int x){
    int temp = x;
    int len_x = 0;
    long save =0;
    if(x < 0){
        return false;
    }
    while(temp>0){
        save = temp%10 + save*10;
        temp = temp/10;
        len_x +=1;
    }
    for(int i = 0 ; i < len_x/2 ; i++){
        if(save%10 != x%10){
            return false;
        }
        save=save/10;
        x=x/10;
    }
    

    return true;
}