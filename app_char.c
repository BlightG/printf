char *app_char(va_list vList, char *temp)
{
	int i = 0;
	temp[i] = (va_arg(vList, int));
	return (temp);
}