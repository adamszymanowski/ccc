#include <cstdio>

struct Logger
{
    virtual ~Logger() = default;
    virtual void log_transfer(long long from, long long to, double amount) = 0;
};

struct ConsoleLogger : Logger 
{
    void log_transfer(long long from, long long to, double amount) override
    {
        printf("[cons] %lld -> %lld: %f\n", from, to, amount);
    }
};

struct FileLogger : Logger
{
    void log_transfer(long long from, long long to, double amount) override
    {
        printf("[file] %lld,%lld,%f\n", from, to, amount);
    }
};

struct Bank
{
    void set_logger(Logger* new_logger)
    {
        logger = new_logger;
    }

    void make_transfer(long long from, long long to, double amount)
    {
        if (logger) logger->log_transfer(from, to, amount);
    }

private:
    Logger* logger{};
};


int main()
{
    ConsoleLogger console_logger;
    FileLogger file_logger;
    Bank bank;
    bank.set_logger(&console_logger);
    bank.make_transfer(1000, 2000, 49.95);
    bank.set_logger(&file_logger);
    bank.make_transfer(2000, 4000, 20.00);
}