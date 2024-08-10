int     ft_str_is_alpha(char *str)
{
    while(str[i] != '\0')
    {
        if((str[i] < 'z') && (str[i] > 'a')||(str[i] < 'Z') &&(str[i]> 'A') )
        {
            return 1;
        }
        i++;
    }
    return 1;
}