#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

enum logLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    INVALID
};

class Harl
{
private:
    /* data */
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Harl() {};
    ~Harl() {};
    void complain( logLevel level );
};

logLevel getLogLevel(const std::string& level);
#endif