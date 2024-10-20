#ifdef DATABASE_H // This checks if DATABASE_H (a unique identifier) has not been defined yet.
#define DATABASE_H // If DATABASE_H was not defined before, it defines DATABASE_H

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>\

class Database {
    public:
        sql::Connection* connect();
};

#endif // This marks the end of the include guard. Everything between #ifndef and #endif is only included once during compilation, even if the header file is included multiple times.
