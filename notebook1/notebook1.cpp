
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <string_view>
int main()
{
	
	     std::cout << "C++ is a general-purpose programming language with a bias towards systems programming that\n";
    std::cout << "  - is a better C\n";
    std::cout << "  - supports data abstraction\n";
    std::cout << "  - supports object-oriented programming\n";
    std::cout << "  - supports generic programming.\n";
	
    /*
    	int a;
		int b;
		std::cin >> a;
		std::cin >> b;
		std::cout << a + b << std::endl;
    */
	/*
		double a;
		std::cin >> a;
		std::cout << a / 2.54;
	*/
	/*
	    std::uint64_t n = 0;
    std::cin >> n;
    std::cout << n * (n + 1) / 2 << "\n";
}
	*/
	/*
		{int x1;
	int y1;
	int x2;
	int y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	if (x1 == x2 || y1 == y2 || std::abs(x1 - x2) == std::abs(y1 - y2)) {
		std::cout << "yes";
	}
	else {
		std::cout << "no";
	}
	*/
	/*
	 {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "UNDEFINED\n";
    } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
	*/
	/*
	{
    int year;
    std::cin >> year;

    if ((year % 400 == 0 || year % 100 != 0) && year % 4 == 0) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
	*/
	/*
	{
    int month, year;
    std::cin >> month >> year;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            std::cout << "31\n";
            break;
        case 2:
            if ((year % 400 == 0 || year % 100 != 0) && year % 4 == 0) {
                std::cout << "29\n";
            } else {
                std::cout << "28\n";
            }
            break;
        default:
            std::cout << "30\n";
    }
	*/
    /*
    {
    int n, k;
    std::cin >> n >> k;

    int dayOfWeek = n;

    for (int i = 1; i < n; ++i) {
        std::cout << "   ";
    }

    for (int day = 1; day <= k; ++day) {
        if (day < 10) {
            std::cout << " ";
        }

        std::cout << day;

        if (dayOfWeek == 7) {
            std::cout << "\n";
            dayOfWeek = 1;
        } else {
            std::cout << " ";
            dayOfWeek += 1;
        }
    }

    if (dayOfWeek != 1) {
        std::cout << "\n";
    }
    */
/*
{
    int x;
    std::cin >> x;
    int sum = 0;
    while (x != 0) {
        sum += x % 10;
        x /= 10;
    }

    std::cout << sum ;
}
*/
/*
 {
    int n;
    std::cin >> n;
    double sign = 1;
    double result = 0.0;
    for (int i = 1; i <= n; ++i) {
        result += sign / i;
        sign = -sign;
    }
    std::cout << result;
}
*/
/*
bool IsGood(const std::string& password) {
    if (password.size() < 8 || password.size() > 14) {
        return false;
    }
    int upper = 0;
    int lower = 0;
    int digit = 0;
    int other = 0;

    for (char c : password) {
        if (c < 33 || c > 126) {
            return false;
        }
        if ('A' <= c && c <= 'Z') {
            upper = 1;
        } else if ('a' <= c && c <= 'z') {
            lower = 1;
        } else if ('0' <= c && c <= '9') {
            digit = 1;
        } else {
            other = 1;
        }
    }

    return upper + lower + digit + other >= 3;
}

int main() {
    std::string password;
    std::getline(std::cin, password);
    if (IsGood(password)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}
*/
/*
void Append(std::string& res, char c) {
    if (res.back() != c) {
        res.push_back(c);
    }
}

std::string Soundex(const std::string& word) {
    std::string res;
    res.push_back(word[0]);
    for (size_t i = 1; i != word.size(); ++i) {
        char c = word[i];
        switch (c) {
            case 'b':
            case 'f':
            case 'p':
            case 'v':
                Append(res, '1');
                break;
            case 'c':
            case 'g':
            case 'j':
            case 'k':
            case 'q':
            case 's':
            case 'x':
            case 'z':
                Append(res, '2');
                break;
            case 'd':
            case 't':
                Append(res, '3');
                break;
            case 'l':
                Append(res, '4');
                break;
            case 'm':
            case 'n':
                Append(res, '5');
                break;
            case 'r':
                Append(res, '6');
                break;
        }
    }
    while (res.size() < 4) {
        res.push_back('0');
    }
    res.resize(4);
    return res;
}

int main() {
    std::string word;
    std::cin >> word;
    std::cout << Soundex(word) << "\n";
}
*/
/*
 {
    int n;
    std::cin >> n;

    std::vector<int> seats(n);
    for (int guest = 1; guest <= n; ++guest) {
        int seat;
        std::cin >> seat;
        seats[seat - 1] = guest;
    }

    for (int guest : seats) {
        std::cout << guest << " ";
    }
    std::cout << "\n";
}
*/
/*
 {
    std::vector<std::string> lines;

    std::string line;
    while (std::getline(std::cin, line)) {
        lines.push_back(line);
    }

    std::sort(lines.rbegin(), lines.rend());

    for (size_t i = 0; i != lines.size(); ++i) {
        std::cout << lines[i] << "\n";
    }
}
*/
/*
{
    std::string s;
    std::getline(std::cin, s);

    int i = 0;
    int j = static_cast<int>(s.size()) - 1;
    bool isPalindrome = true;

     while (i < j) {
        if (s[i] == ' ') {
            ++i;
        } else if (s[j] == ' ') {
            --j;
        } else if (s[i] != s[j]) {
            isPalindrome = false;
            break;
        } else {
            ++i;
            --j;
        }
    }

    if (isPalindrome) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}
*/
/*
struct Shift {
    int x = 0;
    int y = 0;
};

const std::vector<Shift> SHIFTS = {
    {-1, -1},
    {-1,  0},
    {-1,  1},
    { 0,  1},
    { 1,  1},
    { 1,  0},
    { 1, -1},
    { 0, -1},
};

int main() {
    size_t rows;
    size_t columns;
    size_t mines;
    std::cin >> rows >> columns >> mines;

    const int mineLabel = -1;

    std::vector<std::vector<int>> field(rows + 2, std::vector<int>(columns + 2));

    for (size_t index = 0; index != mines; ++index) {
        int row, column;
        std::cin >> row >> column;

        field[row][column] = mineLabel;

        for (auto shift : SHIFTS) {
            auto& cell = field[row + shift.x][column + shift.y];
            if (cell != mineLabel) {
                ++cell;
            }
        }
    }

    for (size_t row = 1; row <= rows; ++row) {
        for (size_t column = 1; column <= columns; ++column) {
            if (column > 1) {
                std::cout << " ";
            }
            if (field[row][column] == mineLabel) {
                std::cout << "*";
            } else {
                std::cout << field[row][column];
            }
        }
        std::cout << "\n";
    }
}
*/
/*
std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix) {
    std::pair<size_t, size_t> argMax = {0, 0};
    int max = matrix[0][0];
    for (size_t i = 0; i != matrix.size(); ++i) {
        for (size_t j = 0; j != matrix[i].size(); ++j) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                argMax = {i, j};
            }
        }
    }
    return argMax;
}
*/
/*
std::string_view CommonPrefix(const std::string_view a, const std::string_view b) {
    size_t i = 0;
    while (i != a.size() && i != b.size() && a[i] == b[i]) {
        ++i;
    }
    return a.substr(0, i);
}

std::string CommonPrefix(const std::vector<std::string>& words) {
    if (words.empty()) {
        return {};
    }
    std::string_view prefix = words[0];
    for (size_t i = 1; i != words.size() && !prefix.empty(); ++i) {
        prefix = CommonPrefix(prefix, words[i]);
    }
    return std::string(prefix);
}
*/
/*
std::vector<std::string> Split(const std::string& str, char delimiter) {
    std::vector<std::string> result;
    size_t i = 0;
    for (size_t j = 0; j != str.size(); ++j) {
        if (str[j] == delimiter) {
            result.push_back(str.substr(i, j - i));
            i = j + 1;
        }
    }
    result.push_back(str.substr(i));
    return result;
}
*/
/*
std::string Join(std::vector<std::string>& tokens, char delim) {
    std::string result;
    for (size_t i = 0; i != tokens.size(); ++i) {
        if (i > 0) {
            result += delim;
        }
        result += tokens[i];
    }
    return result;
}
*/
/*
std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix) {
    const size_t m = matrix.size();
    const size_t n = matrix[0].size();

    std::vector<std::vector<int>> result(n);
    for (size_t j = 0; j != n; ++j) {
        result[j].resize(m);
        for (size_t i = 0; i != m; ++i) {
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}
*/
/*
struct Point {
    int x;
    int y;
};

int main() {
    size_t n;
    std::cin >> n;

    std::vector<Point> points(n);

    for (size_t i = 0; i != n; ++i) {
        std::cin >> points[i].x >> points[i].y;
    }

    std::sort(
        points.begin(),
        points.end(),
        [](const Point& p1, const Point& p2) {
            return p1.x * p1.x + p1.y * p1.y < p2.x * p2.x + p2.y * p2.y;
        }
    );

    for (const auto& point : points) {
        std::cout << point.x << " " << point.y << "\n";
    }
}
*/
}
