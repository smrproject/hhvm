/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-present Facebook, Inc. (http://www.facebook.com)  |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_PDO_MYSQL_H_
#define incl_HPHP_PDO_MYSQL_H_

#include "hphp/runtime/ext/pdo/pdo_driver.h"

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

enum {
  PDO_MYSQL_ATTR_USE_BUFFERED_QUERY = PDO_ATTR_DRIVER_SPECIFIC,
  PDO_MYSQL_ATTR_LOCAL_INFILE,
  PDO_MYSQL_ATTR_INIT_COMMAND,
  PDO_MYSQL_ATTR_READ_DEFAULT_FILE,
  PDO_MYSQL_ATTR_READ_DEFAULT_GROUP,
  PDO_MYSQL_ATTR_MAX_BUFFER_SIZE,
  PDO_MYSQL_ATTR_COMPRESS,
  PDO_MYSQL_ATTR_DIRECT_QUERY,
  PDO_MYSQL_ATTR_FOUND_ROWS,
  PDO_MYSQL_ATTR_IGNORE_SPACE,
  PDO_MYSQL_ATTR_SSL_CA,
  PDO_MYSQL_ATTR_SSL_CAPATH,
  PDO_MYSQL_ATTR_SSL_CERT,
  PDO_MYSQL_ATTR_SSL_CIPHER,
  PDO_MYSQL_ATTR_SSL_KEY,
  PDO_MYSQL_ATTR_MULTI_STATEMENTS,
  HH_PDO_MYSQL_ATTR_READ_TIMEOUT,
  HH_PDO_MYSQL_ATTR_WRITE_TIMEOUT
};

///////////////////////////////////////////////////////////////////////////////

struct PDOMySql : PDODriver {
  PDOMySql();
  req::ptr<PDOResource> createResourceImpl() override;
  req::ptr<PDOResource>
    createResource(const sp_PDOConnection&) override;
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_PDO_MYSQL_H_
