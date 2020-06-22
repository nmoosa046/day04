

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power){
	int result = 1;
	while(power--){
		result *= nb;
	}
	return result;
}

