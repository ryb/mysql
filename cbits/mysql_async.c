// Helper functions for async library


#include "mysql_async.h"

int mysql_fd(MYSQL *mysql)
{
    return mysql->net.fd;
}
