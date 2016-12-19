#include <celero/Celero.h>


CELERO_MAIN

constexpr int g_samples = 20;
constexpr int g_iterations = 1000;


BASELINE(group, baseline, g_samples, g_iterations)
{

}


BENCHMARK(group, benchmark, g_samples, g_iterations)
{

}