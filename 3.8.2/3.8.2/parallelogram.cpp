﻿#include "parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B)
{
	count = 4;
	name = "Параллелограмм";
}