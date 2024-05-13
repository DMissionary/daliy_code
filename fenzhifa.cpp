#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Allocate(const vector<int>& books, int m, int max_pages) {
    int students = 1;
    int pages_read = 0;

    for (int i = 0; i < books.size(); ++i) {
        if (pages_read + books[i] <= max_pages) {
            pages_read += books[i];
        }
        else {
            students++;
            pages_read = books[i];
        }
    }

    return students <= m;
}

int findPages(const vector<int>& books, int m, int left, int right) {
    if (left > right) return -1;

    int mid = left + (right - left) / 2;
    if (Allocate(books, m, mid) && (mid == left || !Allocate(books, m, mid - 1))) {
        return mid;
    } else if (Allocate(books, m, mid)) {
        return findPages(books, m, left, mid - 1);
    } else {
        return findPages(books, m, mid + 1, right);
    }
}

int main() {
    int n, m;
    cout << "请输入书本数量: ";
    cin >> n;
    cout << "请输入学生人数: ";
    cin >> m;
    vector<int> books(n);
    cout << "请分别输入每本书的页数（升序）:\n";
    for (int i = 0; i < n; ++i) {
        cin >> books[i];
    }

    int total_pages = 0;
    int max_page = 0;
    for (int i = 0; i < n; ++i) {
        total_pages += books[i];
        max_page = max(max_page, books[i]);
    }

    int result = findPages(books, m, max_page, total_pages);
    cout << "最小的最大页数: " << result << endl;

    return 0;
}

