


int	ft_is_prime(int nb);

int	ft_is_prime(int nb){
	int prme;
	prme = 2;

	if (nb <= 0)
		return (0);
	while (prme <= (nb/2)){
		if (!(nb % prme))
			return (0);
		else 
			prme += 1;
	}
	return (1);
}
