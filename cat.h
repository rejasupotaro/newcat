#ifndef CAT_H_
#define CAT_H_

#include <iostream>
#include <curses.h>
#include <unistd.h>
#include <locale.h>


using namespace std;

class Cat {
private:
  int cx, cy, delta;
public:
	Cat(int x, int y);
	void init(int x, int y);
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	void run();
	void draw();
};
Cat::Cat(int x, int y) {
	init(x, y);
}
void Cat::init(int x, int y) {
	cx = x;
	cy = y;
	delta = 1;
}
int Cat::getX() {
	return cx;
}
int Cat::getY() {
  return cy;
}
void Cat::setX(int x) {
	cx = x;
}
void Cat::setY(int y) {
	cy = y;
}
void Cat::run() {
  cx += delta;

  if (cx >= 10) {
    delta = -1;
	}
	if (cx <= 0) {
		delta = 1;
	}
}
void Cat::draw() {
/*
  move(cy, cx);
  addstr("　 ∧,,∧\n");
		
	move(cy+1, cx);
	addstr("　(,,・∀・)ぬ～こぬこ\n");
		
  move(cy+2, cx);
	addstr("～(_ｕ,ｕﾉ\n");
*/

 attrset(A_BOLD);

  move(cy, cx);  
  addstr("　　　　　　　lヽ、　　　 　 　 　 　 /ヽ　　　　　　　　　　　　　　　　　　　　　　");
  move(cy+1, cx);  
  addstr("　　　　 　 　i!　ﾞヽ、 　 　　　　／ 　ﾞi!　　　　　 ..,,　.,,.;;''⌒ヽ　　　　　　　　");
  move(cy+2, cx);  
  addstr("　 　 　 　 　l　　　 ゝ-─‐-／'　　　 i!　 , ,__,,;'\"　 \"';　　　 ,ﾉ　　　　　　　　");
  move(cy+3, cx);  
  addstr("　　　　　　,／\"　　　　　　　 　 　　　i!''\"　 ....ﾞ'';;..,,;;　　,,Y\"　　　　　　");
  move(cy+4, cx);  
  addstr("　　　　　,/'　　　　　　　　　　　　　 〈　　　　　　　　　'i;;- ､,,　　　　　　　　　");
  move(cy+5, cx);  
  addstr("　 　 　　i'　　　　　　　　　　　　　　 'i,　　　　　　　　 　　 　 ﾞ\"ヽ、　　　　　");
  move(cy+6, cx);  
  addstr("　　 　 　 i!　●　　　　　●　　 　＊ ,'i　　　　　　　　　　 　　　　ﾞ）　　　　　　　　");
  move(cy+7, cx);  
  addstr("　　　　　'i,::: 　 ﾄ─‐ｲ 　 　:::::::　　,/　　　　'　　　　　ﾞ\",;''i,-‐'\"　　　　　");
  move(cy+8, cx);  
  addstr("　　,,-‐''\"ヽ､ 　 ヽ,_ノ　　　　 ,,-‐　　　　　　　　　,..;;;ﾞ\"　　　　　　　　　　　");
  move(cy+9, cx);  
  addstr("　（　　　　,,, '' 　　　　 ,,.-‐''\"　　　　　　　,,'\"´｀`´　　　　　　　　　　　　　");
  move(cy+10, cx);  
  addstr("　 ヽ,..-‐''　　　 ,.-‐''\"　　　　　　ノ-‐''\"´　　　　　　　　　　　　　　　　　　　　");
  move(cy+11, cx);  
  addstr("　　　　　　　　（　　　　　　 ,. -'\"　　　　　　　　　　　　　　　　　　　　　　　　　");
  move(cy+12, cx);  
  addstr("　　　　　　　　 ヽ、,,.. -‐'''\"　　　　　　　　　　　　　　　　　　　　　　　　　　　");

  move(0, 0);

}

#endif /* CAT_H_ */
