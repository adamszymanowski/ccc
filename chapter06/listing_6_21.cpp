#include <cstdio>
#include <cstddef>
#include <type_traits>
#include <concepts>


template<typename T> 
concept Averageable = std::is_default_constructible<T>::value
    && requires (T a, T b)
        {
            { a+= b } -> std::convertible_to<T>;            // compiler complained, so I used std::convertible_to
            { a /size_t{ 1 } } -> std::convertible_to<T>;
        };

template<Averageable T>
T mean(const T* values, size_t length) // the only way to make the whole thing work was to add const, pretty frustrating, as error messages weren't helpful at all
{
    T result{};
    for (size_t i{}; i < length; i++)
    {
        result += values[i];
    }

    return result / length;
}

int main()
{
    const double nums_d[] { 1.0, 2.0, 3.0, 4.0 };
    const auto result1 = mean(nums_d, 4);
    printf("double: %f\n", result1);

    const double nums_f[] { 1.0f, 2.0f, 3.0f, 4.0f };
    const auto result2 = mean(nums_f, 4);
    printf("float: %f\n", result2);

    const size_t nums_c[] { 1, 2, 3, 4 };
    const auto result3 = mean(nums_c, 4);
    printf("size_t: %zu\n", result3);
}