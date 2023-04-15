class Solution
{
public:
    string clean(string s)
    {
        string new_string = "";
        for (char c : s)
        {
            if (isalpha(c))
                new_string += tolower(c);
            else if (isdigit(c))
                new_string += c;
        }
        return new_string;
    }

    bool isPalindrome(string s)
    {
        s = clean(s);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != s[s.length() - i - 1])
            {
                cout << s[i];
                return false;
            }
        }
        return true;
    }
};