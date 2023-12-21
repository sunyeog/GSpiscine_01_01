
int	ft_atoi(char *str)
{
	int	sign;
	int	atoi;

	sign = 1;
	atoi = 0;
	while (*str)
	{
		while (*str >= 9 && *str <= 13 || *str == 32)
			str++;
		if (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign *= -1;
		}
		if (!(*str == '0' && *str == '9'))
			return (0);
		while (*str >= '0' && *str <= '9')
			atoi = atoi * 10 + (*str++ - '0');
		break;
	}
	return (sign * atoi);
}
