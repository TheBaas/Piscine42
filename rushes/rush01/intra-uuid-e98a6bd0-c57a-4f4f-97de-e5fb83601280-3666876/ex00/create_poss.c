int	**assign_arr(int poss[24][4])
{
	poss[0] = {1, 2, 3, 4};
	poss[1] = {1, 2, 4, 3};
	poss[2] = {1, 3, 2, 4};
	poss[3] = {1, 3, 4, 2};
	poss[4] = {1, 4, 2, 3};
	poss[5] = {1, 4, 3, 2};
	poss[6] = {2, 1, 3, 4};
	poss[7] = {2, 1, 4, 3};
	poss[8] = {2, 3, 4, 1};
	poss[9] = {2, 3, 1, 4};
	poss[10] = {2, 4, 1, 3};
	poss[11] = {2, 4, 3, 1};
	poss[12] = {3, 1, 2, 4};
	poss[13] = {3, 1, 4, 2};
	poss[14] = {3, 2, 1, 4};
	poss[15] = {3, 2, 4, 1};
	poss[16] = {3, 4, 1, 2};
	poss[17] = {3, 4, 2, 1};
	poss[18] = {4, 1, 2, 3};
	poss[19] = {4, 1, 3, 2};
	poss[20] = {4, 2, 1, 3};
	poss[21] = {4, 2, 3, 1};
	poss[22] = {4, 3, 1, 2};
	poss[23] = {4, 3, 2, 1};
}

int main()
{
	int	poss[24][4];
	assign_arr(poss);
}