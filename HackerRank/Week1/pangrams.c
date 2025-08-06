char* pangrams(char* s) {
    bool letters[26] = {false};
    int count = 0;
    for(int i =0;s[i]!= '\0';i++){
        if(isalpha(s[i])){
            int idx = tolower(s[i]) - 'a';
            if(!letters[idx]){
                letters[idx] = true;
                count ++;
            }
        }
    }
    if(count == 26) {
        return "pangram";
        
    } else{
        return "not pangram";
    }

}