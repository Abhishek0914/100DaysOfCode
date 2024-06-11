string read(int n, vector<int> book, int target)
{
int left = 0, right = n-1;
sort(book.begin(), book.end ()) ;
while(left < right) {

    int sum = book[left] + book[right];
    if(sum == target) {
        return "YES";
    }
    else if(sum < target) {left++;right--;}
    else right--;
}
return "No";
};