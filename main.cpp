#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol824;

/*
Input: "I speak Goat Latin"
Output: "Imaa peaksmaaa oatGmaaaa atinLmaaaaa"
*/
tuple<string, string>
testFixture1()
{
  return make_tuple("I speak Goat Latin",
                    "Imaa peaksmaaa oatGmaaaa atinLmaaaaa");
}

/*
Input: "The quick brown fox jumped over the lazy dog"
Output: "heTmaa uickqmaaa rownbmaaaa oxfmaaaaa umpedjmaaaaaa overmaaaaaaa hetmaaaaaaaa azylmaaaaaaaaa ogdmaaaaaaaaaa"
*/
tuple<string, string>
testFixture2()
{
  return make_tuple("The quick brown fox jumped over the lazy dog",
                    "heTmaa uickqmaaa rownbmaaaa oxfmaaaaa umpedjmaaaaaa overmaaaaaaa hetmaaaaaaaa azylmaaaaaaaaa ogdmaaaaaaaaaa");
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see " << get<1>(f) << endl;
  Solution sol;
  cout << sol.convert(get<0>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see " << get<1>(f) << endl;
  Solution sol;
  cout << sol.convert(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();

  return 0;
}