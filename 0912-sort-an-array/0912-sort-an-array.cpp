class Solution {
public:
    void merge(vector<int>& arr, int start, int mid, int end) {
        vector<int> temp;
        int i = start, j = mid + 1;
        while (i <= mid && j <= end) {
            if (arr[i] < arr[j]) temp.push_back(arr[i++]);
            else temp.push_back(arr[j++]);
        }
        while (i <= mid) temp.push_back(arr[i++]);
        while (j <= end) temp.push_back(arr[j++]);
        for (int k = 0; k < temp.size(); k++) arr[start + k] = temp[k];
    }

    void mergeSort(vector<int>& arr, int start, int end) {
        if (start >= end) return;
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }

    vector<int> sortArray(vector<int>& arr) {
        mergeSort(arr, 0, arr.size() - 1);
        return arr;
    }
};
