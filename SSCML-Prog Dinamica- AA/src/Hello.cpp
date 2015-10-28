//============================================================================
// Name        : Hello.cpp
// Author      : Lívia
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {

	int n = 8;

	int m = 7;

	char * x = new char[8];

	x = "abacaxi";

	char * y = new char[7];

	y = "analax";

	int ** c = new int*[n];

	for (int k = 0; k < n; k++) {

		c[k] = new int[m];

	}

	for (int i = 0; i < n; i++) {

		c[i][0] = 0;

	}

	for (int j = 0; j < m; j++) {

		c[0][j] = 0;

	}

	for (int i = 1; i < n; i++) {

		for (int j = 1; j < m; j++) {

			if (x[i] == y[j]) {

				c[i][j] = c[i - 1][j - 1] + 1;

			} else {

				if (c[i - 1][j] > c[i][j - 1]) {

					c[i][j] = c[i - 1][j];

				} else {

					c[i][j] = c[i][j - 1];

				}

				//Bsi@CCet@Un1r10
			}
		}
	}

	int comprimento = c[n][m];

	printf("comprimento = %d", comprimento);
	system("pause");

	return 0;

}
