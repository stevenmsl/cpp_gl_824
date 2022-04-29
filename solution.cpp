#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <stack>
#include <string>
#include <sstream>
using namespace sol824;
using namespace std;

string Solution::convert(string s)
{
  auto volwel = unordered_set<char>{
      'a', 'e', 'i', 'o', 'u',
      'A', 'E', 'I', 'O', 'U'};

  auto words = stringstream(s);
  string word;
  string result;
  auto index = 0;
  while (words >> word)
  {
    /*a consonant */
    if (!volwel.count(word[0]))
      word.push_back(word.front()), word.erase(0, 1);
    result += word + "ma" + string(++index, 'a') + " ";
  }
  /*remove the extra space in the end */
  if (result.size() > 1)
    result.pop_back();

  return result;
}