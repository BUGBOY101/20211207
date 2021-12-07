#define	_CRT_SECURE_NO_WARNINGS 1



//#include<iostream>
//using namespace std;
//int sushu(int n) {
//	int i;
//	for (i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main() {
//	int n;
//	cin >> n;
//	if (sushu(n))
//		cout << "yes" << endl;
//	else
//		cout << "no" << endl;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int a, b;
//	a = 1;
//	b = a++;
//	cout << a << " " << b << endl;
//	cout << strlen("\t\v\\\0will\n") << endl;
//	cout << "\t" << endl;
//	cout << "\v" << " " << "\\" << "\0" << endl;
//	cout << strlen("sizeof") << " " << sizeof("sizeof") << endl;
//}

//#include<iostream>
//using namespace std;
//double my_sqrt(int n) {
//	double low = 1, high = n / 2 + 1, mid, lastmid;
//	mid = (low + high) / 2;
//	do {
//		if (mid * mid < n)
//			low = mid;
//		else
//			high = mid;
//		lastmid = mid;
//		mid = (low + high) / 2;
//
//	} while (fabs(high - low)>1e-6);
//	return mid;
//}
//int fun(int n) {
//	int i;
//	double sum = 0.0;
//	for (i = 55; i < n; i++) {
//		if(i%55==0)
//			sum += my_sqrt(1.0*i);
//	}
//	return sum;
//}
//int main() {
//	int n;
//	cin >> n;
//	cout << fun(n) << endl;
//}

//大数相加

//#include<iostream>
//using namespace std;
//int a[1000]={0}, b[1000]={0}, c[1000]={0};
//int main() {
//	char s1[1000], s2[1000];
//	int i, j, la, lb;
//	while (cin >> s1 >> s2) {
//		memset(a, 0, sizeof(a));
//		memset(b, 0, sizeof(b));
//		memset(c, 0, sizeof(c));
//		la = strlen(s1);
//		lb = strlen(s2);
//		for (i = strlen(s1) - 1, j = 0; i >= 0; i--, j++)
//			a[j] = s1[i] - '0';
//		for (i = strlen(s2) - 1, j = 0; i >= 0; i--, j++)
//			b[j] = s2[i] - '0';
//		int l = la > lb ? la : lb;
//		for (i = 0; i < l; i++) {
//			c[i] += a[i] + b[i];
//			if (c[i] >= 10) {
//				c[i + 1] += c[i] / 10;
//				c[i] %= 10;
//			}
//		}
//		for (i = l; i >= 0; i--) {
//			if (c[i] == 0)
//				continue;
//			else
//				break;
//		}
//		for (; i >= 0; i--)
//			cout << c[i];
//		cout << endl;
//	}
//}

//大数相乘

//#include<iostream>
//#include<string>
//#define N 1010
//using namespace std;
//int main() {
//	char str1[1010], str2[1010];
//	int i, j, la, lb;
//	int  a[N] = { 0 }, b[N] = { 0 }, ans[2 * N] = { 0 };
//	cin >> str1 >> str2;
//	la = strlen(str1);
//	lb = strlen(str2);
//	for (i = la - 1, j = 0; i >= 0; i--, j++) {
//		a[j] = str1[i] - '0';
//	}
//	for (i = lb - 1, j = 0; i >= 0; i--, j++) {
//		b[j] = str2[i] - '0';
//	}
//	for (i = 0; i < la; i++) {
//		for (j = 0; j < lb; j++) {
//			ans[i + j] += a[i] * b[j];
//		}
//	}
//	for (i = 0; i < la + lb; i++) {
//		if (ans[i] > 9) {
//			ans[i+1] += ans[i] / 10;
//			ans[i] %= 10;
//		}
//	}
//	for (i = la + lb; i >= 0; i--) {
//		if (ans[i] == 0)
//			continue;
//		else
//			break;//找到非零的位置
//	}
//	for (; i >= 0; i--)
//		cout << ans[i];
//	cout << endl;
//
//
//}

