#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 

//错误：bug
//找bug：调试

//结构体
//结构体是由一批数据组合而成的一种新的数据类型，组成结构型数据的每个数据称为结构型数据的“成员”
//先声明，再创建变量
//struct stu//stu结构体标签 //结构体声明
//{
//	char name[20] ;//member-list成员列表
//	short age ;
//	char tele[12];
//	char set[5] ;
//
//}s1 ,s2 ,s3;//variable-list;变量列表 //s1,s2,s3是全局变量
//
//


// 描述一个学生-一些数据
// 名字
// 年龄
// 电话
// 性别

////struct 结构体关键字 Stu - 结构体标签  struct Stu - 结构体类型
//typedef struct stu//typedef 重命名结构体变量名称
//{
//	char name[20] ;//member-list成员列表
//	short age ;
//	char tele[12];
//	char set[5] ;
//
//}stu;//stu是类型（struct stu也是） 
//int main()
//{
//	struct stu s1 ; //这里是在创建结构体变量 - 局部变量
//	stu s2 ;
//	return 0 ;
//}

//struct S
//{
//	int a ;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s; //struct S只是类型！！后面需要有变量名！
//	char *pc ;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = {"hehe",{100, 'w', "hello world!", 3.14}, arr};
//
//	printf("%s\n",t.ch); //hehe
//	printf("%d\n",t.s.a); //100
//	printf("%lf\n",t.s.arr); //hello world!
//	printf("%s\n",t.pc); //hello bit
//
//
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20] ;
//	short age ;
//	char tele[12];
//	char sex[5] ;
//
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name: %s\n",tmp.name);
//	printf("age: %d\n",tmp.age);
//	printf("tele: %s\n",tmp.tele);
//	printf("sex: %s\n",tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name: %s\n",ps->name);
//	printf("age: %d\n",ps->age);
//	printf("tele: %s\n",ps->tele);
//	printf("sex: %s\n",ps->sex);
//}
//int main()
//{
//	Stu s = {"李四", 40, "15599887788","男"};
//	//打印结构体数据
//	//Print1和Print2哪个好？
//	Print1(s);
//
//	//选用Print2函数
//	// 传递的是结构体名时，需要另外开辟一块空间
//	//函数传参的时候，参数是需要压栈的。
//	//如果传递一个结构以对象的时候，若结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
//
//	Print2(&s); //传递的是结构体的地址
//	//结论：结构体传参的时候，要传递结构体的地址。
//	return 0 ;
//}


//内存的分区：栈区，堆区，静态区
//栈区：局部变量、函数的形式参数、函数调用也开辟空间
//堆区：动态内存分配、malloc/free(需要手动释放空间)、realloc/calloc
//静态区：全局变量、静态变量

//用栈区举例
//压栈操作
//数据结构
//----线性数据结构
//顺序表： 1 2 3 4 5 6就像数组中储存的数字，称为顺序表
//链表：1....6等数杂乱地分布在内存中，但可以通过一条链连接起来，称为链表
//栈：
//0 1 2 3 4等数先后的放在一起
//插入一个元素：压栈
//删除一个元素：出栈
//栈：先进后出，后进的先出

//队列
//----树形数据结构
//二叉树
//----图


//#include<math.h>
//int Is_count(int i )
//{
//	int a = 0;
//	int count = 1;
//	for(a = 2 ; a <= sqrt(i) ; a++) //条件可以是 a < i 也可以是 a <= i/2 也可以是 a <= sqrt(i)
//	{
//		if(i % a == 0)
//			count = 0;
//	}
//	return count ;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i = 2 ; i<=1000 ; i++)
//	{
//		if(Is_count(i) == 1)
//		{
//			printf("%d ",i);
//			count ++;
//		}
//	}
//	printf("\n一共有：%d个素数",count);
//	return 0 ;
//}


int main()
{

	return 0;
}