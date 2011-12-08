#include <curses.h>
#include <unistd.h>
#include <locale.h>
#include <iostream>
#include <fstream>
#include <string>

#include "cat.h"
#include "read_file.h"

using namespace std;

int main(int argc, char *argv[]) {
  cout << "使用法: cat [オプション]... [ファイル]..." << endl;
	cout << "ファイルまたは標準入力を結合し、標準出力へ書き出したり、" << endl;
	cout << "猫が走ったりします。" << endl;

  setlocale(LC_ALL, "");
	initscr();

  if (argc > 0) read_file(argv[1]);

  attrset(A_BOLD);
  Cat *cat = new Cat(0, 3);
  while (true) {
		cat->run();
		cat->draw();
		refresh();
		usleep(100000);
	}

	endwin();
	return 0;
}
