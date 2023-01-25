#include <iostream>
#include "helper.hpp"
#include "colors.h"

using namespace std;

#define LIZARD u8"\U0001F438"

class GOL {
  int **board;
  int **next;
  int width;
  int height;


  void init() {
    board = allocate(width,height);
    next = allocate(width,height);
    
    for (int i = 0; i < height; i++) {
      for (int j = 0; j < width; j++) {
        if(rand()%5==0){
          board[i][j] = 1;
        }else{
          board[i][j] = 0;
        }
        
      }
    }
  }

public:
  GOL() {
    width = 80;
    height = 20;
    init();
  }

  void print() {

    for (int i = 0; i < height; i++) {
      for (int j = 0; j < width; j++) {
        if (board[i][j] == 1) {
          //cout<<ON_IYELLOW<<LIZARD;
          cout<<ON_IYELLOW<<" ";
          //cout << "▆";
          //cout << '0';
        } else {
          cout<<ON_CYAN<<" ";
        }
      }
      cout << endl<<OFF;
    }
  }
};