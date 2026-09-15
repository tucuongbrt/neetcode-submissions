class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> unique;

        for (auto& email : emails) {
            string local = email.substr(0, email.find('@'));

            // Ignore everything after '+'
            local = local.substr(0, local.find('+'));

            // Remove '.'
            local.erase(
                remove(local.begin(), local.end(), '.'),
                local.end()
            );

            // Keep domain unchanged
            unique.insert(local + email.substr(email.find('@')));
        }

        return unique.size();
    }
};