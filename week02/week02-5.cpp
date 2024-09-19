// week02-5.cpp LeetCode 242. Valid Anagram
class Solution { //分析兩個字串，的字母組成的成份是相同的
public:
    bool isAnagram(string s, string t) {
        int H1[256] = {}, H2[256] = {}; // 一開始有 ASCII 256種字母，都是0
        for(char c : s){ //左邊字串
            H1[c]++; //放在左邊 H1[c]
        }
        for(char c : t){ //右邊字串
            H2[c]++; // 放在右邊H2[c]
        }
        for(int i=0; i<256; i++){ //針對256種字母的成份，逐一比較是否都相同
            if(H1[i] != H2[i]) return false;//不相同的話,就失敗(小寫的false)
        }//離開迴圈的話，就都沒有不同，就都相同
        return true; //就成功(小寫的true)
    }
};