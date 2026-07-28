//////////////////////////====C++====///////////////////

class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();

        int mid = n/2;

        sort(begin(s), begin(s) + mid);

        for(int i=0; i<mid; i++){
            s[n-1-i] = s[i];
        }

        return s;
    }
};



////////////////////////////====GO====////////////////////
func smallestPalindrome(s string) string {
    	n := len(s)
	mid := n / 2

	arr := []byte(s)

	sort.Slice(arr[:mid], func(i, j int) bool {
		return arr[i] < arr[j]
	})

	for i := 0; i < mid; i++ {
		arr[n-1-i] = arr[i]
	}

	return string(arr)
}



////////////////////////====PY3====//////////////////////
class Solution:
    def smallestPalindrome(self, s: str) -> str:
        n = len(s)
        mid = n//2
        s = list(s)

        s[:mid] = sorted(s[:mid])

        for i in range(mid):
            s[n-i-1] = s[i]

        return "".join(s)