#include <iostream>

int main(int argc, char* argv[]) {
  std::string str = "123XY56";
  
  try {
    int num = 0;

    for (const auto s : str) {
      num *= 10;
      switch (s) {
        case '0':  num += 0;  break;
        case '1':  num += 1;  break;
        case '2':  num += 2;  break;
        case '3':  num += 3;  break;
        case '4':  num += 4;  break;
        case '5':  num += 5;  break;
        case '6':  num += 6;  break;
        case '7':  num += 7;  break;
        case '8':  num += 8;  break;
        case '9':  num += 9;  break;
        default:
          // コンストラクタの引数でエラーメッセージを設定
          throw std::runtime_error("数値ではない文字が入っています");
      }
    }

  std::cout << num << std::endl;  // 問題なく変換できた場合には変換後の値を出力
} catch (const std::runtime_error& e) {
   // what() でエラーメッセージを取得
   std::cout << e.what() << std::endl;
}

  std::cout << "おわり" << std::endl;

  return 0;
}
