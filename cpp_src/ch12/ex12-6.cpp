#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;



void fileRead(vector<string> &v, ifstream &fin){
  string line;
  while(getline(fin, line)){
    v.push_back(line);
  }
}

void search(vector<string> &v, string word){
  for (int i =0; i<v.size(); i++)
  {
    int index = v[i].find(word);
    if(index!=-1)
      cout <<v[i] << endl;
  }
}

int main()
{
  vector<string> wordVector;
  ifstream fin("words.txt");
  if (!fin){
    cout << "open error" << endl;
    return 0;
  }
  fileRead(wordVector, fin);
  fin.close();

  cout << "word.txt 파일을 읽었습니다." << endl;

  while(true){
    cout << "검색할 단어를 입력하세요 >>";
    string word;
    getline(cin, word);
    if(word == "exit")
      break;
    search(wordVector, word);
  }
  cout << "프로그램을 종료합니다." << endl;
}