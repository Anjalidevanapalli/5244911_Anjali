char* timeConversion(char* s) {
    static char result[9];
    int hour = (s[0]-'0') * 10 + (s[1] - '0');
    int minute = (s[3]-'0')*10 + (s[4] - '0');
    int sec = (s[6] - '0') * 10 + (s[7] - '0');
    
    if(s[8]=='P' && hour != 12) {
        hour += 12;
    } else if (s[8] == 'A' && hour == 12) {
        hour = 0;
    }
    snprintf(result, sizeof(result), "%02d:%02d:%02d", hour,minute,sec);
    printf("%s\n", result);
    return result;
}