#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

float countX(float arg, float secondarg, int spacesCount){
	return abs(arg - secondarg) / spacesCount;
}
float f(float x){
	return sin(x);
}

int main(){
	float arg_1 = 0, arg_2 = 0, suma = 0, temp = 0;
	int n = 0;

	//Blok wczytawania danych i zabezpiecznie przed idiotami
	printf("Podaj argument od ktorego rozpoczac liczenie pola: \n");
	cin >> arg_1;
	printf("Podaj argument od ktorego rozpoczac liczenie pola: \n");
	cin >> arg_2;
	printf("Na ile podzbiorów chcesz podzielic powyzszy zakres? Liczba ta bedzie oznaczac dokladnosc z jaka zostanie policzone. \n");
	do{
		cin >> n;
		if (n <= 0) printf("Podaj liczbe calkowita wieksza od zera! \n");

	} while (n <= 0);

	//Liczymy dlugosc dolnego kawalka prostokata (sry za trywialny jezyk)
	temp = countX(arg_1, arg_2, n);

	//Liczymy pole

	for (int i = 0; i < n; i++){
		//suma += temp * abs(sin(arg_1 + i*temp));
		suma += temp * (abs(f(arg_1+temp*i)) + abs(f(arg_1+temp*(i+1))))/2;
	}
	cout << "\nWynik to:" << suma;

	return 0;
}
