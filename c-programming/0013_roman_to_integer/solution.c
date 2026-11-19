/*
 * Problem: LeetCode 13 - Roman to Integer
 * 
 * Explanation:
 * Map each Roman numeral to its numeric value. Scan the string from
 * left to right: if a numeral has a smaller value than the numeral after it,
 * subtract it (e.g., IV = 5 - 1 = 4); otherwise, add it to the running sum.
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int romanToInt(char* s) {
    int map[256] = {0};
    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;

    int total = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        int curr = map[(unsigned char)s[i]];
        int next = map[(unsigned char)s[i + 1]];
        if (curr < next) {
            total -= curr;
        } else {
            total += curr;
        }
    }

    return total;
}