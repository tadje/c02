char *strncpy(char *dest, char *scr, unsigned int n)
{
    int i;

    i = 0;
    while((i < n )&& (src[i] !='\0') )
    {
        dest[i] = src[i]
        i++;
        while(i < n)
        {
            dest[i] = '\0'
        }

        return dest;
    }

}