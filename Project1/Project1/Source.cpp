잘 모르겠는거 $$$$$
홍정모 6.2 배열기초
#include <iostream>
using namespace std;

#define NUM_STUDENTS 100000

void doSomething(int students_scores[20])
{
	cout << (int)&students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "size in doSomething" << sizeof(students_scores) << endl;
}

int main()
{
	const int num_students = 20;
	//cin >> num_students;

	int students_scores[num_students] = { 1, 2, 3, 4, 5 };

	cout << (int)&students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "size in main" << sizeof(students_scores) << endl;
	doSomething(students_scores);

	return 0;
}

홍정모 6.3 배열과 반복문
#include <iostream>

using namespace std;

int main()
{

	const int num_students = 5;
	int scores[num_students] = { 84, 92, 76, 81, 56 };

	int max_score = 0;
	int total_score = 0;
	for (int i = 0; i < num_students; ++i)
	{
		total_score = scores[i];
		if (max_score < scores[i])max_score = scores[i];
	}

	double avg_score = static_cast<double>(total_score) / num_students;

	cout << max_score << endl;

	return 0;
}

홍정모 6.5정적 다차원 배열
#include <iostream>
using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_colums = 5;

	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_colums; ++col)
			cout << '[' << row << ']' << '[' << col << ']' << '\t';

		cout << endl;
	}

	cout << endl;

	int array[num_rows][num_colums]
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};
	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_colums; ++col)
			//cout << '[' << row << ']' << '[' << col << ']' << '\t';
			cout << (int)&array[row][col] << '\t';

		cout << endl;
	}


	return 0;
}

홍정모 6.7 포인터의 기본적인 사용법
#include <iostream>
#include <typeinfo>

using namespace std;

struct something
{
	int a, b, c, d;
};

int main()
{
	int x = 5;
	double d = 123.0;

	int* ptr_x = &x;
	double* ptr_d;

	cout << *ptr_x << endl;

	/*cout << ptr_x << endl;
	cout << *ptr_x << endl;

	cout << ptr_d << endl;
	cout << *ptr_d << endl;

	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;

	something ss;
	something *ptr_s;

	cout << sizeof(something) << endl;
	cout << sizeof(ptr_s) << endl;*/

	return 0;
}

6.8 포인터와 정적배열
#include <iostream>
using namespace std;
//void printarray(int array[1]) 아래와 같다
//void printarray(int *array)
//{
//	cout << sizeof(array) << endl;
//	cout << *array << endl;
//
//	*array = 100;
//}

struct mystruct
{
	int array[5] = { 9, 7, 5, 3, 1 };
};

void dosomething(mystruct ms)
{
	cout << sizeof(ms.array) << endl;
}

int main()
{

	/*int array[5] = { 9, 7, 5, 3, 1 };*/

	//cout << array[0] << " " << array[1] << endl;
	//cout << array << endl;
	//cout << &(array[0]) << endl;

	//cout << *array << endl;

	//int *ptr = array;
	//cout << ptr << endl;
	//cout << *ptr << endl;

	/*char name[] = "lee";
	cout << *name << endl;*/


	//cout << sizeof(array) << endl; //5*4이므로
	//int *ptr = array;
	//cout << sizeof(ptr) << endl;  // 포인터 변수 자체의 변수 크기가 4바이트이다
	//printarray(array);
	//cout << *ptr << " " << *(ptr + 1) << endl;

	//cout << array[0] << " " << *array << endl;
	//포인터는 printarray 함수 밖에서도 값이 변한다.

	mystruct ms;
	cout << ms.array[0] << endl;
	cout << sizeof(ms.array) << endl;

	dosomething(ms);

	return 0;
}

6.9 포인터 연산과 배열 인덱싱
#include <iostream>

using namespace std;

int main()
{
	/*double value = 7;
	double *ptr = &value;

	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr + 2) << endl;*/

	//int array[] = { 9, 7, 5, 3, 1 };
	//int *ptr = array;

	//for (int i = 0; i < 5; ++i)
	//{
	//	//cout << array[i] << " " << (uintptr_t)&array[i] << endl;
	//	cout << *(ptr + i) << " " << (uintptr_t)(ptr + i) << endl;
	//}
	//---------------------------------------------------------------------
	//char name[] = "jack jack";

	//const int n_name = sizeof(name) / sizeof(char);

	//for (int i = 0; i < n_name; ++i)
	//{
	//	cout << *(name + i);  //jack jack\n
	//}

	return 0;
}

