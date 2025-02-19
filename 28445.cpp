// �˷ϴ޷� �޹���
#include <iostream>
#include <vector>
#include <set>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    string father_input, mother_input;

    // �Է� �ޱ�
    getline(cin, father_input);
    getline(cin, mother_input);

    // �������� ���ڿ��� ������ ����Ʈ�� ��ȯ
    vector<string> father_color_list, mother_color_list;
    stringstream father_ss(father_input), mother_ss(mother_input);
    string color;

    while (father_ss >> color) father_color_list.push_back(color);
    while (mother_ss >> color) mother_color_list.push_back(color);

    // �� ����Ʈ ��ġ��
    vector<string> all_color_list = father_color_list;
    all_color_list.insert(all_color_list.end(), mother_color_list.begin(), mother_color_list.end());

    // �ߺ� ����
    set<string> unique_colors(all_color_list.begin(), all_color_list.end());
    all_color_list.assign(unique_colors.begin(), unique_colors.end());

    // ��� �� ���� ����
    vector<pair<string, string>> color_combination_list;
    int length = all_color_list.size();
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            color_combination_list.push_back(make_pair(all_color_list[i], all_color_list[j]));
        }
    }

    // ���� ������ ����
    sort(color_combination_list.begin(), color_combination_list.end());

    // ��� ���
    for (const auto& combination : color_combination_list) {
        cout << combination.first << " " << combination.second << endl;
    }

    return 0;
}
