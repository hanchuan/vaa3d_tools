// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_MEMORYOUTPUTSTREAM_P_H
#define _GIOMM_MEMORYOUTPUTSTREAM_P_H


#include <giomm/private/outputstream_p.h>

#include <glibmm/class.h>

namespace Gio
{

class MemoryOutputStream_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef MemoryOutputStream CppObjectType;
  typedef GMemoryOutputStream BaseObjectType;
  typedef GMemoryOutputStreamClass BaseClassType;
  typedef Gio::OutputStream_Class CppClassParent;
  typedef GOutputStreamClass BaseClassParent;

  friend class MemoryOutputStream;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();

  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

  //Callbacks (virtual functions):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED
};


} // namespace Gio


#endif /* _GIOMM_MEMORYOUTPUTSTREAM_P_H */

