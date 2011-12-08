#include <curses.h>
#include <unistd.h>
#include <locale.h>
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

void read_file(char *file_name) {
  ifstream ifs(file_name);
	string buf;

	int count = 0;
	while (ifs && getline(ifs, buf)) {
	  move(count++, 0);
	  const char *c = buf.c_str();
	  addstr(c);
	}
}
