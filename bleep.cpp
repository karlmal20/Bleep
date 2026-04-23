#include <iostream>
#include <string>

void bleep(std::string word, std::string &text){
  for(int i = 0; i < text.size(); i++){
    bool match = true;

    for(int j = 0; j < word.size(); j++){
      if(i+j >= text.size() || text[i + j] != word[j]){
        match = false;
        break;
      }
    }
    if(match){
      for (int j = 0; j < word.size(); j++){
        text[i +j] = '*';
      }
    }
  }
}

int main(){
  std::string word = "broccoli";
  std::string text = "I sometimes eat broccoli. There are three interesting things about broccoli. Number One. Nobody knows how to spell it. Number Two. No matter how long you boil it, it's always cold by the time it reaches your plate. Number Three. It's green. #broccoli";

  bleep(word, text);
  std::cout << text;

  return 0;
}