//#include<iostream>
//#include<string>
//using namespace std;
//#define N 1010
//int main() {
//	char str1[1010], str2[1010];
//	int i, j,la, lb;
//	while (cin >> str1 >> str2) {
//		int  a[N]={0}, b[N]={0}, ans[2 * N] = {0};
//		la = strlen(str1);
//		lb = strlen(str2);
//		for (i = la - 1,j=0; i >= 0; i--,j++) {
//			a[j] = str1[i] - '0';
//		}
//		for (i = lb - 1, j = 0; i >= 0; i--,j++) {
//			b[j] = str2[i] - '0';
//		}
//		for (i = 0; i < la; i++) {
//			for (j = 0; j < lb; j++) {
//				ans[i + j] += a[i] * b[j];
//			}
//		}
//		for (i = 0; i < la + lb; i++) {
//			if (ans[i] >9) {
//				ans[++i] += ans[i] / 10;
//				ans[i] %= 10;
//			}
//		}
//		for (i = la + lb; i >= 0;i--) {
//			if (ans[i] == 0)
//				continue;
//			else
//				break;//找到非零的位置
//		}
//		for (; i >= 0; i--)
//			cout << ans[i];
//		cout << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//int main() {
//	char c;
//	int i, j;
//	cin >> c;
//	for (i = 1; i <= 3; i++) {
//		for (j = 0; j < 3 - i; j++)
//			cout << " ";
//		for (j = 0; j < 2 * i - 1; j++)
//			cout << c;
//		cout << endl;
//	}
//	/*cout << "  *  " << endl;
//	cout << " *** " << endl;
//	cout << "*****" << endl;*/
//}
//数根

//#include<iostream>
//#include<string.h>
//using namespace std;
//int main() {
//	char str[10000];
//	int sum, i;
//	while (cin >> str) {
//		sum = 0;
//		for (i = 0; i < strlen(str); i++) {
//			sum += str[i] - '0';
//		}
//		while (sum >= 10) {
//			int x = 0;
//			while (sum > 0) {
//				x += sum % 10;
//				sum /= 10;
//			}
//			sum = x;
//		}
//		cout << sum << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//#define N 100
//int main() {
//	int n, na, nb, i;
//	int a[N]={0}, b[N]={0};
//	while (cin >> n >> na >> nb) {
//		int count1 = 0, count2 = 0;
//		for (i = 0; i < na; i++)
//			cin >> a[i];
//		for (i; i < n; i++)
//			a[i] = a[i - na];
//		for (i = 0; i < nb; i++)
//			cin >> b[i];
//		for (i; i < n; i++)
//			b[i] = b[i - nb];
//		for (i = 0; i < n; i++) {
//			if ((a[i] == 0 && b[i] == 2) || (a[i] == 2 && b[i] == 5) || (a[i] == 5 && b[i] == 0))
//				count1++;
//			else if ((b[i] == 0 && a[i] == 2) || (b[i] == 2 && a[i] == 5) || (b[i] == 5 && a[i] == 0))
//				count2++;
//			else {
//
//			}
//		}
//		if (count1 > count2)
//			cout << "A" << endl;
//		else if (count1 < count2)
//			cout << "B" << endl;
//		else
//			cout << "draw" << endl;
//	}
//}

//#include<iostream>
//#include <stack>
//using namespace std;
//int main() {
//	stack<char>S;
//	int i = 0;
//	char str[] = "students white";
//	while (str[i]) {
//		S.push(str[i]);
//		i++;
//	}
//	cout << S.top() << endl;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int a[100], i, j, n;
//	while (cin >> n && n) {
//		for (i = 0; i < n; i++)
//			cin >> a[i];
//		i = 0, j = n - 1;
//		while (i < j) {
//			int temp = *(a + i);
//			*(a + i) = *(a + j);
//			*(a + j) = temp;
//			i++;
//			j--;
//		}
//		/*while (i < j) {
//			int temp = a[i];
//			a[i] = a[j];
//			a[j] = temp;
//			i++;
//			j--;
//		}*/
//		for (i = 0; i < n; i++)
//			cout << a[i] << " ";
//		cout << endl;
//	}
//}