6.10 C언어 스타일의 문자열 심볼릭 상수
#include <iostream>

using namespace std;

int main()
{
	//const char *name = "jack jack";
	////const가 붙어야 문자를 기호적 상수로 쓸 수 있다
	//const char *name2 = "jack jack";

	//cout << (uintptr_t)name << endl;
	//cout << (uintptr_t)name2 << endl;

	/*int int_arr[5] = { 1, 2, 3, 4, 5 };
	char char_arr[] = "Hello, world!";
	const char *name = "Jack Jack";
	cout << int_arr << endl;
	cout << char_arr << endl;
	cout << name << endl;*/

	//char c = 'Q';
	//cout << *&c << endl;

	return 0;
}

6.11 메모리 동적 할당 new와 delete $$$$$
#include <iostream>

using namespace std;

int main()
{
	//int var;
	//var=7;

	//int *ptr = new int{ 7 };
	//cout << ptr << endl;
	//cout << *ptr << endl;

	//delete ptr;
	//ptr = nullptr;  //포인터가 갖고 있는 값이 쓸모 없는 값이라고 알려주는 것

	//cout << "After delete" << endl;
	//if (ptr != nullptr)
	//{
	//	cout << ptr << endl;
	//	cout << *ptr << endl;
	//}\

	//메모리 누수

	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;

		delete ptr;
	}


	return 0;
}


6.12 동적 할당 배열
#include <iostream>

using namespace std;

int main()
{
	//int length;

	//cin >> length;
	//
	////int array[length];
	//int *array = new int[length];

	//array[0] = 1;
	//array[1] = 2;
	//for (int i = 0; i < length; ++i)
	//{
	//	cout << (uintptr_t)&array[i] << endl;
	//	cout << array[i] << endl;
	//}

	/*delete [] array;*/

	int fixedarray[] = { 1, 2, 3, 4, 5 };

	int* array = new int[5]{ 1, 2, 3, 4, 5 };

	delete[] array;

	return 0;
}

6.13 포인터와 const
#include <iostream>

using namespace std;

int main()
{
	/*int value1 = 5;
	const int *ptr = &value1;

	int value2 = 6;
	ptr = &value2;*/

	//int value = 5;
	//int *const ptr = &value;

	//*ptr = 10;
	//cout << *ptr << endl;

	//int value2 = 8;
	//ptr = &value2 ;  // 불가능

	int value = 5;
	const int* ptr1 = &value;
	int* const ptr2 = &value;
	const int* const ptr3 = &value;

	return 0;
}

6.14 참조 변수 reference variable
#include <iostream>

using namespace std;

//int main()
//{
	//int value = 5;

	//int*ptr = nullptr;
	//ptr = &value;

	//int &ref = value;  //ref는 value의 참조변수(별칭)

	////cout << ref << endl;
	////ref = 10;  //==*ptr=10;
	////cout << value << " " << ref << endl;

	//cout << &value << endl;
	//cout << &ref << endl;
	//cout << ptr << endl;
	//cout << &ptr << endl;
	//------------------------------------------ -
	/*	int x = 5;
		int &ref = x;
		cout << &ref << endl;

		const int y = 8;
		const int &ref = y;*/
		//--------------------------------------------------
		/*int value1 = 5;
		int value2 = 10;

		int &ref1 = value1;
		cout << ref1 << endl;
		ref1 = value2;
		cout << ref1 << endl;*/
		//---------------------------------------------
			/*void dosomething(int n)
			{
				cout << n << endl;
				n = 10;
				cout << "indosomething " << n << endl;
			}

			int main()
			{
				int n = 5;
				cout << n << endl;
				cout << n << endl;
				dosomething(n);
				cout << n << endl;*/
				//--------------------------------------------
struct something
{
	int v1;
	float v2;
};
struct other
{
	something st;
};
int main()
{
	int value = 5;
	int* const ptr = &value;
	int& ref = value;

	cout << "value : " << value << endl;
	cout << "&value : " << &value << endl;
	cout << "*const ptr : " << *ptr << endl;
	cout << "&ref : " << &ref << endl;

	return 0;
}

