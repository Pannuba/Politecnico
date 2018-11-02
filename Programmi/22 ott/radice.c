int radiceIntera (int x)

{
	int sqr;
	
	if ((sqr == 0) || (x == 1))
		return x;
		
	sqr = x/2;
	
	while (sqr * sqr > x)
		sqr--;
	
	return sqr;
}

