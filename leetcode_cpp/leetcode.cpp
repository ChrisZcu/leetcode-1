#include <string>
#include <fstream>
#include <iostream>
#include "leetcode_1108.h"
#include "leetcode_771.h"
#include "leetcode_938.h"
#include "leetcode_709.h"
#include "leetcode_1021.h"
#include "leetcode_804.h"
#include "leetcode_832.h"
#include "leetcode_905.h"
#include "leetcode_977.h"
#include "leetcode_657.h"
#include "leetcode_728.h"
#include "leetcode_617.h"
#include "leetcode_461.h"
using namespace std;
void main_1108();
void main_771();
void main_938();
void main_709();
void main_1021();
void main_804();
void main_832();
void main_905();
void main_977(); 
void main_657();
void main_728();
void main_617();
void main_461();
int main() {
	//main_1108();
	//main_771();
	//main_938();
	//main_709();
	//main_1021();
	//main_804();
	//main_832();
	//main_905();
	//main_977();
	//main_657();
	//main_728();
	//main_617();
	main_461();
	cin.get();
	cin.get();
	
return 0;
}
void main_1108() {
	string  temp = "1.1.1.1";
	Solution1108 sol1108 = Solution1108();
	cout << sol1108.defangIPaddr(temp);
	cin.get();
	cin.get();
}
void main_771() {
	unordered_map<char, bool> map;
	map.insert(make_pair('a', true));
	bool b = map.at('a');
	cout << b << endl;
	map.erase('a');
	map.insert(make_pair('a', false));
	cout << map.at('a') << endl;
	string j;
	string s;
	cin >> j;
	cin >> s;
	Solution771 sol771 = Solution771();
	cout << sol771.numJewelsInStones(j, s);
	cin.get();
	cin.get();
}
void main_938() {
	TreeNode * root = new TreeNode(10);
	root->left = new TreeNode(5);
	root->right = new TreeNode(15);
	root->left->left = new TreeNode(3);
	root->left->right = new TreeNode(7);
	root->right->left = nullptr;
	root->right->right= new TreeNode(18);
	Solution938 sol938;
	cout << sol938.rangeSumBST(root, 7, 15) << endl;
	cout << (int)'A' << " " << (int)'a' << endl;
	cin.get();
	cin.get();

}
void main_709() {
	Solution709 sol709;
	string hello = "HEllo";
	cout << sol709.toLowerCase(hello) << endl;
}
void main_1021() {
	Solution1021 sol1021;
	string s = "(()())(())(()(()))";
	cout << sol1021.removeOuterParentheses(s);

}
void main_804() {
	Solution804 sol804;
	vector<string> words = {"gin", "zen", "gig", "msg"};
	cout << sol804.uniqueMorseRepresentations(words);
}
void main_832() {
	Solution832 sol832;
	vector<vector<int>> matrixs = { {1, 1, 0 }, { 1, 0, 1 }, { 0, 0, 0 }};
	sol832.flipAndInvertImage_1(matrixs);
	sol832.flipAndInvertImage_2(matrixs);
	for (int i = 0; i < matrixs.size(); i++)
	{
		for (int j = 0; j < matrixs[0].size(); j++)
		{
			cout << matrixs[i][j] << " ";
		}
		cout << endl;
	}

}
void main_905() {
	Solution905 sol905;
	vector<int> parity = { 3,1,2,4 };
	for (int i = 0; i < parity.size(); i++)
	{
		cout << parity[i] << " ";
	}
	sol905.sortArrayByParity(parity);
	cout << "?" << endl;
	for (int i = 0; i < parity.size(); i++)
	{
		cout << parity[i] << " ";
	}

}
void main_977() {
	Solution977 sol977;
	vector<int> temp = { -1000,-998,-996,-995,-988,-985,-985,-985,-984,-977,-976,-973,-971,-969,-968,-967,-967,-963,-958,-956,-955,-954,-954,-953,-950,-950,-948,-947,-947,-945,-940,-938,-936,-936,-936,-935,-934,-930,-929,-926,-925,-924,-924,-923,-921,-915,-914,-913,-907,-903,-903,-899,-897,-892,-891,-890,-888,-886,-885,-884,-883,-882,-881,-876,-874,-874,-872,-870,-870,-869,-867,-865,-864,-862,-859,-857,-847,-847,-843,-839,-839,-838,-837,-829,-825,-825,-822,-821,-819,-819,-815,-814,-813,-811,-810,-809,-809,-808,-808,-807,-807,-806,-803,-801,-801,-800,-797,-796,-794,-789,-787,-786,-786,-785,-782,-780,-776,-774,-770,-770,-769,-769,-769,-767,-767,-762,-758,-758,-755,-749,-745,-743,-741,-740,-739,-737,-736,-735,-732,-727,-727,-726,-724,-724,-723,-722,-720,-718,-714,-713,-712,-711,-711,-710,-710,-695,-693,-692,-692,-691,-688,-687,-681,-680,-677,-676,-675,-673,-673,-669,-665,-661,-660,-659,-658,-658,-656,-656,-652,-649,-648,-646,-642,-640,-636,-633,-632,-630,-624,-624,-622,-621,-617,-616,-614,-611,-609,-606,-604,-604,-602,-600,-594,-589,-577,-574,-572,-572,-571,-568,-566,-561,-553,-547,-547,-547,-533,-532,-527,-526,-525,-519,-517,-516,-514,-510,-509,-504,-500,-499,-498,-495,-494,-493,-489,-487,-487,-486,-485,-484,-480,-472,-469,-468,-467,-461,-460,-460,-459,-457,-456,-455,-442,-441,-440,-439,-438,-435,-434,-434,-434,-433,-430,-430,-426,-421,-417,-413,-411,-410,-408,-407,-404,-403,-397,-397,-397,-396,-391,-388,-384,-381,-381,-380,-377,-375,-370,-369,-368,-367,-365,-364,-361,-356,-353,-353,-352,-351,-344,-341,-341,-341,-341,-340,-339,-338,-337,-337,-337,-336,-334,-331,-329,-329,-326,-325,-322,-316,-313,-313,-308,-308,-302,-301,-296,-295,-294,-292,-289,-288,-287,-285,-281,-280,-279,-273,-271,-270,-270,-268,-264,-264,-264,-262,-261,-259,-255,-255,-253,-251,-248,-247,-244,-242,-242,-240,-238,-237,-234,-232,-230,-227,-219,-216,-215,-213,-212,-212,-211,-209,-207,-199,-197,-193,-193,-191,-191,-190,-190,-184,-180,-177,-175,-173,-173,-172,-172,-171,-170,-170,-170,-165,-163,-163,-162,-160,-158,-158,-158,-158,-156,-152,-152,-151,-149,-143,-142,-139,-137,-137,-134,-133,-132,-126,-124,-122,-120,-120,-119,-118,-118,-117,-114,-113,-112,-111,-111,-111,-110,-110,-109,-109,-101,-100,-95,-94,-94,-92,-85,-83,-78,-77,-74,-72,-72,-70,-66,-66,-64,-64,-61,-61,-58,-58,-57,-54,-53,-51,-50,-50,-50,-46,-45,-43,-42,-40,-38,-37,-32,-30,-27,-23,-22,-21,-18,-15,-14,-14,-13,-11,-6,-6,-5,-1,3,4,8,9,13,21,23,26,26,27,31,33,35,38,38,39,39,40,42,43,50,54,57,57,60,60,62,68,70,71,73,76,77,80,91,92,93,93,93,94,95,96,97,97,103,108,115,115,116,116,120,121,121,121,124,126,126,126,126,128,134,134,138,138,139,142,146,147,150,153,157,161,162,168,172,173,174,178,178,180,180,182,185,187,189,192,192,194,194,196,201,202,203,205,211,214,214,215,216,217,218,223,225,233,233,238,241,241,244,244,244,246,249,250,251,253,256,256,258,260,261,261,263,264,267,268,271,272,272,273,274,275,275,279,282,283,286,286,287,287,290,292,293,294,295,296,297,298,299,299,302,302,305,309,309,309,311,312,313,314,315,317,317,318,320,321,323,326,327,335,339,339,341,342,347,349,351,351,356,356,357,357,357,368,375,386,387,387,387,390,394,398,402,403,406,406,407,408,409,410,414,417,417,418,419,421,422,425,426,427,427,429,432,433,435,436,438,445,445,446,447,447,449,450,450,453,459,459,462,464,468,468,469,471,474,474,474,475,475,476,476,477,479,480,481,481,485,488,488,488,493,496,497,498,503,506,506,509,514,515,517,518,523,523,523,524,527,528,529,531,532,539,540,541,543,543,546,550,551,551,553,554,555,555,557,559,560,565,577,577,582,583,584,585,587,587,589,591,592,594,596,597,599,600,605,607,613,613,615,618,620,620,621,621,622,623,624,626,626,627,627,627,630,633,633,635,637,637,638,639,640,642,643,644,644,646,647,648,652,654,655,656,658,659,664,667,668,670,674,675,675,680,682,682,688,690,691,692,698,700,703,706,710,710,712,713,713,721,722,722,728,728,731,732,734,736,738,739,739,740,741,741,743,743,745,746,747,748,750,750,753,753,758,759,762,764,768,770,772,774,774,776,778,780,782,782,784,786,789,789,790,790,791,792,792,793,793,801,802,803,803,805,806,807,808,809,811,815,815,818,818,819,823,825,827,832,837,840,841,842,847,848,848,850,852,853,854,854,859,863,865,866,866,867,868,868,869,874,875,876,880,881,882,882,887,888,894,895,897,900,901,903,903,904,905,907,909,915,916,919,926,931,932,933,934,935,938,941,941,941,944,948,952,957,959,959,962,971,971,973,976,977,977,981,983,984,984,984,985,990,992,993,996,998,999,1000 };
	sol977.sortedSquares(temp);
	for (int i = 0; i < temp.size(); i++)
	{
		cout << temp[i] << " " << endl;
	}
}
void main_657() {
	Solution657 sol657;
	string str657 = "UD";
	cout << sol657.judgeCircle(str657);

}
void main_728() {
	Solution728 sol728;
	vector<int> selfdivides = sol728.selfDividingNumbers(1, 22);
	for (size_t i = 0; i < selfdivides.size(); i++)
	{
		cout << selfdivides[i] << endl;
	}
}
void main_617() {
	Solution617 sol617;
	Solution617::TreeNode617 * x1 = new Solution617::TreeNode617(1);
	Solution617::TreeNode617 * x2 = new Solution617::TreeNode617(2);
	Solution617::TreeNode617 * x3 = new Solution617::TreeNode617(3);
	Solution617::TreeNode617 * x4 = new Solution617::TreeNode617(5);
	Solution617::TreeNode617 * y1 = new Solution617::TreeNode617(2);
	Solution617::TreeNode617 * y2 = new Solution617::TreeNode617(1);
	Solution617::TreeNode617 * y3 = new Solution617::TreeNode617(3);
	Solution617::TreeNode617 * y4 = new Solution617::TreeNode617(4);
	Solution617::TreeNode617 * y5 = new Solution617::TreeNode617(7);
	x1->left = x3;
	x1->right = x2;
	x3->left = x4;

	y1->left = y2;
	y1->right = y3;
	y2->right = y4;
	y3->right = y5;

	Solution617::TreeNode617 * sum = new Solution617::TreeNode617(0);
	sum = sol617.mergeTrees(x1, y1);
	cout << sum->val << endl;
	cout << sum->left->val << endl;
	cout << sum->right->val << endl;
	cout << sum->left->left->val << endl;
	cout << sum->left->right->val << endl;
	cout << sum->right->right->val << endl;




}
void main_461() {
	Solution461 sol461;
	cout << sol461.hammingDistance(1, 4) << endl;
}