#include <stdexcept>
#include <type_traits>

template<typename T>
    requires is_copy_constructible<T>::value
T get_copy(T* pointer)
{
    if (!pointer) throw std::runtime_error{ "Null-pointer dereference" };
    return *pointer;
}

struct Highlander
{
    Highlander() = default;
    Highlander(const Highlander&) = delete;
};

int main()
{
    Highlander connor;
    auto connor_ptr = &connor;
    auto connor_copy = get_copy(connor_ptr);
}