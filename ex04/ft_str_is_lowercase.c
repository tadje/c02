int     ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] > 'z' || str[i] > 'a' )
        {
            return 0;
        }
        i++;
    }
    return 1;
}