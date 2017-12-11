#include <iostream>
using namespace std;

void pole (bool X[][5], bool O[][5], int size = 5) {
	cout << "    1   2   3   4   5\n";
	cout << "  +---+---+---+---+---+\n";

	for (int i = 0; i < size; i++) {

		if (i == 0) cout << "a | ";
		if (i == 1) cout << "b | ";
		if (i == 2) cout << "c | ";
		if (i == 3) cout << "d | ";
		if (i == 4) cout << "e | ";

		for (int j = 0; j < 5; j++) {
			if (!(X[i][j] || O[i][j])) cout << ' ';
			else {
				if (X[i][j]) cout << 'X';
				if (O[i][j]) cout << 'O';
			}
			cout << " | ";
		}
		cout << "\n  +---+---+---+---+---+\n";
	}
}

void variantsX (bool X[][5], bool O[][5]) {
	cout << '\n';
	int i = 1;
	if (!O[0][0] && !X[0][0]) { cout << i << ". mark cell a1 as X\n"; i++; }
	if (!O[0][1] && !X[0][1]) { cout << i << ". mark cell a2 as X\n"; i++; }
	if (!O[0][2] && !X[0][2]) { cout << i << ". mark cell a3 as X\n"; i++; }
	if (!O[0][3] && !X[0][3]) { cout << i << ". mark cell a4 as X\n"; i++; }
	if (!O[0][4] && !X[0][4]) { cout << i << ". mark cell a5 as X\n"; i++; }
	if (!O[1][0] && !X[1][0]) { cout << i << ". mark cell b1 as X\n"; i++; }
	if (!O[1][1] && !X[1][1]) { cout << i << ". mark cell b2 as X\n"; i++; }
	if (!O[1][2] && !X[1][2]) { cout << i << ". mark cell b3 as X\n"; i++; }
	if (!O[1][3] && !X[1][3]) { cout << i << ". mark cell b4 as X\n"; i++; }
	if (!O[1][4] && !X[1][4]) { cout << i << ". mark cell b5 as X\n"; i++; }
	if (!O[2][0] && !X[2][0]) { cout << i << ". mark cell c1 as X\n"; i++; }
	if (!O[2][1] && !X[2][1]) { cout << i << ". mark cell c2 as X\n"; i++; }
	if (!O[2][2] && !X[2][2]) { cout << i << ". mark cell c3 as X\n"; i++; }
	if (!O[2][3] && !X[2][3]) { cout << i << ". mark cell c4 as X\n"; i++; }
	if (!O[2][4] && !X[2][4]) { cout << i << ". mark cell c5 as X\n"; i++; }
	if (!O[3][0] && !X[3][0]) { cout << i << ". mark cell d1 as X\n"; i++; }
	if (!O[3][1] && !X[3][1]) { cout << i << ". mark cell d2 as X\n"; i++; }
	if (!O[3][2] && !X[3][2]) { cout << i << ". mark cell d3 as X\n"; i++; }
	if (!O[3][3] && !X[3][3]) { cout << i << ". mark cell d4 as X\n"; i++; }
	if (!O[3][4] && !X[3][4]) { cout << i << ". mark cell d5 as X\n"; i++; }
	if (!O[4][0] && !X[4][0]) { cout << i << ". mark cell e1 as X\n"; i++; }
	if (!O[4][1] && !X[4][1]) { cout << i << ". mark cell e2 as X\n"; i++; }
	if (!O[4][2] && !X[4][2]) { cout << i << ". mark cell e3 as X\n"; i++; }
	if (!O[4][3] && !X[4][3]) { cout << i << ". mark cell e4 as X\n"; i++; }
	if (!O[4][4] && !X[4][4]) { cout << i << ". mark cell e5 as X\n"; i++; }
	cout << i << ". quit\n\n";

}

