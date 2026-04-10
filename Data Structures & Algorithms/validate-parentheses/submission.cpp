class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0){
            return false;
        } 
        bool changed = true;
        while (changed) {
            changed = false;
            for (int i = 0; i < (int)s.size(); i++) {
                char open = s[i];
                if (open != '(' && open != '{' && open != '[') continue;

                // Buscar el primer cierre posible después de i
                for (int j = i + 1; j < (int)s.size(); j++) {
                    char close = s[j];
                    bool match =
                        (open == '(' && close == ')') ||
                        (open == '{' && close == '}') ||
                        (open == '[' && close == ']');

                    if (match) {
                        int between = j - i - 1;
                        if (between % 2 == 0) {
                            // borrar ambos
                            s.erase(s.begin() + j);
                            s.erase(s.begin() + i);
                            changed = true;
                        }
                        break;
                    }
                }
                if (changed) break;
            }
        }
        return s.empty();
    }
};
