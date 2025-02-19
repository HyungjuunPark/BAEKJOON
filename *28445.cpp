// 알록달록 앵무새
#include <iostream>
#include <vector>
#include <set>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    string father_input, mother_input;

    // 입력 받기
    getline(cin, father_input);
    getline(cin, mother_input);

    // 공백으로 문자열을 나누어 리스트로 변환
    vector<string> father_color_list, mother_color_list;
    stringstream father_ss(father_input), mother_ss(mother_input);
    string color;

    while (father_ss >> color) father_color_list.push_back(color);
    while (mother_ss >> color) mother_color_list.push_back(color);

    // 두 리스트 합치기
    vector<string> all_color_list = father_color_list;
    all_color_list.insert(all_color_list.end(), mother_color_list.begin(), mother_color_list.end());

    // 중복 제거
    set<string> unique_colors(all_color_list.begin(), all_color_list.end());
    all_color_list.assign(unique_colors.begin(), unique_colors.end());

    // 모든 색 조합 생성
    vector<pair<string, string>> color_combination_list;
    int length = all_color_list.size();
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            color_combination_list.push_back(make_pair(all_color_list[i], all_color_list[j]));
        }
    }

    // 사전 순으로 정렬
    sort(color_combination_list.begin(), color_combination_list.end());

    // 결과 출력
    for (const auto& combination : color_combination_list) {
        cout << combination.first << " " << combination.second << endl;
    }

    return 0;
}
