#include <cstdio>

struct Logger
{
    virtual ~Logger() = default;
    virtual void log_transfer(long long from, long long to, double amount) = 0;
};

struct ConsoleLogger : Logger
{
    void log_transfer(long long from, long long to, double amount)
    {
        printf("[cons] %lld -> %lld: %f\n", from, to, amount);
    }
};

struct FileLogger : Logger
{
    void log_transfer(long long from, long long to, double amount)
    {
        printf("[file] %lld,%lld,%f\n", from, to, amount);
    }
};

struct Bank
{
    Bank(Logger& logger) : logger{ logger } { }
    void make_transfer(long long from, long long to, double amount)
    {
        logger.log_transfer(from, to, amount);
    }
private:
    Logger& logger;
};

int main()
{
    ConsoleLogger logger;
    Bank bank{ logger };
    bank.make_transfer(1000, 2000, 49.95);
    bank.make_transfer(2000, 4000, 20.00);
}