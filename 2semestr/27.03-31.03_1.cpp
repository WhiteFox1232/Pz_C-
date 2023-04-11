#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    string input_values;
    getline(cin, input_values);
    string input_template;
    getline(cin, input_template);

    //пари "ім'я=значення" з першого рядка
    unordered_map<string, string> value_map;
    string delimiter = ",";
    size_t pos = 0;
    while ((pos = input_values.find(delimiter)) != string::npos) {
        string pair = input_values.substr(0, pos);
        size_t equal_pos = pair.find('=');
        if (equal_pos != string::npos) {
            string name = pair.substr(0, equal_pos);
            string value = pair.substr(equal_pos + 1);
            value_map[name] = value;
        }
        input_values.erase(0, pos + delimiter.length());
    }
    // Остання пара
    size_t equal_pos = input_values.find('=');
    if (equal_pos != string::npos) {
        string name = input_values.substr(0, equal_pos);
        string value = input_values.substr(equal_pos + 1);
        value_map[name] = value;
    }

    // Замінити плейсхолдери у другому рядку значеннями
    string placeholder_start = "[";
    string placeholder_end = "]";
    string result = input_template;
    pos = 0;
    while ((pos = result.find(placeholder_start, pos)) != string::npos) {
        size_t end_pos = result.find(placeholder_end, pos + placeholder_start.length());
        if (end_pos != string::npos) {
            string placeholder = result.substr(pos + placeholder_start.length(), end_pos - pos - placeholder_start.length());
            if (value_map.find(placeholder) != value_map.end()) {
                result.replace(pos, end_pos - pos + placeholder_end.length(), value_map[placeholder]);
            }
            else {
                pos = end_pos + placeholder_end.length();
            }
        }
        else {
            break;
        }
    }

    cout << result << endl;

    return 0;
}