/* xml++.h
 * libxml++ and this file are copyright (C) 2000 by Ari Johnson,
 * (C) 2002-2004 by the libxml dev team and
 * are covered by the GNU Lesser General Public License, which should be
 * included with libxml++ as the file COPYING.
 */

#ifndef __LIBXMLPP_PARSERS_DTDVALIDATOR_H
#define __LIBXMLPP_PARSERS_DTDVALIDATOR_H

#include <libxml++/validators/validator.h>
#include <libxml++/dtd.h>
#include <libxml++/document.h>

namespace xmlpp {

/** XML DOM parser.
 *
 */
class DtdValidator : public Validator
{
public:
  DtdValidator();
  explicit DtdValidator(const Glib::ustring& file);
  explicit DtdValidator(const Glib::ustring& external,const Glib::ustring& system);
  virtual ~DtdValidator();

  virtual void parse_subset(const Glib::ustring& external,const Glib::ustring& system);
  virtual void parse_file(const Glib::ustring& filename);
  virtual void parse_memory(const Glib::ustring& contents);
  virtual void parse_stream(std::istream& in);

  /** Test whether a document has been parsed.
  */
  operator bool() const;
  Dtd* get_dtd();
  const Dtd* get_dtd() const;

  bool validate(const Document* doc);

protected:
  virtual void release_underlying();

  Dtd* dtd_;
};




} // namespace xmlpp

#endif //__LIBXMLPP_PARSERS_DTDVALIDATOR_H

