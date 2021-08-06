#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "apphelper.h"


int main()
{
	int i;
	int yn = -1;
	int exit = 0;

	char aa = 'a';
	char bb = 'b';
	char cc = 'c';
	char dd = 'd';
	char ee = 'e';
	char ff = 'f';

	char letter;
	int number = 0;



	/*
		A1 WATERFALL RIGHT BOTTOM
		A2 ISLAND RIGHT BOTTOM
		A3 ISLAND LEFT BOTTOM
		A4 WATERFALL LEFT BOTTOM
		A5 JUNGLE RIGHT TOP
		A6 JUNGLE MIDDLE
		A7 ISLAND MIDDLE TOP
		A8 ISLAND LEFT BOTTOM
		A9 WATERFALL RIGHT TOP
		A10 JUNGLE LEFT TOP

		B1 JUNGLE RIGHT TOP
		B2 JUNGLE LEFT BOTTOM
		B3 WATERFALL LEFT TOP
		B4 WATERFALL LEFT BOTTOM
		B5 ISLAND LEFT BOTTOM
		B6 ISLAND MIDDLE TOP
		B7 SHIP
		B8 WATERFALL LEFT TOP
		B9 ISLAND RIGHT BOTTOM
		B10 JUNGLE MIDDLE

		C1 ISLAND RIGHT BOTTOM
		C2 ISLAND CLOUD
		C3 SHIP
		C4 JUNGLE LEFT BOTTOM
		C5 JUNGLE RIGHT TOP
		C6 ISLAND LEFT BOTTOM
		C7 JUNGLE MIDDLE
		C8 JUNGLE LEFT TOP
		C9 WATERFALL RIGHT TOP
		C10 WATERFALL LEFT TOP

		D1 WATERFALL LEFT BOTTOM
		D2 WATERFALL RIGHT TOP
		D3 JUNGLE LEFT TOP
		D4 SHIP
		D5 SHIP
		D6 JUNGLE LEFT BOTTOM
		D7 JUNGLE RIGHT TOP
		D8 WATERFALL RIGHT BOTTOM
		D9 JUNGLE RIGHT TOP
		D10 WATERFALL LEFT BOTTOM

		E1 WATERFALL LEFT TOP
		E2 ISLAND MIDDLE TOP
		E3 WATERFALL LEFT TOP
		E4 WATERFALL RIGHT TOP
		E5 ISLAND CLOUD
		E6 WATERFALL RIGHT TOP
		E7 WATERFALL RIGHT BOTTOM
		E8 WATERFALL RIGHT BOTTOM
		E9 JUNGLE MIDDLE
		E10 WATERFALL LEFT BOTTOM

		F1 ISLAND RIGHT BOTTOM
		F2 JUNGLE LEFT TOP
		F3 ISLAND CLOUD
		F4 JUNGLE LEFT BOTTOM
		F5 ISLAND LEFT BOTTOM
		F6 JUNGLE MIDDLE
		F7 ISLAND MIDDLE TOP
		F8 ISLAND CLOUD
		F9 JUNGLE LEFT BOTTOM
		F10 ISLAND MIDDLE TOP
	*/


	printf(" ======================================================\n");
	printf("| TRANSFORMICE FISHING EVENT 2021 BEST SPOT CALCULATOR |\n");
	printf(" ======================================================\n\n");

	printf("In this program, you will be asked to enter the relics you have.\n");
	printf("If you have all the 'A' relics, answer 'y' to the first question.\n");
	printf("If you have missing parts from 'A', answer 'n' then you will be asked to type the relics that you have.\n\n");

	printf("For the second question, you need to type the relics that you have.\n");
	printf("For example,\n");
	printf("If you have A1, A2 and A3 just enter '123'.\n\n");

	do
	{
		char a[20] = { 0 }; //this shows what A relics you have
		char b[20] = { 0 }; //this shows what B relics you have
		char c[20] = { 0 }; //this shows what C relics you have
		char d[20] = { 0 }; //this shows what D relics you have
		char e[20] = { 0 }; //this shows what E relics you have
		char f[20] = { 0 }; //this shows what F relics you have

		char missingA[21] = { 0 }; // this shows which A relics you are missing.
		char missingB[21] = { 0 }; // this shows which B relics you are missing.
		char missingC[21] = { 0 }; // this shows which C relics you are missing.
		char missingD[21] = { 0 }; // this shows which D relics you are missing.
		char missingE[21] = { 0 }; // this shows which E relics you are missing.
		char missingF[21] = { 0 }; // this shows which F relics you are missing.


		int is_left_bot = 5;
		int is_top = 5;
		int is_cloud = 4;
		int is_right_bot = 4;

		int wa_left_bot = 5;
		int wa_left_top = 5;
		int wa_right_bot = 4;
		int wa_right_top = 5;

		int ju_left_bot = 5;
		int ju_left_top = 4;
		int ju_middle = 5;
		int ju_right_top = 5;

		int ship = 4;


		printf("\n");
		printf("=================== RELICS **A** ==================\n\n");
		getandFindMissing(a, aa, missingA);
		printf("\n");
		printf("\n");
		printf("=================== RELICS **B** ==================\n\n");

		getandFindMissing(b, bb, missingB);
		printf("\n");
		printf("\n");
		printf("=================== RELICS **C** ==================\n\n");

		getandFindMissing(c, cc, missingC);
		printf("\n");
		printf("\n");
		printf("=================== RELICS **D** ==================\n\n");

		getandFindMissing(d, dd, missingD);
		printf("\n");
		printf("\n");
		printf("=================== RELICS **E** ==================\n\n");

		getandFindMissing(e, ee, missingE);
		printf("\n");
		printf("\n");
		printf("=================== RELICS **F** ==================\n\n");

		getandFindMissing(f, ff, missingF);
		printf("\n");
		printf("==================================================\n\n");

		int selam = 0;
		do //selam
		{


			for (i = 0; i < 11; i++)
			{
				if ((missingA[i] == '1') && (missingA[i + 1] == '0'))
				{
					ju_left_top--;
				}
				else if (missingA[i] == '1')
				{
					wa_right_bot--;
				}
				else if (missingA[i] == '2')
				{
					is_right_bot--;
				}
				else if (missingA[i] == '3')
				{
					is_left_bot--;
				}
				else if (missingA[i] == '4')
				{
					wa_left_bot--;
				}
				else if (missingA[i] == '5')
				{
					ju_right_top--;
				}
				else if (missingA[i] == '6')
				{
					ju_middle--;
				}
				else if (missingA[i] == '7')
				{
					is_top--;
				}
				else if (missingA[i] == '8')
				{
					is_left_bot--;
				}
				else if (missingA[i] == '9')
				{
					wa_right_top--;
				}


				if ((missingB[i] == '1') && (missingB[i + 1] == '0'))
				{
					ju_middle--;
				}
				else if (missingB[i] == '1')
				{
					ju_right_top--;
				}
				else if (missingB[i] == '2')
				{
					ju_left_bot--;
				}
				else if (missingB[i] == '3')
				{
					wa_left_top--;
				}
				else if (missingB[i] == '4')
				{
					wa_left_bot--;
				}
				else if (missingB[i] == '5')
				{
					is_left_bot--;
				}
				else if (missingB[i] == '6')
				{
					is_top--;
				}
				else if (missingB[i] == '7')
				{
					ship--;
				}
				else if (missingB[i] == '8')
				{
					wa_left_top--;
				}
				else if (missingB[i] == '9')
				{
					is_right_bot--;
				}


				if ((missingC[i] == '1') && (missingC[i + 1] == '0'))
				{
					wa_left_top--;
				}
				else if (missingC[i] == '1')
				{
					is_right_bot--;
				}
				else if (missingC[i] == '2')
				{
					is_cloud--;
				}
				else if (missingC[i] == '3')
				{
					ship--;
				}
				else if (missingC[i] == '4')
				{
					ju_left_bot--;
				}
				else if (missingC[i] == '5')
				{
					ju_right_top--;
				}
				else if (missingC[i] == '6')
				{
					is_left_bot--;
				}
				else if (missingC[i] == '7')
				{
					ju_middle--;
				}
				else if (missingC[i] == '8')
				{
					ju_left_top--;
				}
				else if (missingC[i] == '9')
				{
					wa_right_top--;
				}


				if ((missingD[i] == '1') && (missingD[i + 1] == '0'))
				{
					wa_left_bot--;
				}
				else if (missingD[i] == '1')
				{
					wa_left_bot--;
				}
				else if (missingD[i] == '2')
				{
					wa_right_top--;
				}
				else if (missingD[i] == '3')
				{
					ju_left_top--;
				}
				else if (missingD[i] == '4')
				{
					ship--;
				}
				else if (missingD[i] == '5')
				{
					ship--;
				}
				else if (missingD[i] == '6')
				{
					ju_left_bot--;
				}
				else if (missingD[i] == '7')
				{
					ju_right_top--;
				}
				else if (missingD[i] == '8')
				{
					wa_right_bot--;
				}
				else if (missingD[i] == '9')
				{
					ju_right_top--;
				}


				if ((missingE[i] == '1') && (missingE[i + 1] == '0'))
				{
					wa_left_bot--;
				}
				else if (missingE[i] == '1')
				{
					wa_left_top--;
				}
				else if (missingE[i] == '2')
				{
					is_top--;
				}
				else if (missingE[i] == '3')
				{
					wa_left_top--;
				}
				else if (missingE[i] == '4')
				{
					wa_right_top--;
				}
				else if (missingE[i] == '5')
				{
					is_cloud--;
				}
				else if (missingE[i] == '6')
				{
					wa_right_top--;
				}
				else if (missingE[i] == '7')
				{
					wa_right_bot--;
				}
				else if (missingE[i] == '8')
				{
					wa_right_bot--;
				}
				else if (missingE[i] == '9')
				{
					ju_middle--;
				}


				if ((missingF[i] == '1') && (missingF[i + 1] == '0'))
				{
					is_top--;
				}
				else if (missingF[i] == '1')
				{
					is_right_bot--;
				}
				else if (missingF[i] == '2')
				{
					ju_left_top--;
				}
				else if (missingF[i] == '3')
				{
					is_cloud--;
				}
				else if (missingF[i] == '4')
				{
					ju_left_bot--;
				}
				else if (missingF[i] == '5')
				{
					is_left_bot--;
				}
				else if (missingF[i] == '6')
				{
					ju_middle--;
				}
				else if (missingF[i] == '7')
				{
					is_top--;
				}
				else if (missingF[i] == '8')
				{
					is_cloud--;
				}
				else if (missingF[i] == '9')
				{
					ju_left_bot--;
				}



			}

			printf("Your missing relics are: \nA(%c,%c,%c,%c,%c,%c,%c,%c,%c,%c%c) \nB(%c,%c,%c,%c,%c,%c,%c,%c,%c,%c%c) \nC(%c,%c,%c,%c,%c,%c,%c,%c,%c,%c%c) \nD(%c,%c,%c,%c,%c,%c,%c,%c,%c,%c%c) \nE(%c,%c,%c,%c,%c,%c,%c,%c,%c,%c%c) \nF(%c,%c,%c,%c,%c,%c,%c,%c,%c,%c%c)\n\n", missingA[0], missingA[1], missingA[2], missingA[3], missingA[4], missingA[5], missingA[6], missingA[7], missingA[8], missingA[9], missingA[10], missingB[0], missingB[1], missingB[2], missingB[3], missingB[4], missingB[5], missingB[6], missingB[7], missingB[8], missingB[9], missingB[10], missingC[0], missingC[1], missingC[2], missingC[3], missingC[4], missingC[5], missingC[6], missingC[7], missingC[8], missingC[9], missingC[10], missingD[0], missingD[1], missingD[2], missingD[3], missingD[4], missingD[5], missingD[6], missingD[7], missingD[8], missingD[9], missingD[10], missingE[0], missingE[1], missingE[2], missingE[3], missingE[4], missingE[5], missingE[6], missingE[7], missingE[8], missingE[9], missingE[10], missingF[0], missingF[1], missingF[2], missingF[3], missingF[4], missingF[5], missingF[6], missingF[7], missingF[8], missingF[9], missingF[10]);
			printf("==================================================\n\n");

			printf("Would you like to see where you can find the missing relics? (y or n): ");
			yn = yes();
			if (yn == 1)
			{
				printf("\n");
				if (missingA[0] != NULL)
				{
					printf("A1 WATERFALL RIGHT BOTTOM\n");
				}
				if (missingA[1] != NULL)
				{
					printf("A2 ISLAND RIGHT BOTTOM\n");
				}
				if (missingA[2] != NULL)
				{
					printf("A3 ISLAND LEFT BOTTOM\n");
				}
				if (missingA[3] != NULL)
				{
					printf("A4 WATERFALL LEFT BOTTOM\n");
				}
				if (missingA[4] != NULL)
				{
					printf("A5 JUNGLE RIGHT TOP\n");
				}
				if (missingA[5] != NULL)
				{
					printf("A6 JUNGLE MIDDLE\n");
				}
				if (missingA[6] != NULL)
				{
					printf("A7 ISLAND MIDDLE TOP\n");
				}
				if (missingA[7] != NULL)
				{
					printf("A8 ISLAND LEFT BOTTOM\n");
				}
				if (missingA[8] != NULL)
				{
					printf("A9 WATERFALL RIGHT TOP\n");
				}
				if (missingA[9] != NULL && missingA[10] != NULL)
				{
					printf("A10 JUNGLE LEFT TOP\n");
				}

				if (missingB[0] != NULL)
				{
					printf("B1 JUNGLE RIGHT TOP\n");
				}
				if (missingB[1] != NULL)
				{
					printf("B2 JUNGLE LEFT BOTTOM\n");
				}
				if (missingB[2] != NULL)
				{
					printf("B3 WATERFALL LEFT TOP\n");
				}
				if (missingB[3] != NULL)
				{
					printf("B4 WATERFALL LEFT BOTTOM\n");
				}
				if (missingB[4] != NULL)
				{
					printf("B5 ISLAND LEFT BOTTOM\n");
				}
				if (missingB[5] != NULL)
				{
					printf("B6 ISLAND MIDDLE TOP\n");
				}
				if (missingB[6] != NULL)
				{
					printf("B7 SHIP\n");
				}
				if (missingB[7] != NULL)
				{
					printf("B8 WATERFALL LEFT TOP\n");
				}
				if (missingB[8] != NULL)
				{
					printf("B9 ISLAND RIGHT BOTTOM\n");
				}
				if (missingB[9] != NULL && missingB[10] != NULL)
				{
					printf("B10 JUNGLE MIDDLE\n");
				}

				if (missingC[0] != NULL)
				{
					printf("C1 ISLAND RIGHT BOTTOM\n");
				}
				if (missingC[1] != NULL)
				{
					printf("C2 ISLAND CLOUD\n");
				}
				if (missingC[2] != NULL)
				{
					printf("C3 SHIP\n");
				}
				if (missingC[3] != NULL)
				{
					printf("A4 JUNGLE LEFT BOTTOM\n");
				}
				if (missingC[4] != NULL)
				{
					printf("C5 JUNGLE RIGHT TOP\n");
				}
				if (missingC[5] != NULL)
				{
					printf("C6 ISLAND LEFT BOTTOM\n");
				}
				if (missingC[6] != NULL)
				{
					printf("C7 JUNGLE MIDDLE\n");
				}
				if (missingC[7] != NULL)
				{
					printf("C8 JUNGLE LEFT TOP\n");
				}
				if (missingC[8] != NULL)
				{
					printf("C9 WATERFALL RIGHT TOP\n");
				}
				if (missingC[9] != NULL && missingC[10] != NULL)
				{
					printf("C10 WATERFALL LEFT TOP\n");
				}

				if (missingD[0] != NULL)
				{
					printf("D1 WATERFALL LEFT BOTTOM\n");
				}
				if (missingD[1] != NULL)
				{
					printf("D2 WATERFALL RIGHT TOP\n");
				}
				if (missingD[2] != NULL)
				{
					printf("D3 JUNGLE LEFT TOP\n");
				}
				if (missingD[3] != NULL)
				{
					printf("D4 SHIP\n");
				}
				if (missingD[4] != NULL)
				{
					printf("D5 SHIP\n");
				}
				if (missingD[5] != NULL)
				{
					printf("D6 JUNGLE LEFT BOTTOM\n");
				}
				if (missingD[6] != NULL)
				{
					printf("D7 JUNGLE RIGHT TOP\n");
				}
				if (missingD[7] != NULL)
				{
					printf("D8 WATERFALL RIGHT BOTTOM\n");
				}
				if (missingD[8] != NULL)
				{
					printf("D9 JUNGLE RIGHT TOP\n");
				}
				if (missingD[9] != NULL && missingD[10] != NULL)
				{
					printf("D10 WATERFALL LEFT BOTTOM\n");
				}

				if (missingE[0] != NULL)
				{
					printf("E1 WATERFALL LEFT TOP\n");
				}
				if (missingE[1] != NULL)
				{
					printf("E2 ISLAND MIDDLE TOP\n");
				}
				if (missingE[2] != NULL)
				{
					printf("E3 WATERFALL LEFT TOP\n");
				}
				if (missingE[3] != NULL)
				{
					printf("E4 WATERFALL RIGHT TOP\n");
				}
				if (missingE[4] != NULL)
				{
					printf("E5 ISLAND CLOUD\n");
				}
				if (missingE[5] != NULL)
				{
					printf("E6 WATERFALL RIGHT TOP\n");
				}
				if (missingE[6] != NULL)
				{
					printf("E7 WATERFALL RIGHT BOTTOM\n");
				}
				if (missingE[7] != NULL)
				{
					printf("E8 WATERFALL RIGHT BOTTOM\n");
				}
				if (missingE[8] != NULL)
				{
					printf("E9 JUNGLE MIDDLE\n");
				}
				if (missingE[9] != NULL && missingE[10] != NULL)
				{
					printf("E10 WATERFALL LEFT BOTTOM\n");
				}

				if (missingF[0] != NULL)
				{
					printf("F1 ISLAND RIGHT BOTTOM\n");
				}
				if (missingF[1] != NULL)
				{
					printf("F2 JUNGLE LEFT TOP\n");
				}
				if (missingF[2] != NULL)
				{
					printf("F3 ISLAND CLOUD\n");
				}
				if (missingF[3] != NULL)
				{
					printf("F4 JUNGLE LEFT BOTTOM\n");
				}
				if (missingF[4] != NULL)
				{
					printf("F5 ISLAND LEFT BOTTOM\n");
				}
				if (missingF[5] != NULL)
				{
					printf("F6 JUNGLE MIDDLE\n");
				}
				if (missingF[6] != NULL)
				{
					printf("F7 ISLAND MIDDLE TOP\n");
				}
				if (missingF[7] != NULL)
				{
					printf("F8 ISLAND CLOUD\n");
				}
				if (missingF[8] != NULL)
				{
					printf("F9 JUNGLE LEFT BOTTOM\n");
				}
				if (missingF[9] != NULL && missingF[10] != NULL)
				{
					printf("F10 ISLAND MIDDLE TOP\n");
				}
			}
			else
			{

			}

			printf("\n==================================================\n\n");

			printf("*** THE BEST SPOTS HAVE BEEN ANALYZED and FOUND JUST FOR YOU ! ***\n\n");
			pause();
			//while (getchar() != '\n');

			if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4 && wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5 && ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5 && ship == 4)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" ** You already have all the relics you can get from this map! **\n");
			}

			else if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4 && ship == 4 && ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
				}

				else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
					printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
				}

				else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
					printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
				}

				else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
					printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
				}


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" ** You already have all the relics you can get from this map! **\n");
			}
			else if (ship == 4 && wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5 && ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");

				if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
					printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
				}

				else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
				{
					printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
					printf(" Your missing relics from this spot are: A(%c), B(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
				}

				else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
				{
					printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
					printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
				}

				else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
				}

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" ** You already have all the relics you can get from this map! **\n");
			}
			else if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4 && wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5 && ship == 4)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
					printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
				}

				else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
					printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
				}

				else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
				{
					printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
					printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
				}

				else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
				}


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" ** You already have all the relics you can get from this map! **\n");
			}
			else if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4 && wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5 && ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" Every spot has the same drop chance in this map!\n");
				printf(" ** You have already found '%d' relics in this map! **\n", ship);
				printf(" Your missing relics from this map are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
			}

			else if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4 && wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
					printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
				}

				else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
					printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
				}

				else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
				{
					printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
					printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
				}

				else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
				}


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" Every spot has the same drop chance in this map!\n");
				printf(" ** You have already found '%d' relics from this map! **\n", ship);
				printf(" Your missing relics from this map are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
			}
			else if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4 && ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
				}

				else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
					printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
				}

				else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
					printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
				}

				else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
					printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
				}


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" Every spot has the same drop chance in this map!\n");
				printf(" ** You have already found '%d' relics in this map! **\n", ship);
				printf(" Your missing relics from this map are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
			}
			else if (wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5 && ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");


				if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
					printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
				}

				else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
				{
					printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
					printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
				}

				else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
				{
					printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
					printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
				}

				else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
				}

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" Every spot has the same drop chance in this map!\n");
				printf(" ** You have already found '%d' relics in this map! **\n", ship);
				printf("Your missing relics from this spot are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
			}

			else if (ship == 4 && ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");


				if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
					printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
				}

				else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
				{
					printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
					printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
				}

				else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
				{
					printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
					printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
				}

				else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
				}

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
				}

				else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
					printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
				}

				else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
					printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
				}

				else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
					printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
				}


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" ** You already have all the relics you can get from this map! **\n");
			}
			else if (wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5 && ship == 4)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");


				if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
					printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
				}

				else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
				{
					printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
					printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
				}

				else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
				{
					printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
					printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
				}

				else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
				}

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
					printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
				}

				else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
					printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
				}

				else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
				{
					printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
					printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
				}

				else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
				}


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" ** You already have all the relics you can get from this map! **\n");
			}
			else if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4 && ship == 4)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
				}

				else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
					printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
				}

				else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
					printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
				}

				else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
					printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
				}


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
					printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
				}

				else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
					printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
				}

				else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
				{
					printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
					printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
				}

				else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
				}


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" ** You already have all the relics you can get from this map! **\n");
			}


			else if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
				}

				else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
					printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
				}

				else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
					printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
				}

				else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
					printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
				}


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
					printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
				}

				else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
					printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
				}

				else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
				{
					printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
					printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
				}

				else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
				}


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" Every spot has the same drop chance in this map!\n");
				printf(" ** You have already found '%d' relics in this map! **\n", ship);
				printf(" Your missing relics from this map are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
			}
			else if (wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");


				if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
					printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
				}

				else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
				{
					printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
					printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
				}

				else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
				{
					printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
					printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
				}

				else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
				}

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
					printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
				}

				else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
					printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
				}

				else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
				{
					printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
					printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
				}

				else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
				}


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" Every spot has the same drop chance in this map!\n");
				printf(" ** You have already found '%d' relics in this map! **\n", ship);
				printf(" Your missing relics from this map are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
			}
			else if (ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");


				if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
					printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
				}

				else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
				{
					printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
					printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
				}

				else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
				{
					printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
					printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
				}

				else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
				}

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
				}

				else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
					printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%C,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
				}

				else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
					printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
				}

				else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
					printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
				}


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				printf(" ** You already have all the relics you can get from this map! **\n");


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" Every spot has the same drop chance in this map!\n");
				printf(" ** You have already found '%d' relics in this map! **\n", ship);
				printf(" Your missing relics from this map are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
			}

			else if (ship == 4)
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");


				if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
					printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
				}

				else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
				{
					printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
					printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
				}

				else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
				{
					printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
					printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
				}

				else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
				}

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
				}

				else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
					printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
				}

				else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
					printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
				}

				else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
					printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
				}


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
					printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
				}

				else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
					printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
				}

				else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
				{
					printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
					printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
				}

				else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
				}


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" ** You already have all the relics you can get from this map! **\n");
			}

			else
			{
				printf("==============\n");
				printf("*** ISLAND ***\n");
				printf("==============\n");


				if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
					printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
				}

				else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
				{
					printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
					printf(" Your missing relics from this spot are: A(%c), B(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
				}

				else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
				{
					printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
					printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
				}

				else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
				}

				printf("\n\n=================\n");
				printf("*** WATERFALL ***\n");
				printf("=================\n");

				if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
					printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
				}

				else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
					printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
				}

				else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
				{
					printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
					printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
				}

				else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
					printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
				}


				printf("\n\n==============\n");
				printf("*** JUNGLE ***\n");
				printf("==============\n");

				if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
				{
					printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
					printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
				}

				else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
				{
					printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
					printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
				}

				else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
				{
					printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
					printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
				}

				else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
				{
					printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
					printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
					printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
				}


				printf("\n\n============\n");
				printf("*** SHIP ***\n");
				printf("============\n");
				printf(" Every spot has the same drop chance in this map!\n");
				printf(" ** You have already found '%d' relics in this map! **\n", ship);
				printf(" Your missing relics from this map are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
			}

			printf("\n\n** Have you gotten a new relic? ** (y or n): ");
			yn = yes();

			int dow = 0;
			if (yn==0)
			{
				selam++;
			}
			if (yn == 1)
			{

				do //dow
				{

					if (yn == 1)
					{
						printf("\nWhat relic have you got? (for example: a1) (please enter only 1 relic at a time): ");
						scanf(" %c%d", &letter, &number);
						while ((number < 1 || number>10) || (letter != 'a' && letter != 'b' && letter != 'c' && letter != 'd' && letter != 'e' && letter != 'f' && letter != 'A' && letter != 'B' && letter != 'C' && letter != 'D' && letter != 'E' && letter != 'F'))
						{
							printf("Invalid entry please try again: ");
							scanf(" %c%d", &letter, &number);
						}
						if (letter == 'a' || letter == 'A')
						{
							switch (number)
							{
							case 1:
								missingA[0] = NULL;
								break;
							case 2:
								missingA[1] = NULL;
								break;
							case 3:
								missingA[2] = NULL;
								break;
							case 4:
								missingA[3] = NULL;
								break;
							case 5:
								missingA[4] = NULL;
								break;
							case 6:
								missingA[5] = NULL;
								break;
							case 7:
								missingA[6] = NULL;
								break;
							case 8:
								missingA[7] = NULL;
								break;
							case 9:
								missingA[8] = NULL;
								break;
							case 10:
								missingA[9] = NULL;
								missingA[10] = NULL;
								break;
							}
						}
						if (letter == 'b' || letter == 'B')
						{
							switch (number)
							{
							case 1:
								missingB[0] = NULL;
								break;
							case 2:
								missingB[1] = NULL;
								break;
							case 3:
								missingB[2] = NULL;
								break;
							case 4:
								missingB[3] = NULL;
								break;
							case 5:
								missingB[4] = NULL;
								break;
							case 6:
								missingB[5] = NULL;
								break;
							case 7:
								missingB[6] = NULL;
								break;
							case 8:
								missingB[7] = NULL;
								break;
							case 9:
								missingB[8] = NULL;
								break;
							case 10:
								missingB[9] = NULL;
								missingB[10] = NULL;
								break;
							}
						}
						if (letter == 'c' || letter == 'C')
						{
							switch (number)
							{
							case 1:
								missingC[0] = NULL;
								break;
							case 2:
								missingC[1] = NULL;
								break;
							case 3:
								missingC[2] = NULL;
								break;
							case 4:
								missingC[3] = NULL;
								break;
							case 5:
								missingC[4] = NULL;
								break;
							case 6:
								missingC[5] = NULL;
								break;
							case 7:
								missingC[6] = NULL;
								break;
							case 8:
								missingC[7] = NULL;
								break;
							case 9:
								missingC[8] = NULL;
								break;
							case 10:
								missingC[9] = NULL;
								missingC[10] = NULL;
								break;
							}
						}
						if (letter == 'd' || letter == 'D')
						{
							switch (number)
							{
							case 1:
								missingD[0] = NULL;
								break;
							case 2:
								missingD[1] = NULL;
								break;
							case 3:
								missingD[2] = NULL;
								break;
							case 4:
								missingD[3] = NULL;
								break;
							case 5:
								missingD[4] = NULL;
								break;
							case 6:
								missingD[5] = NULL;
								break;
							case 7:
								missingD[6] = NULL;
								break;
							case 8:
								missingD[7] = NULL;
								break;
							case 9:
								missingD[8] = NULL;
								break;
							case 10:
								missingD[9] = NULL;
								missingD[10] = NULL;
								break;
							}
						}
						if (letter == 'e' || letter == 'E')
						{
							switch (number)
							{
							case 1:
								missingE[0] = NULL;
								break;
							case 2:
								missingE[1] = NULL;
								break;
							case 3:
								missingE[2] = NULL;
								break;
							case 4:
								missingE[3] = NULL;
								break;
							case 5:
								missingE[4] = NULL;
								break;
							case 6:
								missingE[5] = NULL;
								break;
							case 7:
								missingE[6] = NULL;
								break;
							case 8:
								missingE[7] = NULL;
								break;
							case 9:
								missingE[8] = NULL;
								break;
							case 10:
								missingE[9] = NULL;
								missingE[10] = NULL;
								break;
							}
						}
						if (letter == 'f' || letter == 'F')
						{
							switch (number)
							{
							case 1:
								missingF[0] = NULL;
								break;
							case 2:
								missingF[1] = NULL;
								break;
							case 3:
								missingF[2] = NULL;
								break;
							case 4:
								missingF[3] = NULL;
								break;
							case 5:
								missingF[4] = NULL;
								break;
							case 6:
								missingF[5] = NULL;
								break;
							case 7:
								missingF[6] = NULL;
								break;
							case 8:
								missingF[7] = NULL;
								break;
							case 9:
								missingF[8] = NULL;
								break;
							case 10:
								missingF[9] = NULL;
								missingF[10] = NULL;
								break;
							}
						}
					}
					printf("\nWould you like to add one more relic? (y or n): ");
					yn = yes();
					if (yn == 0)
					{
						//dow++;


						/*ADD THE NEW STATEMENTS HERE*/
						is_left_bot = 5;
						is_top = 5;
						is_cloud = 4;
						is_right_bot = 4;

						wa_left_bot = 5;
						wa_left_top = 5;
						wa_right_bot = 4;
						wa_right_top = 5;

						ju_left_bot = 5;
						ju_left_top = 4;
						ju_middle = 5;
						ju_right_top = 5;


						for (i = 0; i < 11; i++)
						{
							if ((missingA[i] == '1') && (missingA[i + 1] == '0'))
							{
								ju_left_top--;
							}
							else if (missingA[i] == '1')
							{
								wa_right_bot--;
							}
							else if (missingA[i] == '2')
							{
								is_right_bot--;
							}
							else if (missingA[i] == '3')
							{
								is_left_bot--;
							}
							else if (missingA[i] == '4')
							{
								wa_left_bot--;
							}
							else if (missingA[i] == '5')
							{
								ju_right_top--;
							}
							else if (missingA[i] == '6')
							{
								ju_middle--;
							}
							else if (missingA[i] == '7')
							{
								is_top--;
							}
							else if (missingA[i] == '8')
							{
								is_left_bot--;
							}
							else if (missingA[i] == '9')
							{
								wa_right_top--;
							}


							if ((missingB[i] == '1') && (missingB[i + 1] == '0'))
							{
								ju_middle--;
							}
							else if (missingB[i] == '1')
							{
								ju_right_top--;
							}
							else if (missingB[i] == '2')
							{
								ju_left_bot--;
							}
							else if (missingB[i] == '3')
							{
								wa_left_top--;
							}
							else if (missingB[i] == '4')
							{
								wa_left_bot--;
							}
							else if (missingB[i] == '5')
							{
								is_left_bot--;
							}
							else if (missingB[i] == '6')
							{
								is_top--;
							}
							else if (missingB[i] == '7')
							{
								ship--;
							}
							else if (missingB[i] == '8')
							{
								wa_left_top--;
							}
							else if (missingB[i] == '9')
							{
								is_right_bot--;
							}


							if ((missingC[i] == '1') && (missingC[i + 1] == '0'))
							{
								wa_left_top--;
							}
							else if (missingC[i] == '1')
							{
								is_right_bot--;
							}
							else if (missingC[i] == '2')
							{
								is_cloud--;
							}
							else if (missingC[i] == '3')
							{
								ship--;
							}
							else if (missingC[i] == '4')
							{
								ju_left_bot--;
							}
							else if (missingC[i] == '5')
							{
								ju_right_top--;
							}
							else if (missingC[i] == '6')
							{
								is_left_bot--;
							}
							else if (missingC[i] == '7')
							{
								ju_middle--;
							}
							else if (missingC[i] == '8')
							{
								ju_left_top--;
							}
							else if (missingC[i] == '9')
							{
								wa_right_top--;
							}


							if ((missingD[i] == '1') && (missingD[i + 1] == '0'))
							{
								wa_left_bot--;
							}
							else if (missingD[i] == '1')
							{
								wa_left_bot--;
							}
							else if (missingD[i] == '2')
							{
								wa_right_top--;
							}
							else if (missingD[i] == '3')
							{
								ju_left_top--;
							}
							else if (missingD[i] == '4')
							{
								ship--;
							}
							else if (missingD[i] == '5')
							{
								ship--;
							}
							else if (missingD[i] == '6')
							{
								ju_left_bot--;
							}
							else if (missingD[i] == '7')
							{
								ju_right_top--;
							}
							else if (missingD[i] == '8')
							{
								wa_right_bot--;
							}
							else if (missingD[i] == '9')
							{
								ju_right_top--;
							}


							if ((missingE[i] == '1') && (missingE[i + 1] == '0'))
							{
								wa_left_bot--;
							}
							else if (missingE[i] == '1')
							{
								wa_left_top--;
							}
							else if (missingE[i] == '2')
							{
								is_top--;
							}
							else if (missingE[i] == '3')
							{
								wa_left_top--;
							}
							else if (missingE[i] == '4')
							{
								wa_right_top--;
							}
							else if (missingE[i] == '5')
							{
								is_cloud--;
							}
							else if (missingE[i] == '6')
							{
								wa_right_top--;
							}
							else if (missingE[i] == '7')
							{
								wa_right_bot--;
							}
							else if (missingE[i] == '8')
							{
								wa_right_bot--;
							}
							else if (missingE[i] == '9')
							{
								ju_middle--;
							}


							if ((missingF[i] == '1') && (missingF[i + 1] == '0'))
							{
								is_top--;
							}
							else if (missingF[i] == '1')
							{
								is_right_bot--;
							}
							else if (missingF[i] == '2')
							{
								ju_left_top--;
							}
							else if (missingF[i] == '3')
							{
								is_cloud--;
							}
							else if (missingF[i] == '4')
							{
								ju_left_bot--;
							}
							else if (missingF[i] == '5')
							{
								is_left_bot--;
							}
							else if (missingF[i] == '6')
							{
								ju_middle--;
							}
							else if (missingF[i] == '7')
							{
								is_top--;
							}
							else if (missingF[i] == '8')
							{
								is_cloud--;
							}
							else if (missingF[i] == '9')
							{
								ju_left_bot--;
							}



						}
						printf("\n==================================================\n");
						printf("\nYour missing relics are: \nA(%c,%c,%c,%c,%c,%c,%c,%c,%c,%c%c) \nB(%c,%c,%c,%c,%c,%c,%c,%c,%c,%c%c) \nC(%c,%c,%c,%c,%c,%c,%c,%c,%c,%c%c) \nD(%c,%c,%c,%c,%c,%c,%c,%c,%c,%c%c) \nE(%c,%c,%c,%c,%c,%c,%c,%c,%c,%c%c) \nF(%c,%c,%c,%c,%c,%c,%c,%c,%c,%c%c)\n\n", missingA[0], missingA[1], missingA[2], missingA[3], missingA[4], missingA[5], missingA[6], missingA[7], missingA[8], missingA[9], missingA[10], missingB[0], missingB[1], missingB[2], missingB[3], missingB[4], missingB[5], missingB[6], missingB[7], missingB[8], missingB[9], missingB[10], missingC[0], missingC[1], missingC[2], missingC[3], missingC[4], missingC[5], missingC[6], missingC[7], missingC[8], missingC[9], missingC[10], missingD[0], missingD[1], missingD[2], missingD[3], missingD[4], missingD[5], missingD[6], missingD[7], missingD[8], missingD[9], missingD[10], missingE[0], missingE[1], missingE[2], missingE[3], missingE[4], missingE[5], missingE[6], missingE[7], missingE[8], missingE[9], missingE[10], missingF[0], missingF[1], missingF[2], missingF[3], missingF[4], missingF[5], missingF[6], missingF[7], missingF[8], missingF[9], missingF[10]);
						printf("==================================================\n\n");

						printf("Would you like to see where you can find the missing relics? (y or n): ");
						yn = yes();
						if (yn == 1)
						{
							printf("\n");
							if (missingA[0] != NULL)
							{
								printf("A1 WATERFALL RIGHT BOTTOM\n");
							}
							if (missingA[1] != NULL)
							{
								printf("A2 ISLAND RIGHT BOTTOM\n");
							}
							if (missingA[2] != NULL)
							{
								printf("A3 ISLAND LEFT BOTTOM\n");
							}
							if (missingA[3] != NULL)
							{
								printf("A4 WATERFALL LEFT BOTTOM\n");
							}
							if (missingA[4] != NULL)
							{
								printf("A5 JUNGLE RIGHT TOP\n");
							}
							if (missingA[5] != NULL)
							{
								printf("A6 JUNGLE MIDDLE\n");
							}
							if (missingA[6] != NULL)
							{
								printf("A7 ISLAND MIDDLE TOP\n");
							}
							if (missingA[7] != NULL)
							{
								printf("A8 ISLAND LEFT BOTTOM\n");
							}
							if (missingA[8] != NULL)
							{
								printf("A9 WATERFALL RIGHT TOP\n");
							}
							if (missingA[9] != NULL && missingA[10] != NULL)
							{
								printf("A10 JUNGLE LEFT TOP\n");
							}

							if (missingB[0] != NULL)
							{
								printf("B1 JUNGLE RIGHT TOP\n");
							}
							if (missingB[1] != NULL)
							{
								printf("B2 JUNGLE LEFT BOTTOM\n");
							}
							if (missingB[2] != NULL)
							{
								printf("B3 WATERFALL LEFT TOP\n");
							}
							if (missingB[3] != NULL)
							{
								printf("B4 WATERFALL LEFT BOTTOM\n");
							}
							if (missingB[4] != NULL)
							{
								printf("B5 ISLAND LEFT BOTTOM\n");
							}
							if (missingB[5] != NULL)
							{
								printf("B6 ISLAND MIDDLE TOP\n");
							}
							if (missingB[6] != NULL)
							{
								printf("B7 SHIP\n");
							}
							if (missingB[7] != NULL)
							{
								printf("B8 WATERFALL LEFT TOP\n");
							}
							if (missingB[8] != NULL)
							{
								printf("B9 ISLAND RIGHT BOTTOM\n");
							}
							if (missingB[9] != NULL && missingB[10] != NULL)
							{
								printf("B10 JUNGLE MIDDLE\n");
							}

							if (missingC[0] != NULL)
							{
								printf("C1 ISLAND RIGHT BOTTOM\n");
							}
							if (missingC[1] != NULL)
							{
								printf("C2 ISLAND CLOUD\n");
							}
							if (missingC[2] != NULL)
							{
								printf("C3 SHIP\n");
							}
							if (missingC[3] != NULL)
							{
								printf("A4 JUNGLE LEFT BOTTOM\n");
							}
							if (missingC[4] != NULL)
							{
								printf("C5 JUNGLE RIGHT TOP\n");
							}
							if (missingC[5] != NULL)
							{
								printf("C6 ISLAND LEFT BOTTOM\n");
							}
							if (missingC[6] != NULL)
							{
								printf("C7 JUNGLE MIDDLE\n");
							}
							if (missingC[7] != NULL)
							{
								printf("C8 JUNGLE LEFT TOP\n");
							}
							if (missingC[8] != NULL)
							{
								printf("C9 WATERFALL RIGHT TOP\n");
							}
							if (missingC[9] != NULL && missingC[10] != NULL)
							{
								printf("C10 WATERFALL LEFT TOP\n");
							}

							if (missingD[0] != NULL)
							{
								printf("D1 WATERFALL LEFT BOTTOM\n");
							}
							if (missingD[1] != NULL)
							{
								printf("D2 WATERFALL RIGHT TOP\n");
							}
							if (missingD[2] != NULL)
							{
								printf("D3 JUNGLE LEFT TOP\n");
							}
							if (missingD[3] != NULL)
							{
								printf("D4 SHIP\n");
							}
							if (missingD[4] != NULL)
							{
								printf("D5 SHIP\n");
							}
							if (missingD[5] != NULL)
							{
								printf("D6 JUNGLE LEFT BOTTOM\n");
							}
							if (missingD[6] != NULL)
							{
								printf("D7 JUNGLE RIGHT TOP\n");
							}
							if (missingD[7] != NULL)
							{
								printf("D8 WATERFALL RIGHT BOTTOM\n");
							}
							if (missingD[8] != NULL)
							{
								printf("D9 JUNGLE RIGHT TOP\n");
							}
							if (missingD[9] != NULL && missingD[10] != NULL)
							{
								printf("D10 WATERFALL LEFT BOTTOM\n");
							}

							if (missingE[0] != NULL)
							{
								printf("E1 WATERFALL LEFT TOP\n");
							}
							if (missingE[1] != NULL)
							{
								printf("E2 ISLAND MIDDLE TOP\n");
							}
							if (missingE[2] != NULL)
							{
								printf("E3 WATERFALL LEFT TOP\n");
							}
							if (missingE[3] != NULL)
							{
								printf("E4 WATERFALL RIGHT TOP\n");
							}
							if (missingE[4] != NULL)
							{
								printf("E5 ISLAND CLOUD\n");
							}
							if (missingE[5] != NULL)
							{
								printf("E6 WATERFALL RIGHT TOP\n");
							}
							if (missingE[6] != NULL)
							{
								printf("E7 WATERFALL RIGHT BOTTOM\n");
							}
							if (missingE[7] != NULL)
							{
								printf("E8 WATERFALL RIGHT BOTTOM\n");
							}
							if (missingE[8] != NULL)
							{
								printf("E9 JUNGLE MIDDLE\n");
							}
							if (missingE[9] != NULL && missingE[10] != NULL)
							{
								printf("E10 WATERFALL LEFT BOTTOM\n");
							}

							if (missingF[0] != NULL)
							{
								printf("F1 ISLAND RIGHT BOTTOM\n");
							}
							if (missingF[1] != NULL)
							{
								printf("F2 JUNGLE LEFT TOP\n");
							}
							if (missingF[2] != NULL)
							{
								printf("F3 ISLAND CLOUD\n");
							}
							if (missingF[3] != NULL)
							{
								printf("F4 JUNGLE LEFT BOTTOM\n");
							}
							if (missingF[4] != NULL)
							{
								printf("F5 ISLAND LEFT BOTTOM\n");
							}
							if (missingF[5] != NULL)
							{
								printf("F6 JUNGLE MIDDLE\n");
							}
							if (missingF[6] != NULL)
							{
								printf("F7 ISLAND MIDDLE TOP\n");
							}
							if (missingF[7] != NULL)
							{
								printf("F8 ISLAND CLOUD\n");
							}
							if (missingF[8] != NULL)
							{
								printf("F9 JUNGLE LEFT BOTTOM\n");
							}
							if (missingF[9] != NULL && missingF[10] != NULL)
							{
								printf("F10 ISLAND MIDDLE TOP\n");
							}
						}
						else
						{

						}

						printf("\n==================================================\n\n");

						printf("*** THE BEST SPOTS HAVE BEEN ANALYZED and FOUND JUST FOR YOU ! ***\n\n");
						pause();
						//while (getchar() != '\n');

						if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4 && wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5 && ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5 && ship == 4)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" ** You already have all the relics you can get from this map! **\n");
						}

						else if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4 && ship == 4 && ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
							}

							else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
								printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
							}

							else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
								printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
							}

							else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
								printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
							}


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" ** You already have all the relics you can get from this map! **\n");
						}
						else if (ship == 4 && wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5 && ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");

							if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
								printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
							}

							else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
							{
								printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
								printf(" Your missing relics from this spot are: A(%c), B(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
							}

							else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
							{
								printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
								printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
							}

							else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
							}

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" ** You already have all the relics you can get from this map! **\n");
						}
						else if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4 && wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5 && ship == 4)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
								printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
							}

							else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
								printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
							}

							else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
							{
								printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
								printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
							}

							else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
							}


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" ** You already have all the relics you can get from this map! **\n");
						}
						else if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4 && wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5 && ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" Every spot has the same drop chance in this map!\n");
							printf(" ** You have already found '%d' relics in this map! **\n", ship);
							printf(" Your missing relics from this map are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
						}

						else if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4 && wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
								printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
							}

							else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
								printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
							}

							else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
							{
								printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
								printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
							}

							else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
							}


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" Every spot has the same drop chance in this map!\n");
							printf(" ** You have already found '%d' relics from this map! **\n", ship);
							printf(" Your missing relics from this map are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
						}
						else if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4 && ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
							}

							else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
								printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
							}

							else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
								printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
							}

							else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
								printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
							}


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" Every spot has the same drop chance in this map!\n");
							printf(" ** You have already found '%d' relics in this map! **\n", ship);
							printf(" Your missing relics from this map are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
						}
						else if (wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5 && ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");


							if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
								printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
							}

							else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
							{
								printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
								printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
							}

							else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
							{
								printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
								printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
							}

							else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
							}

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" Every spot has the same drop chance in this map!\n");
							printf(" ** You have already found '%d' relics in this map! **\n", ship);
							printf("Your missing relics from this spot are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
						}

						else if (ship == 4 && ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");


							if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
								printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
							}

							else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
							{
								printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
								printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
							}

							else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
							{
								printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
								printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
							}

							else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
							}

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
							}

							else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
								printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
							}

							else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
								printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
							}

							else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
								printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
							}


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" ** You already have all the relics you can get from this map! **\n");
						}
						else if (wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5 && ship == 4)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");


							if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
								printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
							}

							else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
							{
								printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
								printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
							}

							else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
							{
								printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
								printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
							}

							else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
							}

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
								printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
							}

							else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
								printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
							}

							else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
							{
								printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
								printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
							}

							else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
							}


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" ** You already have all the relics you can get from this map! **\n");
						}
						else if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4 && ship == 4)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
							}

							else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
								printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
							}

							else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
								printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
							}

							else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
								printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
							}


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
								printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
							}

							else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
								printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
							}

							else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
							{
								printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
								printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
							}

							else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
							}


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" ** You already have all the relics you can get from this map! **\n");
						}


						else if (is_left_bot == 5 && is_top == 5 && is_cloud == 4 && is_right_bot == 4)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
							}

							else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
								printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
							}

							else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
								printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
							}

							else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
								printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
							}


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
								printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
							}

							else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
								printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
							}

							else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
							{
								printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
								printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
							}

							else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
							}


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" Every spot has the same drop chance in this map!\n");
							printf(" ** You have already found '%d' relics in this map! **\n", ship);
							printf(" Your missing relics from this map are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
						}
						else if (wa_left_bot == 5 && wa_left_top == 5 && wa_right_bot == 4 && wa_right_top == 5)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");


							if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
								printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
							}

							else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
							{
								printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
								printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
							}

							else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
							{
								printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
								printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
							}

							else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
							}

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
								printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
							}

							else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
								printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
							}

							else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
							{
								printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
								printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
							}

							else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
							}


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" Every spot has the same drop chance in this map!\n");
							printf(" ** You have already found '%d' relics in this map! **\n", ship);
							printf(" Your missing relics from this map are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
						}
						else if (ju_left_bot == 5 && ju_left_top == 4 && ju_middle == 5 && ju_right_top == 5)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");


							if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
								printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
							}

							else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
							{
								printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
								printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
							}

							else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
							{
								printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
								printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
							}

							else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
							}

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
							}

							else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
								printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
							}

							else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
								printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
							}

							else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
								printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
							}


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							printf(" ** You already have all the relics you can get from this map! **\n");


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" Every spot has the same drop chance in this map!\n");
							printf(" ** You have already found '%d' relics in this map! **\n", ship);
							printf(" Your missing relics from this map are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
						}

						else if (ship == 4)
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");


							if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
								printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
							}

							else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
							{
								printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
								printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
							}

							else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
							{
								printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
								printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
							}

							else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
							}

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
							}

							else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
								printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
							}

							else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
								printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
							}

							else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
								printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
							}


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
								printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
							}

							else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
								printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
							}

							else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
							{
								printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
								printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
							}

							else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
							}


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" ** You already have all the relics you can get from this map! **\n");
						}

						else
						{
							printf("==============\n");
							printf("*** ISLAND ***\n");
							printf("==============\n");


							if ((is_left_bot <= is_top) && (is_left_bot <= is_cloud) && (is_left_bot <= is_right_bot))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_left_bot);
								printf(" Your missing relics from this spot are: A(%c,%c), B(%c), C(%c), F(%c)\n", missingA[2], missingA[7], missingB[4], missingC[5], missingF[4]); // a3 a8 b5 c6 f5
							}

							else if ((is_top <= is_left_bot) && (is_top <= is_cloud) && (is_top <= is_right_bot))
							{
								printf(" ** MIDDLE TOP ** of the island is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_top);
								printf(" Your missing relics from this spot are: A(%c), B(%c), E(%c), F(%c,%c%c)\n", missingA[6], missingB[5], missingE[1], missingF[6], missingF[9], missingF[10]); // a7 b6 e2 f7 f10
							}

							else if ((is_cloud <= is_left_bot) && (is_cloud <= is_top) && (is_cloud <= is_right_bot))
							{
								printf(" ** CLOUD ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_cloud);
								printf(" Your missing relics from this spot are: C(%c), E(%c), F(%c,%c)\n", missingC[1], missingE[4], missingF[2], missingF[7]); // c2 e5 f3 f8
							}

							else if ((is_right_bot <= is_left_bot) && (is_right_bot <= is_top) && (is_right_bot <= is_cloud))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", is_right_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), F(%c)\n", missingA[1], missingB[8], missingC[0], missingF[0]); //a2 b9 c1 f1
							}

							printf("\n\n=================\n");
							printf("*** WATERFALL ***\n");
							printf("=================\n");

							if ((wa_left_bot <= wa_left_top) && (wa_left_bot <= wa_right_bot) && (wa_left_bot <= wa_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_bot);
								printf(" Your missing relics from this spot are: A(%c), B(%c), D(%c,%c%c), E(%c%c)\n", missingA[3], missingB[3], missingD[0], missingD[9], missingD[10], missingE[9], missingE[10]); //a4 b4 d1 d10 e10
							}

							else if ((wa_left_top <= wa_left_bot) && (wa_left_top <= wa_right_bot) && (wa_left_top <= wa_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_left_top);
								printf(" Your missing relics from this spot are: B(%c,%c), C(%c%c), E(%c,%c)\n", missingB[2], missingB[7], missingC[9], missingC[10], missingE[0], missingE[2]); //b3 b8 c10 e1 e3
							}

							else if ((wa_right_bot <= wa_left_bot) && (wa_right_bot <= wa_left_top) && (wa_right_bot <= wa_right_top))
							{
								printf(" ** RIGHT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_bot);
								printf(" Your missing relics from this spot are: A(%c), D(%c), E(%c,%c)\n", missingA[0], missingD[7], missingE[6], missingE[7]); //a1 d8 e7 e8
							}

							else if ((wa_right_top <= wa_left_bot) && (wa_right_top <= wa_left_top) && (wa_right_top <= wa_right_bot))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", wa_right_top);
								printf(" Your missing relics from this spot are: A(%c), C(%c), D(%c), E(%c,%c)\n", missingA[8], missingC[8], missingD[1], missingE[3], missingE[5]); //a9 c9 d2 e4 e6
							}


							printf("\n\n==============\n");
							printf("*** JUNGLE ***\n");
							printf("==============\n");

							if ((ju_left_bot <= ju_left_top) && (ju_left_bot <= ju_middle) && (ju_left_bot <= ju_right_top))
							{
								printf(" ** LEFT BOTTOM ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_bot);
								printf(" Your missing relics from this spot are: B(%c), C(%c), D(%c), F(%c,%c)\n", missingB[1], missingC[3], missingD[5], missingF[3], missingF[8]);
							}

							else if ((ju_left_top <= ju_left_bot) && (ju_left_top <= ju_middle) && (ju_left_top <= ju_right_top))
							{
								printf(" ** LEFT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_left_top);
								printf(" Your missing relics from this spot are: A(%c%c), C(%c), D(%c), F(%c)\n", missingA[9], missingA[10], missingC[7], missingD[2], missingF[1]);
							}

							else if ((ju_middle <= ju_left_bot) && (ju_middle <= ju_left_top) && (ju_middle <= ju_right_top))
							{
								printf(" ** MIDDLE ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_middle);
								printf(" Your missing relics from this spot are: A(%c), B(%c%c), C(%c), E(%c), F(%c)\n", missingA[5], missingB[9], missingB[10], missingC[6], missingE[8], missingF[3], missingF[5]);
							}

							else if ((ju_right_top <= ju_left_bot) && (ju_right_top <= ju_left_top) && (ju_right_top <= ju_middle))
							{
								printf(" ** RIGHT TOP ** is the best spot for you, because it contains the most unclaimed relics!\n");
								printf(" ** You have already found '%d' relics on this spot! **\n", ju_right_top);
								printf(" Your missing relics from this spot are: A(%c), B(%c), C(%c), D(%c,%c)\n", missingA[4], missingB[0], missingC[4], missingD[6], missingD[8]);
							}


							printf("\n\n============\n");
							printf("*** SHIP ***\n");
							printf("============\n");
							printf(" Every spot has the same drop chance in this map!\n");
							printf(" ** You have already found '%d' relics in this map! **\n", ship);
							printf(" Your missing relics from this map are: B(%c), C(%c), D(%c,%c)\n\n", missingB[6], missingC[2], missingD[3], missingD[4]);
						}

						printf("\n\n** Have you gotten a new relic? ** (y or n): ");
						yn = yes();
						if (yn == 0)
						{
							selam++;
							dow++;
						}


					}
				} while (dow == 0);
			}

		} while (selam == 0);

		printf("\n** Would you like to relaunch the program? ** (y or n): ");

		yn = yes();
		if (yn == 1)
		{
			printf("\n");
			pause();


		}
		else if (yn == 0)
		{
			exit++;
			printf("\n\n");
		}
	} while (exit == 0);
	//clearKeyboard();

	printf("     ======================================================\n");
	printf("     |                       E N D                        |\n");
	printf("     ======================================================\n");
	printf("     == Written by P0WST4   ~  eisenberg.hanry@gmail.com ==\n");
	printf("     ======================================================\n");
	printf("     ==           steamcommunity.com/id/powsta           ==\n");
	printf("     ======================================================\n\n");
	printf("Reference: https://transformice.fandom.com/wiki/Fishing_2021#Relics\n\n");


	printf("\n(Press Enter to Quit)");
	clearKeyboard();

	return 0;
}