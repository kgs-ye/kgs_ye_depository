int replace(char * str, char c1, char c2)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c1)
        {
            str[i] = c2;
            count++;
        }
    }
    return count;
}


int replace(char * str, char c1, char c2)
{
    int count = 0;
    while (*str)                
    {
        if (*str == c1)         
        {
            *str = c2;          
            count++;
        }
        str++;                
    }
    return count;
}