6.15 참조와 const
#include <iostream>

using namespace std;

void dosomething(const int& x)
{
	cout << x << endl;
}

int main()
{
	/*const int x = 5;
	const int &ref_x = x;*/

	//const int &ref_2 = ref_x;

	//const int &ref_x = 3 + 4;  //가능
	//int &ref_x = 3 + 4;        //불가능

	int a = 1;
	dosomething(a);
	dosomething(1);
	dosomething(a + 3);
	dosomething(3 * 4);


	return 0;
}

6.16 포인터와 참조의 멤버 선택
#include <iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{
	Person person;

	person.age = 5;
	person.weight = 10;

	Person& ref = person;
	ref.age = 15;

	Person* ptr = &person;
	ptr->age = 30;
	(*ptr).age = 20;

	Person& ref2 = *ptr;
	ref2.age = 45;

	cout << &person << endl;
	cout << &ref2 << endl;

	return 0;
}

6.17 C++11 For - each 반복문
//최댓값 구하는 방법
#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int main()
{
	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	int max_number = numeric_limits<int>::lowest();

	for (const auto& n : fibonacci)
		max_number = max(max_number, n);

	cout << max_number << endl;

	return 0;
}

6.18 보이드 포인터
#include <iostream>

using namespace std;

int main()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i;
	ptr = &f;
	//ptr = &c;

	cout << &f << " " << ptr << endl;
	cout << *static_cast<float*>(ptr) << endl;

	return 0;
}

6.19 다중 포인터와 동적 다차원 배열
#include <iostream>

using namespace std;

int main()
{
	/*int *ptr = nullptr;
	int **ptrptr = nullptr;

	int value = 5;

	ptr = &value;
	ptrptr = &ptr;

	cout << ptr << " " << *ptr << " " << &ptr << " " << endl;
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << " " << endl;
	cout << **ptrptr << endl;*/
	//-----------------------------------------------------------------
	const int row = 3;
	const int col = 5;

	const int s2da[][5] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	int* matrix = new int[row * col];

	for (int r = 0; r < row; ++r)
		for (int c = 0; c < col; ++c)
			matrix[c + col * r] = s2da[r][c];

	//// print all elements
	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			cout << matrix[c + col * r] << " ";
		cout << endl;
	}

	delete[] matrix;

	//int **matrix = new int *[row];

	//for (int r = 0; r < row; ++r)
	//	matrix[r] = new int[col];

	//for (int r = 0; r < row; ++r)
	//{
	//	for (int c = 0; c < col; ++c)
	//		matrix[r][c] = s2da[r][c];
	//}

	//// print all elements
	//for (int r = 0; r < row; ++r)
	//{
	//	for (int c = 0; c < col; ++c)
	//		cout << matrix[r][c] << " ";
	//	cout << endl;
	//}                                     // 이중포인터를 이용한 배열

	////delete
	//for (int r = 0; r < row; ++r)
	//	delete[] matrix[r];

	//delete[] matrix;
	/*delete[] r1;
	delete[] r2;
	delete[] r3;
	delete[] rows;*/

	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int* ptr = nullptr;
	int** ptrptr = nullptr;

	int value = 5;

	ptr = &value;
	ptrptr = &ptr;

	cout << ptr << " " << *ptr << " " << &ptr << " " << endl;
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << " " << endl;
	cout << **ptrptr << endl;


	return 0;
}

7.1 매개변수와 실인자의 구분
#include <iostream>

using namespace std;

int foo(int x, int y);

int foo(int x, int y) //지역변수; 대괄호 밖으로 나가면 변수를 쓸 수 없음
{
	return x + y;
}
int main()
{
	int x = 1, y = 2; //arguments
	foo(6, 7);
	foo(x, y + 1);

	return 0;
}

7.2 값에 의한 전달
#include <iostream>

using namespace std;

void doSomething(int y)
{
	cout << "In func " << y << " " << &y << endl;
}
int main()
{
	doSomething(5);

	int x = 6;

	cout << "In main " << x << " " << &x << endl;

	doSomething(x); //6이라는 값만 전달이 된다.
	doSomething(x + 1);

	return 0;
}

