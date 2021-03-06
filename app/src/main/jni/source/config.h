/********************************************************************************
 *
 *
 * proxenet general configuration file
 *
 *
 */


/********************************************************************************
 *
 * Some configuration variables, feel free to adjust them before compiling
 *
 */

#ifdef __FREESBD__
#include <sys/socket.h>
#include <netinet/in.h>
#endif

//#define DEBUG true

#define MAX_THREADS                           3                        // maximum number of threads
#define CFG_DEFAULT_BIND_ADDR                 "localhost"               // default binding address
#define CFG_DEFAULT_BIND_PORT                 "8008"                    // default binding port
#define CFG_DEFAULT_PROXY_PORT                "8080"                    // if relay is enabled, use this port as default
#define CFG_DEFAULT_NB_THREAD                 3                        // default number of threads
#define CFG_DEFAULT_TRY_EXIT_MAX              3                         // default number for attempting to kill the process gently
#define CFG_DEFAULT_PLUGIN_PRIORITY           5                         // default priority for plugins
#define CFG_DEFAULT_OUTPUT                    stdout                    // default output file stream
#define CFG_DEFAULT_PLUGINS_PATH              "/data/data/janhodermarsky.proxenet/proxenet-plugins"      // default location of plugins
#define CFG_DEFAULT_PLUGINS_AUTOLOAD_PATH     "/autoload"               // default name of autoload dir (*Must* start with a '/')
#define CFG_DEFAULT_SSL_CERTFILE              "/data/data/janhodermarsky.proxenet/keys/proxenet.crt"     // default path of SSL private certificate
#define CFG_DEFAULT_SSL_KEYFILE               "/data/data/janhodermarsky.proxenet/keys/proxenet.key"     // default path of SSL private key
#define CFG_DEFAULT_SSL_KEYFILE_PWD           ""                        // default password for the SSL private key
#define CFG_DEFAULT_SSL_CERTSDIR              "/data/data/janhodermarsky.proxenet/keys/certs"            // default path of stored certificates
#define CFG_DEFAULT_SSL_CERTSKEY              "/data/data/janhodermarsky.proxenet/keys/certs/generic.key"      // default path of stored certificates private key
#define CFG_DEFAULT_SSL_CERTSPWD              ""                        // default password for stored certificates private key
#define CFG_DEFAULT_IP_VERSION                AF_INET                   // IP version (AF_INET for IPv6 or AF_INET6 for IPv6)
#define CFG_REQUEST_PLUGIN_FUNCTION          "proxenet_request_hook"    // default name for hooking request function
#define CFG_RESPONSE_PLUGIN_FUNCTION         "proxenet_response_hook"   // default name for hooking response function
#define CFG_DEFAULT_SSL_CLIENT_DOMAIN        "*"                        // default domain to use the SSL client certificate (* means any)
#define CFG_DEFAULT_INTERCEPT_PATTERN        "*"                        // default pattern to intercept (all)


/********************************************************************************
 *
 * Those options are automatically generated by cmake.
 *
 * DO NOT MODIFY  !!
 *
 */


#ifndef _GNU_SOURCE
#define _GNU_SOURCE     1
#endif

#define PROGNAME        "proxenet"
#define AUTHOR          "hugsy"
#define LICENSE         "GPLv2"

#define VERSION_MAJOR   0
#define VERSION_MINOR   4
#define VERSION_REL     "dev:7ed74af"
#define VERSION         "0.4-dev:7ed74af"

#define SYSTEM          "Linux-3.13.0-49-generic"
#define CC              "GNU"


#define _POLARSSL_VERSION_ "1.3.10"

#ifndef _C_PLUGIN
#define _C_PLUGIN
#define _C_VERSION_       "C"
#endif
/*#define _PYTHON_PLUGIN
#define _PYTHON_MAJOR_    2
#define _PYTHON_MINOR_    7
#define _PYTHON_VERSION_  "Python2.7.6"*/


