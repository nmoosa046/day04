

int	ft_sqrt(int nb);

int	ft_sqrt(int nb){
	int sqt;

	sqt = 1;
	while ((sqt * sqt) < nb)
		sqt +=1;
	if ((sqt * sqt) == nb)
		return (sqt);
	return (0);
}