7.3 참조에 의한 인수 전달
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
//
//typedef int* pint;
//
//void foo(pint &ptr) //void foo(int *&ptr)
//{
//	cout << ptr << " " << &ptr << endl;
//}
//int main()
//{
//	int x = 5;
//	pint ptr = &x;
//
//	foo(ptr)
//
//	return 0;
//}
//------------------------------------------------
void printElement(vector<int>& arr)
{

}
int main()
{
	/*int arr[]{1, 2, 3, 4};*/
	vector<int> arr{ 1, 2, 3, 4 };
	printElement(arr);

	return 0;
}

7.4 주소에 의한 인수 전달
#include <iostream>

using namespace std;

void foo(const int* ptr)
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;
}
int main()
{
	int value = 5;
	cout << value << " " << &value << endl;
	int* ptr = &value;

	cout << &ptr << endl;

	foo(ptr);
	foo(&value);

	return 0;
}

7.5 다양한 반환 값들(값, 참조, 주소, 구조체, 튜플)
#include <iostream>
#include <array>
#include <tuple>

using namespace std;

//int*getValue(int x)
//{
//	int value = x * 2;
//	return &value;
//}
//int main()
//{
//	int value = *getValue(3);
//
//	cout << value << endl;
//	
//	return 0;
//}
//------------------------------------------------
//int&get(std::array<int, 100> & my_array, int ix)
//{
//	return my_array[ix];
//}
//
//int main()
//{
//	std::array<int, 100> my_array;
//	my_array[30] = 10;
//
//	get(my_array, 30) = 1024;
//
//	cout << my_array[30] << endl;
//
//	return 0;
//}
//-------------------------------------------------
//struct S
//{
//	int a, b, c, d;
//};
//
//S getStruct()
//{
//	S my_s{ 1, 2, 3, 4 };
//}
//
//int main()
//{
//	S my_s = getStruct();
//	my_s.b;
//
//	return 0;
//}
//-------------------------------------------------

std::tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a, d);
}

int main()
{
	std::tuple<int, double> my_tp = getTuple();
	cout << std::get<0>(my_tp) << endl; //a
	cout << std::get<1>(my_tp) << endl; //d

	return 0;
}

7.6 인라인 함수
#include <iostream>

using namespace std;

inline int min(int x, int y)
{
	return x > y ? y : x;
}
int main()
{
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;

	cout << (5 > 6 ? 6 : 5) << endl;
	cout << (3 > 2 ? 2 : 3) << endl;
	//인라인으로 하면 이런식으로 생각을 하게 된다.

	return 0;
}

7.7 함수 오버로딩
//함수 오버로딩 : 동일한 이름의 함수를 여려개 만드는 것
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int add(int x, int y)
//{
//	return x + y;
//}
//int add(double x, double y)
//{
//	return x - y;
//}
//int main()
//{
//	add(1, 2);
//	add(3.0, 4.0);
//	//함수의 이름이 같아도 안에있는 지수들의 특징을 보고 어떤 함수에 들어갈 것인지 선정한 다음에 들어간다.
//	//단, 매개변수가 달라야 한다.ex) int, double
//
//	return 0;
//}

#include <iostream>

using namespace std;

void print(unsigned int calue) {}
void print(float value) {}

int main()
{
	print((unsigned int)'a');
	print(0u);
	print(3.14159f);

	return 0;
}

7.8 매개변수의 기본값
#include <iostream>
using namespace std;

void print(int x = 10, int y = 20, int z = 30)
//기본값들이 정의가 되어 있는 것이 좋다.
//가장 오른쪽에 있는 매개변수의 값은 채워져 있어야 한다.(30)
{
	cout << x << " " << y << " " << z << endl;
}
int main()
{
	print();
	print(100);
	print(100, 200);
	print(100, 200, 300); //들어가는 값이 매개변수의 값을 덮는다.

	return 0;
}

7.12 재귀적 함수 호출
#include <iostream>
using namespace std;

