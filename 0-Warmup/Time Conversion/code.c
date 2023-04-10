int main()
{
    /*
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = timeConversion(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);
    */
    
    int Local_intHours, Local_intMinutes, Local_intSeconds;
    char Local_charTimeZone[3];
    
    scanf("%d:%d:%d%s", &Local_intHours, &Local_intMinutes, &Local_intSeconds, Local_charTimeZone);
    
    if(strcmp(Local_charTimeZone, "PM") == 0 && Local_intHours != 12) Local_intHours+=12;
    if(strcmp(Local_charTimeZone, "AM") == 0 && Local_intHours == 12) Local_intHours=0;
    
    printf("%02d:%02d:%02d", Local_intHours, Local_intMinutes, Local_intSeconds);
    
    return 0;
}