int main()
{

    string keys[] = {"the", "a", "there",
                     "answer", "any", "by",
                     "bye", "their", "where", "when"};
    int n = sizeof(keys) / sizeof(keys[0]);

    Trie t;
    t.root = getNode();
    // Construct trie
    for (int i = 0; i < n; i++)
    {
        t.insert(keys[i]);
    }
//good
int main(){
//Jai Shree Ram
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string keys[] = {"the", "a", "there", "answer", "any", "by", "bye", "their" };
    int n = sizeof(keys)/sizeof(keys[0]);
    struct TrieNode *root = getNode();
//pudge
    for (int i = 0; i < n; i++) insert(root, keys[i]);
 
    char output[][32] = {"Not present in trie", "Present in trie"};
 