//void countDown(int count)
//{
//	cout << count << endl;
//
//	if (count>0)
//		countDown(count - 1); //자기가 자기를 호출하는 함수
//}
//
//int main()
//{
//	countDown(5);
//
//	return 0;
//}
//--------------------------------------
//int sumTo(int sumto)
//{
//	if (sumto <= 0)
//		return 0;
//	else if (sumto <= 1)
//		return 1;
//	else
//		return sumTo(sumto - 1) + sumto;
//}
//
//int main()
//{
//	cout << sumTo(10) << endl;
//
//	return 0;
//}
//-----------------------------------
int fibo(int a, int b)
{
	if (a > 100)
		return 0;
	int sum = a + b;
	cout << a << " ";
	fibo(b, sum);
}
int main()
{
	int x = 0;
	int y = 1;
	fibo(x, y);

	return 0;
}

7.13 방어적 프로그래밍의 개념
#include <iostream>
#include <string>
using namespace std;

int main()
{
	////semantic errors
	//int x;
	//cin >> x;
	//if (x >= 5)
	//	cout << "x is greater than 5" << endl;

	//violated assumption
	string hello = "Hello, my name is lee";
	cout << "Input from 0 to " << hello.size() - 1 << endl;

	while (true)
	{
		int ix;
		cin >> ix;

		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;
			break;
		}
		else
			cout << "Please try again" << endl;
	}
	return 0;
}

7.14 단언하기 assert
#include <iostream>
#include <cassert>
#include <array>
using namespace std;

void printvalue(const std::array<int, 5>& my_array, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1);
	//다른 프로그래머가 범위 밖의 행동을 하려고 하면 그것을 막아준다

	std::cout << my_array[ix] << std::endl;
}

int main()
{
	std::array<int, 5> my_array{ 1, 2, 3, 4, 5 };

	printvalue(my_array, 100);

	return 0;
}

7.16 생략부호 Ellipsis
#include <iostream>
#include <cstdarg> //for ellipsis
using namespace std;

double findaverage(int count, ...)
{
	double sum = 0;

	va_list list;

	va_start(list, count);

	for (int arg = 0; arg < count; ++arg)
		sum += va_arg(list, int);

	va_end(list);

	return sum / count;
}

int main()
{
	cout << findaverage(1, 1, 2, 3, "Hello", 'c') << endl;
	cout << findaverage(3, 1, 2, 3) << endl;
	cout << findaverage(5, 1, 2, 3, 4, 5) << endl;
	cout << findaverage(10, 1, 2, 3, 4, 5) << endl;

	return 0;
}

8.1 객체지향 프로그래밍과 클래스
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//object
//friend: name, address, age, height, weight

class Friend
{
	//struct는 데이터를 묶는데에만 쓰이면 좋고 기능을 넣을 때는 class를 넣자
public:
	// access specifier(public, private, protected로 써도 된다) class쓸때 써야한다.
	string name;
	string address;
	int age;
	double height;
	double weight;

	void print()
	{
		cout << name << " " << address << " " << age << " "
			<< height << " " << weight << endl;
	}
};

void print(const string& name, const string& address, const int& age,
	const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " "
		<< height << " " << weight << endl;
}

int main()
{
	Friend jj{ "Jack Jack", "Uptown", 2, 30, 10 };
	//instanciation, jj는 class를 구분하기 위한 instance라고 부른다.
	/*jj.name = "Jack Jack";
	jj.age = 2;
	jj.address = "Uptowm";*/

	jj.print();

	//print(jj.name, jj.address, jj.age, jj.height, jj.weight);
	//print(jj);

	vector<Friend> my_friends;
	my_friends.resize(2);

	for (auto& ele : my_friends)
		ele.print();

	/*vector<string> name_vec;
	vector<string> addr_vec;
	vector<int> age_vec;
	vector<double> height_vec;
	vector<double> weight_vec;

	print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);*/

	return 0;
}

