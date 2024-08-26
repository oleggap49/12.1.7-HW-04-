// 12.1.7(HW-04).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

bool IsKPeriodic(const int K, const string& txt)
{
    if (K <= 0) return false;
    string pattern;
     
     pattern = txt.substr(0,K) ;
    

    int N = txt.size();
    int j;
    for (int i = 0; i <= N - K; i+=K) {
        for (j = 0; j < K; j++) {
            if (txt[i + j] != pattern[j]) return false;
        }
    }
    return true;
}
int main()
{
    setlocale(LC_ALL, "");
    int k = 3;
    string text = "abcabcabc";
  if(IsKPeriodic(k, text))
      cout << "Строка " << text << " кратна " << k << endl;
  else 
      cout << "Строка " << text << "  не кратна " << k << endl;
}

