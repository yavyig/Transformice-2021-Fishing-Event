#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
};
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
	printf("\n");
};

int yes(void)
{
	char Value, NL;
	scanf(" %c%c", &Value, &NL);
	while ((NL != '\n') || (strchr("YyNn", Value) == NULL))
	{
		if (NL != '\n') clearKeyboard();
		printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		scanf(" %c%c", &Value, &NL);
	}
	if (strchr("Yy", Value) == NULL) {
		return 0;
	}

	return 1;
}

void getandFindMissing(char a[], char y, char* missing)
{
	int i = 0;
	int x = 0;
	//char z[20] = { '1','2','3','4','5','6','7','8','9','10' };

	int one = 0;
	int two = 0;
	int three = 0;
	int four = 0;
	int five = 0;
	int six = 0;
	int seven = 0;
	int eight = 0;
	int nine = 0;
	int ten = 0;

	int yn = 10;

	printf("** (%c) ** Did you already complete the relics %c? (y or n): ", toupper(y), toupper(y));
	yn = yes();
	if (yn == 1)
	{
		missing = NULL;
	}
	else if (yn == 0)
	{
		printf("\n** (%c) ** Which relics do you have? ~ (Put '0' if you do not have any) ~ (ex: 12345): ", toupper(y));
		scanf(" %15[^\n]", a);



		if (strlen(a) != 11)
		{

			for (i = 0; i < 11; i++)
			{
				if (a[i] == '1' && a[i + 1] == '0')
				{
					ten++;
				}
				else if (a[i] == '1')
				{
					one++;
				}
				else if (a[i] == '2')
				{
					two++;
				}
				else if (a[i] == '3')
				{
					three++;
				}
				else if (a[i] == '4')
				{
					four++;
				}
				else if (a[i] == '5')
				{
					five++;
				}
				else if (a[i] == '6')
				{
					six++;
				}
				else if (a[i] == '7')
				{
					seven++;
				}
				else if (a[i] == '8')
				{
					eight++;
				}
				else if (a[i] == '9')
				{
					nine++;
				}

			}
		}

		printf("\n** (%c) ** Your missing relics are: (", toupper(y));
		if (one == 0)
		{
			missing[0] = '1';
			printf("%c", missing[0]);
		}
		if (two == 0)
		{
			missing[1] = '2';
			printf(",%c", missing[1]);
		}
		if (three == 0)
		{
			missing[2] = '3';
			printf(",%c", missing[2]);
		}
		if (four == 0)
		{
			missing[3] = '4';
			printf(",%c", missing[3]);
		}
		if (five == 0)
		{
			missing[4] = '5';
			printf(",%c", missing[4]);
		}
		if (six == 0)
		{
			missing[5] = '6';
			printf(",%c", missing[5]);
		}
		if (seven == 0)
		{
			missing[6] = '7';
			printf(",%c", missing[6]);
		}
		if (eight == 0)
		{
			missing[7] = '8';
			printf(",%c", missing[7]);
		}
		if (nine == 0)
		{
			missing[8] = '9';
			printf(",%c", missing[8]);
		}
		if (ten == 0)
		{
			missing[9] = '1';
			missing[10] = '0';
			printf(",%c%c", missing[9], missing[10]);
		}



		printf(")\n");





	}

};
/*void getandFindMissing(char a[], char y, char* missing)*/
void missingRelics(char a[20], char b[20], char c[20], char d[20], char e[20], char f[20])
{
	//int i;
/*	int oneAA = 0;
	int twoAA = 0;
	int threeAA = 0;
	int fourAA = 0;
	int fiveAA = 0;
	int sixAA = 0;
	int sevenAA = 0;
	int eightAA = 0;
	int nineAA = 0;
	int tenAA = 0;
	int oneBB = 0;
	int twoBB = 0;
	int threeBB = 0;
	int fourBB = 0;
	int fiveBB = 0;
	int sixBB = 0;
	int sevenBB = 0;
	int eightBB = 0;
	int nineBB = 0;
	int tenBB = 0;
	int oneCC = 0;
	int twoCC = 0;
	int threeCC = 0;
	int fourCC = 0;
	int fiveCC = 0;
	int sixCC = 0;
	int sevenCC = 0;
	int eightCC = 0;
	int nineCC = 0;
	int tenCC = 0;
	int oneDD = 0;
	int twoDD = 0;
	int threeDD = 0;
	int fourDD = 0;
	int fiveDD = 0;
	int sixDD = 0;
	int sevenDD = 0;
	int eightDD = 0;
	int nineDD = 0;
	int tenDD = 0;
	int oneEE = 0;
	int twoEE = 0;
	int threeEE = 0;
	int fourEE = 0;
	int fiveEE = 0;
	int sixEE = 0;
	int sevenEE = 0;
	int eightEE = 0;
	int nineEE = 0;
	int tenEE = 0;
	int oneFF = 0;
	int twoFF = 0;
	int threeFF = 0;
	int fourFF = 0;
	int fiveFF = 0;
	int sixFF = 0;
	int sevenFF = 0;
	int eightFF = 0;
	int nineFF = 0;
	int tenFF = 0;*/

	/*
	if (strlen(a) != 11)
	{

		for (i = 0; i < 11; i++)
		{
			if (a[i] == '1' && a[i + 1] == '0')
			{
				tenAA++;
			}
			else if (a[i] == '1')
			{
				oneAA++;
			}
			else if (a[i] == '2')
			{
				twoAA++;
			}
			else if (a[i] == '3')
			{
				threeAA++;
			}
			else if (a[i] == '4')
			{
				fourAA++;
			}
			else if (a[i] == '5')
			{
				fiveAA++;
			}
			else if (a[i] == '6')
			{
				sixAA++;
			}
			else if (a[i] == '7')
			{
				sevenAA++;
			}
			else if (a[i] == '8')
			{
				eightAA++;
			}
			else if (a[i] == '9')
			{
				nineAA++;
			}

		}
	}
	if (strlen(b) != 11)
		{

			for (i = 0; i < 11; i++)
			{
				if (b[i] == '1' && a[i + 1] == '0')
				{
					tenBB++;
				}
				else if (b[i] == '1')
				{
					oneBB++;
				}
				else if (b[i] == '2')
				{
					twoBB++;
				}
				else if (b[i] == '3')
				{
					threeBB++;
				}
				else if (b[i] == '4')
				{
					fourBB++;
				}
				else if (b[i] == '5')
				{
					fiveBB++;
				}
				else if (b[i] == '6')
				{
					sixBB++;
				}
				else if (b[i] == '7')
				{
					sevenBB++;
				}
				else if (b[i] == '8')
				{
					eightBB++;
				}
				else if (b[i] == '9')
				{
					nineBB++;
				}
			}
		}
	if (strlen(c) != 11)
			{

				for (i = 0; i < 11; i++)
				{
					if (c[i] == '1' && a[i + 1] == '0')
					{
						tenCC++;
					}
					else if (c[i] == '1')
					{
						oneCC++;
					}
					else if (c[i] == '2')
					{
						twoCC++;
					}
					else if (c[i] == '3')
					{
						threeCC++;
					}
					else if (c[i] == '4')
					{
						fourCC++;
					}
					else if (c[i] == '5')
					{
						fiveCC++;
					}
					else if (c[i] == '6')
					{
						sixCC++;
					}
					else if (c[i] == '7')
					{
						sevenCC++;
					}
					else if (c[i] == '8')
					{
						eightCC++;
					}
					else if (c[i] == '9')
					{
						nineCC++;
					}
				}
			}
	if (strlen(d) != 11)
			{

				for (i = 0; i < 11; i++)
				{
					if (d[i] == '1' && a[i + 1] == '0')
					{
						tenDD++;
					}
					else if (d[i] == '1')
					{
						oneDD++;
					}
					else if (d[i] == '2')
					{
						twoDD++;
					}
					else if (d[i] == '3')
					{
						threeDD++;
					}
					else if (d[i] == '4')
					{
						fourDD++;
					}
					else if (d[i] == '5')
					{
						fiveDD++;
					}
					else if (d[i] == '6')
					{
						sixDD++;
					}
					else if (d[i] == '7')
					{
						sevenDD++;
					}
					else if (d[i] == '8')
					{
						eightDD++;
					}
					else if (d[i] == '9')
					{
						nineDD++;
					}
				}
			}
	if (strlen(e) != 11)
					{

						for (i = 0; i < 11; i++)
						{
							if (e[i] == '1' && a[i + 1] == '0')
							{
								tenEE++;
							}
							else if (e[i] == '1')
							{
								oneEE++;
							}
							else if (e[i] == '2')
							{
								twoEE++;
							}
							else if (e[i] == '3')
							{
								threeEE++;
							}
							else if (e[i] == '4')
							{
								fourEE++;
							}
							else if (e[i] == '5')
							{
								fiveEE++;
							}
							else if (e[i] == '6')
							{
								sixEE++;
							}
							else if (e[i] == '7')
							{
								sevenEE++;
							}
							else if (e[i] == '8')
							{
								eightEE++;
							}
							else if (e[i] == '9')
							{
								nineEE++;
							}
						}
					}
	if (strlen(f) != 11)
						{

							for (i = 0; i < 11; i++)
							{
								if (f[i] == '1' && a[i + 1] == '0')
								{
									tenFF++;
								}
								else if (f[i] == '1')
								{
									oneFF++;
								}
								else if (f[i] == '2')
								{
									twoFF++;
								}
								else if (f[i] == '3')
								{
									threeFF++;
								}
								else if (f[i] == '4')
								{
									fourFF++;
								}
								else if (f[i] == '5')
								{
									fiveFF++;
								}
								else if (f[i] == '6')
								{
									sixFF++;
								}
								else if (f[i] == '7')
								{
									sevenFF++;
								}
								else if (f[i] == '8')
								{
									eightFF++;
								}
								else if (f[i] == '9')
								{
									nineFF++;
								}
							}
						} */
		
			if (a[0]!=NULL)
			{
				printf("A1 WATERFALL RIGHT BOTTOM\n");
			}
			if (a[1] != NULL)
			{
				printf("A2 ISLAND RIGHT BOTTOM\n");
			}
			if (a[2] != NULL)
			{
				printf("A3 ISLAND LEFT BOT\n");
			}
			if (a[3] != NULL)
			{
				printf("A4 WATERFALL LEFT BOT\n");
			}
			if (a[4] != NULL)
			{
				printf("A5 JUNGLE RIGHT TOP\n");
			}
			if (a[5] != NULL)
			{
				printf("A6 JUNGLE MIDDLE\n");
			}
			if (a[6] != NULL)
			{
				printf("A7 TOP ISLAND\n");
			}
			if (a[7] != NULL)
			{
				printf("A8 ISLAND LEFT BOT\n");
			}
			if (a[8] != NULL)
			{
				printf("A9 WATERFALL RIGHT TOP\n");
			}
			if (a[9] != NULL && a[10] != NULL)
			{
				printf("A10 JUNGLE LEFT TOP\n");
			}

			if (b[0] != NULL)
			{
				printf("B1 JUNGLE RIGHT TOP\n");
			}
			if (b[1] != NULL)
			{
				printf("B2 JUNGLE LEFT BOT\n");
			}
			if (b[2] != NULL)
			{
				printf("B3 WATERFALL LEFT TOP\n");
			}
			if (b[3] != NULL)
			{
				printf("B4 WATERFALL LEFT BOT\n");
			}
			if (b[4] != NULL)
			{
				printf("B5 ISLAND LEFT BOT\n");
			}
			if (b[5] != NULL)
			{
				printf("B6 TOP ISLAND\n");
			}
			if (b[6] != NULL)
			{
				printf("B7 SHIP\n");
			}
			if (b[7] != NULL)
			{
				printf("B8 WATERFALL LEFT TOP\n");
			}
			if (b[8] != NULL)
			{
				printf("B9 ISLAND RIGHT BOTTOM\n");
			}
			if (b[9] != NULL && b[10] != NULL)
			{
				printf("B10 JUNGLE MIDDLE\n");
			}

			if (c[0] != NULL)
			{
				printf("C1 ISLAND RIGHT BOTTOM\n");
			}
			if (c[1] != NULL)
			{
				printf("C2 ISLAND CLOUD\n");
			}
			if (c[2] != NULL)
			{
				printf("C3 SHIP\n");
			}
			if (c[3] != NULL)
			{
				printf("A4 JUNGLE LEFT BOT\n");
			}
			if (c[4] != NULL)
			{
				printf("C5 JUNGLE RIGHT TOP\n");
			}
			if (c[5] != NULL)
			{
				printf("C6 ISLAND LEFT BOT\n");
			}
			if (c[6] != NULL)
			{
				printf("C7 JUNGLE MIDDLE\n");
			}
			if (c[7] != NULL)
			{
				printf("C8 JUNGLE LEFT TOP\n");
			}
			if (c[8] != NULL)
			{
				printf("C9 WATERFALL RIGHT TOP\n");
			}
			if (c[9] != NULL && c[10] != NULL)
			{
				printf("C10 WATERFALL LEFT TOP\n");
			}

			if (d[0] != NULL)
			{
				printf("D1 WATERFALL LEFT BOT\n");
			}
			if (d[1] != NULL)
			{
				printf("D2 WATERFALL RIGHT TOP\n");
			}
			if (d[2] != NULL)
			{
				printf("D3 JUNGLE LEFT TOP\n");
			}
			if (d[3] != NULL)
			{
				printf("D4 SHIP\n");
			}
			if (d[4] != NULL)
			{
				printf("D5 SHIP\n");
			}
			if (d[5] != NULL)
			{
				printf("D6 JUNGLE LEFT BOT\n");
			}
			if (d[6] != NULL)
			{
				printf("D7 JUNGLE RIGHT TOP\n");
			}
			if (d[7] != NULL)
			{
				printf("D8 WATERFALL RIGHT BOTTOM\n");
			}
			if (d[8] != NULL)
			{
				printf("D9 JUNGLE RIGHT TOP\n");
			}
			if (d[9] != NULL && d[10] != NULL)
			{
				printf("D10 WATERFALL LEFT BOT\n");
			}

			if (e[0] != NULL)
			{
				printf("E1 WATERFALL LEFT TOP\n");
			}
			if (e[1] != NULL)
			{
				printf("E2 TOP ISLAND\n");
			}
			if (e[2] != NULL)
			{
				printf("E3 WATERFALL LEFT TOP\n");
			}
			if (e[3] != NULL)
			{
				printf("E4 WATERFALL RIGHT TOP\n");
			}
			if (e[4] != NULL)
			{
				printf("E5 ISLAND CLOUD\n");
			}
			if (e[5] != NULL)
			{
				printf("E6 WATERFALL RIGHT TOP\n");
			}
			if (e[6] != NULL)
			{
				printf("E7 WATERFALL RIGHT BOTTOM\n");
			}
			if (e[7] != NULL)
			{
				printf("E8 WATERFALL RIGHT BOTTOM\n");
			}
			if (e[8] != NULL)
			{
				printf("E9 JUNGLE MIDDLE\n");
			}
			if (e[9] != NULL && e[10] != NULL)
			{
				printf("E10 WATERFALL LEFT BOT\n");
			}

			if (f[0] != NULL)
			{
				printf("F1 ISLAND RIGHT BOTTOM\n");
			}
			if (f[1] != NULL)
			{
				printf("F2 JUNGLE LEFT TOP\n");
			}
			if (f[2] != NULL)
			{
				printf("F3 ISLAND CLOUD\n");
			}
			if (f[3] != NULL)
			{
				printf("F4 JUNGLE LEFT BOT\n");
			}
			if (f[4] != NULL)
			{
				printf("F5 ISLAND LEFT BOT\n");
			}
			if (f[5] != NULL)
			{
				printf("F6 JUNGLE MIDDLE\n");
			}
			if (f[6] != NULL)
			{
				printf("F7 TOP ISLAND\n");
			}
			if (f[7] != NULL)
			{
				printf("F8 ISLAND CLOUD\n");
			}
			if (f[8] != NULL)
			{
				printf("F9 JUNGLE LEFT BOT\n");
			}
			if (f[9] != NULL && f[10] != NULL)
			{
				printf("F10 TOP ISLAND\n");
			}

		}