8.2 캡슐화, 접근 지정자, 접근 함수
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date
{
private:  //access specifier
	//public: 안에 있는 변수들을 class밖에서도 접근할 수 있게한다.
	//private: 선언 되어 있는 변수를 class밖에서 접근할 수 없게 막는다.
	int m_month;
	int m_day;
	int m_year;

public:
	void setDate(const int& month_input, const int& day_input, const int& year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	void setMonth(const int& month_input)
	{
		m_month = month_input;
	}
	int getDay()
	{
		return m_day;
	}
	void copyFrom(const Date& original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};

int main()
{
	Date today;
	today.setDate(8, 4, 2025);
	today.setMonth(10);
	cout << today.getDay() << endl;

	Date copy;
	copy.copyFrom(today);

	return 0;
}

8.3 생성자 Constructors
//#include <iostream>
//using namespace std;
//
//class Fraction
//{
//private:
//	int m_numerator;
//	int m_denominator;
//
//public:
//
//	/*Fraction()
//	{
//		m_numerator = 1;
//		m_denominator = 1;
//	}*/
//	Fraction(const int& num_input = 1 , const int& den_in = 1)
//	{
//		m_numerator = num_input;
//		m_denominator = den_in;
//
//		cout << "Fraction() construction" << endl;
//	}
//	void print()
//	{
//		cout << m_numerator << " / " << m_denominator << endl;
//	}
//};
//
//int main()
//{
//	//Fraction frac; //()를 쓰지 않는다.
//	//frac.print();
//
//	Fraction one_third/*{ 1, 1 }*/;
//	one_third.print();
//
//	return 0;
//}


// 클래스 안에 클래스가 있는 경우
#include <iostream>
using namespace std;
class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
	Second sec; //First class안에서 Second class의 베리어블이 멤버로 있는 상황
public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{
	First fir;
	return 0;
}

8.4 생성자 멤버 초기화 목록
#include <iostream>
using namespace std;

class B
{
private:
	int m_b;

public:
	B(const int& m_b_in)
		: m_b(m_b_in)
	{}
};

class Something
{
private:
	int m_i/* = 100*/;
	double m_d/* = 100.0*/;
	char m_c/* = 'F'*/;
	int m_arr[5]/* = { 1, 2, 3, 4, 5 }*/;
	B m_b/*{ m_i - 1 }*/;
	//private와 public 두군데에서 모두 초기화를 다르게 할 때에는 생성자의 것으로 초기화가 된다.

public:
	Something()
		: m_i{ 1 }
		, m_d{ 3.14 }
		, m_c{ 'a' }
		, m_arr{ 1, 2, 3, 4, 5 }
		, m_b(m_i - 1)
		//private와 public 두군데에서 모두 초기화를 다르게 할 때에는 생성자의 것으로 초기화가 된다.
	{
		/*m_i = 1;
		m_d = 3.14;
		m_c = 'a';  //위에 m_i(1), m_d(3.14), m_c('a')대신 쓸 수 있다.*/
	}

	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << endl;
		for (auto& e : m_arr)
			cout << e << " ";
		cout << endl;
	}
};

int main()
{
	Something som;
	som.print();

	return 0;
}

8.5 위임 생성자  $$$$$
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int m_id;
	string m_name;

public:
	Student(const string& name_in)
		//: m_id(0), m_name(name_in)
		: Student(0, name_in)
	{}

	Student(const int& id_in, const string& name_in)
		: m_id(id_in), m_name(name_in)
	{}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};
int main()
{
	Student st1(0, "Jack Jack");
	st1.print();

	Student st2("Dash");
	st2.print();

	return 0;
}

8.6 소멸자 destructor

#include <iostream>
using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(const int& id_in)
		: m_id(id_in)
	{
		cout << "Constructor " << m_id << endl;
	}

	~Simple()
	{
		cout << "Destructor " << m_id << endl;
	}
};

int main()
{
	Simple s1(0);
	Simple s2(2);

	return 0;
}

//#include <iostream>
//using namespace std;
//
//class IntArray
//{
//private:
//	int *m_arr = nullptr;
//	int m_length = 0;
//
//public:
//	IntArray(const int length_in)
//	{
//		m_length = length_in;
//		m_arr = new int[m_length];
//
//		cout << "Construstor " << endl;
//	}
//	~IntArray()
//	{
//		if(m_arr != nullptr)
//			delete[]m_arr;
//	}
//	int getlength(){ return m_length; }
//};
//
//int main()
//{
//	while (true)
//	{
//		IntArray my_int_arr(1000);
//	}
//
//	return 0;
//}

