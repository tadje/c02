char *ft_strupcase( *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
       if(str[i] <= 'z' && str[i >= 'a'])
       {
        str[i] = str[i] -'a' +'A'.
       }
       i++;
    }
    return 1;
}