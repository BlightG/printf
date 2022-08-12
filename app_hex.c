char *app_hex(va_list vList, char *temp)
{
	unsigned long int num = va_arg(vList, unsigned long int);
	num_to_str(num, temp, 16, 'x');
	return (temp);
}
char *app_hex_cap(va_list vList, char *temp)
{
	unsigned long int num = va_arg(vList, unsigned long int);
	num_to_str(num, temp, 16, 'X');
	return (temp);
}