8.7 this 포인터와 연쇄 호출
//#include <iostream>
//using namespace std;
//
//class Simple
//{
//private:
//	int m_id;
//
//public:
//	Simple(int id)
//	{
//		/*this->*/setID(id);
//		/*this->*/m_id;
//
//		cout << this << endl; //this: 자기 자신의 주소를 불러오는 것이다.
//	}
//
//	void setID(int id){ m_id = id; }
//	int getID(){ return m_id; }
//};
//
//int main()
//{
//	Simple s1(1), s2(2);
//	s1.setID(2);
//	s2.setID(4);
//
//	cout << &s1 << " " << &s2 << endl;
//
//	//Simple::setID(&s2, 4); == s2.setID(4);
//
//	return 0;
//}

#include <iostream>
using namespace std;

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		: m_value(init_value)
	{}
	Calc& /*void*/ add(int value) { m_value += value; return *this; }
	Calc& /*void*/ sub(int value) { m_value -= value; return *this; }
	Calc& /*void*/ mult(int value) { m_value *= value; return *this; }
	//자기 자신의 레퍼런스를 리턴해주는 것이다.
	//Calc타입의 레퍼런스를 리턴해주는 것이다.

	void print()
	{
		cout << m_value << endl;
	}
};

int main()
{
	Calc cal(10);
	/*Calc &temp1 = cal.add(10);
	Calc &temp2 = temp1.sub(1);
	Calc &temp3 = temp2.mult(2);
	temp3.print();*/ //4개 줄을 아래 줄 하나로 만들 수 있다.
	//위에서 Calc&을 쓰고 자기 자신을 리턴해주었다.

	/*cal.add(10);
	cal.sub(1);
	cal.mult(2);
	cal.print(); //생성자가 void mult(int value){ m_value *= value;}로 되어있는 문장이었음*/

	cal.add(10).sub(1).mult(2).print();

	return 0;
}

8.8 클래스 코드와 헤더 파일 $$$$$

8.9 클래스와 const
//#include <iostream>
//
//using namespace std;
//
//class Something
//{
//public:
//	int m_value = 0;
//
//	Something(const Something& st_in)
//	{
//		m_value = st_in.m_value;
//
//		cout << "copy ctructor" << endl;
//	}
//
//	Something()
//	{
//		cout << "Constructor" << endl;
//	}
//
//	void setValue(int value)
//	{
//		m_value = value;
//	}
//	int getValue() const
//	{
//		return m_value;
//	}
//};
//
//void print(const Something &st)
//{
//	cout << &st << endl;
//	cout << st.m_value << endl;
//}
//
//int main()
//{
//	const Something something;
//	//something.setValue(3);
//
//	//cout << something.getValue() << endl;
//	cout << &something << endl;
//	print(something);
//	
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;

class Something
{
public:
	string m_value = "default";

	const string& getValue() const
	{
		cout << "const version" << endl;
		return m_value;
	}
	string& getValue()
	{
		cout << "non const version" << endl;
		return m_value;
	}

};
int main()
{
	Something something;
	something.getValue();

	const Something something2;
	something2.getValue();

	return 0;
}

8.10 정적 멤버 변수
#include <iostream>
using namespace std;

class Something
{
public:
	static int s_value;
};

int Something::s_value = 1;

int main()
{
	cout << &Something::s_value << " " << Something::s_value << endl;

	Something st1;
	Something st2;

	st1.s_value = 2;
	cout << &st1.s_value << " " << st1.s_value << endl;
	cout << &st2.s_value << " " << st2.s_value << endl;

	Something::s_value = 1024;

	cout << &Something::s_value << " " << Something::s_value << endl;

	return 0;
}

8.11 정적 멤버 함수 && &&&

8.12 친구 함수와 클래스 friend
#include <iostream>
using namespace std;

class B; //forward declaration
//전방선언! B&가 class B가 선언 되기 전에 나와서 오류가 뜨는데
//전방선언을 통해서 미리 뒤에 class B가 나온다는 것을 공지해 줄 수 있다.

class A
{
private:
	int m_value = 1;

	friend void dosomething(A& a, B& b);
	//dosomething함수를 class A의 친구로 선언을 해준 것이다.
};

class B
{
private:
	int m_value = 2;
	friend void dosomething(A& a, B& b);
};

void dosomething(A& a, B& b)
{
	cout << a.m_value << " " << b.m_value << endl;
	//따라서 class A에 있는 것처럼  m_value를 쓸 수 있다.
}

int main()
{
	A a;
	dosomething(a);
	return 0;
}

