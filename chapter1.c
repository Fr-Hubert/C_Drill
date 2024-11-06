//(c) 2024 Fr.Hubert All Rights Reserved.
//C_Drill.chapter1

//◼ 問題１：好きな食べ物の順位を1 位、2 位、3 位の順で表示出力するプログラムを実装してください。
//[制約条件] 
//それぞれの食べ物ランキングは１つの printf()文で出力すること

#include <stdio.h>

int main() {
    // 好きな食べ物のランキングを出力する
    printf("1位: ケバブ\n2位: 餃子\n3位: 焼き鳥\n");
    
    return 0; // プログラムの正常終了
}

//◼ 問題2：好きな食べ物の順位を1 位、2 位、3 位の順で表示出力するプログラムを実装してください。
//[制約条件] 
//それぞれの食べ物ランキングは３つの printf()文で出力すること

#include <stdio.h>

int main() {
    // 好きな食べ物のランキングを出力する
    printf("1位: Python\n"); // 1位のプログラミング言語を出力
    printf("2位: Java\n");   // 2位のプログラミング言語を出力
    printf("3位: C\n");      // 3位のプログラミング言語を出力
    
    return 0; // プログラムの正常終了
}

//◼ 問題3：自分の名前をアルファベットと ASCII コードで出力してください（出力形式は自由）。
//出力例 name : kai
//ASCII:0x6B 0x61 0x69

#include <stdio.h>

int main() {
  char name[] = "Fr.Hubert"; // 名前を定義
  int i;

  // 名前を出力（アルファベット）
  printf("name: %s\n", name);

  // ASCIIコードを出力
  printf("ASCII: ");
  for (i = 0; name[i] != '\0'; i++) {
      printf("0x%02x ", name[i]); // 各文字のASCIIコードを16進数で表示
  }
  printf("\n"); // 改行を追加

  return 0; // プログラムの正常終了
}

//出力結果
//name: Fr.Hubert
//ASCII: 0x46 0x72 0x2e 0x48 0x75 0x62 0x65 0x72 0x74

/* 作成中... */