void variantsO (bool X[][5], bool O[][5]) {
	cout << '\n';
	int i = 1;
	if (!O[0][0] && !X[0][0]) { cout << i << ". mark cell a1 as O\n"; i++; }
	if (!O[0][1] && !X[0][1]) { cout << i << ". mark cell a2 as O\n"; i++; }
	if (!O[0][2] && !X[0][2]) { cout << i << ". mark cell a3 as O\n"; i++; }
	if (!O[0][3] && !X[0][3]) { cout << i << ". mark cell a4 as O\n"; i++; }
	if (!O[0][4] && !X[0][4]) { cout << i << ". mark cell a5 as O\n"; i++; }
	if (!O[1][0] && !X[1][0]) { cout << i << ". mark cell b1 as O\n"; i++; }
	if (!O[1][1] && !X[1][1]) { cout << i << ". mark cell b2 as O\n"; i++; }
	if (!O[1][2] && !X[1][2]) { cout << i << ". mark cell b3 as O\n"; i++; }
	if (!O[1][3] && !X[1][3]) { cout << i << ". mark cell b4 as O\n"; i++; }
	if (!O[1][4] && !X[1][4]) { cout << i << ". mark cell b5 as O\n"; i++; }
	if (!O[2][0] && !X[2][0]) { cout << i << ". mark cell c1 as O\n"; i++; }
	if (!O[2][1] && !X[2][1]) { cout << i << ". mark cell c2 as O\n"; i++; }
	if (!O[2][2] && !X[2][2]) { cout << i << ". mark cell c3 as O\n"; i++; }
	if (!O[2][3] && !X[2][3]) { cout << i << ". mark cell c4 as O\n"; i++; }
	if (!O[2][4] && !X[2][4]) { cout << i << ". mark cell c5 as O\n"; i++; }
	if (!O[3][0] && !X[3][0]) { cout << i << ". mark cell d1 as O\n"; i++; }
	if (!O[3][1] && !X[3][1]) { cout << i << ". mark cell d2 as O\n"; i++; }
	if (!O[3][2] && !X[3][2]) { cout << i << ". mark cell d3 as O\n"; i++; }
	if (!O[3][3] && !X[3][3]) { cout << i << ". mark cell d4 as O\n"; i++; }
	if (!O[3][4] && !X[3][4]) { cout << i << ". mark cell d5 as O\n"; i++; }
	if (!O[4][0] && !X[4][0]) { cout << i << ". mark cell e1 as O\n"; i++; }
	if (!O[4][1] && !X[4][1]) { cout << i << ". mark cell e2 as O\n"; i++; }
	if (!O[4][2] && !X[4][2]) { cout << i << ". mark cell e3 as O\n"; i++; }
	if (!O[4][3] && !X[4][3]) { cout << i << ". mark cell e4 as O\n"; i++; }
	if (!O[4][4] && !X[4][4]) { cout << i << ". mark cell e5 as O\n"; i++; }
	cout << i << ". quit\n\n";

}

bool stateX (int op, bool X[][5], bool O[][5], int size = 5) {
	int num = 0;
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 5; j++) {
			if (!X[i][j] && !O[i][j]) {
				num++;
				if (op == num) X[i][j] = true;
			}
		}
	}
	
	num++;
	if (op == num) return true;
	else return false;
}

bool stateO (int op, bool X[][5], bool O[][5], int size = 5) {
	int num = 0;
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 5; j++) {
			if (!O[i][j] && !X[i][j]) {
				num++;
				if (op == num) O[i][j] = true;
			}
		}
	}
	
	num++;
	if (op == num) return true;
	else return false;
}

void checkXwin (bool &Xwin, bool X[][5], bool O[][5]) {
  
	for (int i = 0; i < 5; i++) {
	  
		if (X[i][0] && X[i][1] && X[i][2] && X[i][3] && X[i][4]) Xwin = true;
		if (X[0][i] && X[1][i] && X[2][i] && X[3][i] && X[4][i]) Xwin = true;
	}
	
	if ((X[0][0] && X[1][1] && X[2][2] && X[3][3] && X[4][4]) || (X[0][4] && X[1][3] && X[2][2] && X[3][1] && X[4][0])) Xwin = true;
}

void checkOwin(bool &Owin, bool X[][5], bool O[][5]) {
  
	for (int i = 0; i < 5; i++) {
	  
		if (O[i][0] && O[i][1] && O[i][2] && O[i][3] && O[i][4]) Owin = true;
		if (O[0][i] && O[1][i] && O[2][i] && O[3][i] && O[4][i]) Owin = true;
	}
	
	if ((O[0][0] && O[1][1] && O[2][2] && O[3][3] && O[4][4]) || (O[0][4] && O[1][3] && O[2][2] && O[3][1] && O[4][0])) Owin = true;
}

int main() {
	bool X[5][5] = {}, O[5][5] = {};
	
	bool Xwin = false, Owin = false;
	
	int op, player = 1;

	pole(X,O);

	while (!Xwin && !Owin) {

		if (player % 2 == 1) variantsX(X, O);
		else variantsO(X, O);

		cin >> op;

		if (player % 2 == 1) {
			if (stateX(op, X, O)) break;
		}
		else if (stateO(op, X, O)) break;

		pole(X, O);

		if (player % 2 == 1) checkXwin(Xwin, X, O);
		else checkOwin(Owin, X, O);

		if ((op < (30 - player)) && (op > 0)) player++;
	}
	if (Xwin) cout << "\nplayer X wonn.\n";
	if (Owin) cout << "\nplayer O wonn.\n";

	return 0;
}