8.13 익명 객체
#include <iostream>
using namespace std;

class A
{
public:
	int m_value;

	A(const int& input)
		: m_value(input)
	{
		cout << "Constructor" << endl;
	}
	~A()
	{
		cout << "Destructor" << endl;
	}

	void printdouble()
	{
		cout << m_value * 2 << endl;
	}
};

int main()
{
	A a(1);
	a.printdouble();

	A(1).printdouble();

	//A().print(); //위에와 같이 작동한다.
	//A().print();

	return 0;
}

8.14 클래스 안에 포함된 자료형 nested types
#include <iostream>
using namespace std;

//enum FruitType
//{
//	apple, banana, cherry,
//}; //class안에서만 쓰일 것 같으니 class안에 넣을 수 있다.

class Fruit
{
public:
	enum FruitType
	{
		apple, banana, cherry,
	};
private:
	FruitType m_type;

public:
	Fruit(FruitType type) : m_type(type)
	{}

	FruitType getType() { return m_type }
};

int main()
{
	Fruit apple(Fruit::apple);

	if (apple.getType == Fruit::apple)
	{
		std::cout << "apple" << std::endl;
	}

	return 0;
}

8.15 실행 시간 측정하기

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

using  namespace std;

class Timer
{
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = chrono::duration < double, std::ratio<1> >;

	std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
	void elapsed()
	{
		std::chrono::time_point<clock_t> end_time = clock_t::now();

		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
	}
};

int main()
{
	random_device rnd_device;
	mt19937 mersenne_engine{ rnd_device() };

	vector<int> vec(100000);
	for (unsigned int i = 0; i < vec.size(); ++i)
		vec[i] = i;

	std::shuffle(begin(vec), end(vec), mersenne_engine);

	/*for (auto &e : vec)cout << e << " ";
	cout << endl;*/

	Timer timer;

	std::sort(begin(vec), end(vec));

	timer.elapsed();

	/*for (auto &e : vec)cout << e << " ";
	cout << endl;*/

	return 0;
}

9.1 산술 연산자 오버로딩 하기

#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}
	int getCents() const
	{
		return m_cents;
	}
	int& getCents()
	{
		return m_cents;
	}
};

void add(const Cents& c1, const Cents& c2, Cents& c_out)
{
	c_out.getCents() = c1.getCents() + c2.getCents();
}

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	Cents sum;
	add(cents1, cents2, sum);
	cout << sum.getCents() << endl;

	return 0;
}

#include <iostream>
using namespace std;

struct namecard
{
	char name[20];
	char job[20];
	char tel[20];
	char email[40];
};

void structPrn(namecard temp)
{
	cout << temp.name << " " << temp.job << " " << temp.tel << " " << temp.email << endl;
}

namecard structInput()
{
	namecard temp;
	cout << "이름을 입력하시오=>";
	cin >> temp.name;
	cout << "직업을 입력하시오=>";
	cin >> temp.job;
	cout << "전화번호를 입력하시오=>";
	cin >> temp.tel;
	cout << "이메일을 입력하시오=>";
	cin >> temp.email;

	return temp;
}

int main()
{
	namecard x, y, z;
	namecard temp;

	x = structInput();
	cout << endl;
	y = structInput();
	cout << endl;
	z = structInput();

	cout << "이름 직업 연락처 이메일" << endl;
	structPrn(x);
	structPrn(y);
	structPrn(z);
}

#include <iostream>
using namespace std;

struct namecard
{
	char name[20];
	char job[20];
	char tel[20];
	char email[40];
};

void main()
{
	namecard x = { "전수빈", "치과의사", "356-0868", "sc0801kr@naver.com" };
	namecard y = { "이승찬", "학생", "2472-7215", "sc0801kr@naver.com" };
	namecard* p;
	p = &x;
	cout << "이름 직업 연락처 이메일" << endl;
	cout << "=====================" << endl;
	cout << (*p).name << " " << (*p).job << " " << (*p).tel << " " << (*p).email << endl;

	p = &y;
	cout << p->name << " " << p->job << " " << p->tel << " " << p->email << endl;

	cout << "sizeof(x) => " << sizeof(x) << endl;
	cout << "sizeof(y) => " << sizeof(y) << endl;
}
