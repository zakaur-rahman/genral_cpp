vector < int > findArrayIntersection(vector < int > & arr1, int n, vector < int > & arr2, int n) {
    // Write C++ code here
    int arr1[5] = {
        3,
        5,
        4,
        7,
        5
    };
    int arr2[5] = {
        8,
        5,
        2,
        6,
        3
    };

    int i = 0, j = 0;
    vector < int > ans;
    while (i < 5 && j < 5) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    return ans;

}
