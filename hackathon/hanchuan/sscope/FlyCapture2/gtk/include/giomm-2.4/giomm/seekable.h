// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_SEEKABLE_H
#define _GIOMM_SEEKABLE_H


#include <glibmm.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <giomm/cancellable.h>
#include <glibmm/interface.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GSeekableIface GSeekableIface;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GSeekable GSeekable;
typedef struct _GSeekableClass GSeekableClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class Seekable_Class; } // namespace Gio
namespace Gio
{

/** Stream seeking interface.
 * Seekable is implemented by streams (implementations of InputStream or OutputStream) that support seeking.
 * To find the position of a stream, use tell(). To find 
 * out if a stream supports seeking, use can_seek(). To position a 
 * stream, use seek(). To find out if a stream supports 
 * truncating, use can_truncate(). To truncate a stream, use 
 * truncate().
 *
 * @ingroup Streams
 *
 * @newin2p16
 */

class Seekable : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Seekable CppObjectType;
  typedef Seekable_Class CppClassType;
  typedef GSeekable BaseObjectType;
  typedef GSeekableIface BaseClassType;

private:
  friend class Seekable_Class;
  static CppClassType seekable_class_;

  // noncopyable
  Seekable(const Seekable&);
  Seekable& operator=(const Seekable&);

protected:
  Seekable(); // you must derive from this class

  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit Seekable(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit Seekable(GSeekable* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Seekable();

  static void add_interface(GType gtype_implementer);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GSeekable*       gobj()       { return reinterpret_cast<GSeekable*>(gobject_); }

  ///Provides access to the underlying C GObject.  
  const GSeekable* gobj() const { return reinterpret_cast<GSeekable*>(gobject_); }

private:


public:
  
  /** Tells the current position within the stream.
   * @return The offset from the beginning of the buffer.
   */
  goffset tell() const;
  
  /** Tests if the stream supports the SeekableIface.
   * @return <tt>true</tt> if @a seekable can be seeked. <tt>false</tt> otherwise.
   */
  bool can_seek() const;

  
  /** Seeks in the stream by the given @a offset, modified by @a type.
   * 
   * The operation can be cancelled by
   * triggering the cancellable object from another thread. If the operation
   * was cancelled, a Gio::Error will be thrown with CANCELLED.
   * @param offset A #goffset.
   * @param type A SeekType.
   * @param cancellable Cancellable object.
   * @return <tt>true</tt> if successful. If an error
   * has occurred, this function will return <tt>false</tt> and set @a error
   * appropriately if present.
   */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  bool seek(goffset offset, Glib::SeekType type, const Glib::RefPtr<Cancellable>& cancellable);
#else
  bool seek(goffset offset, Glib::SeekType type, const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED


  //TODO: Document the exception: http://bugzilla.gnome.org/show_bug.cgi?id=509990
  /** Seeks in the stream by the given @a offset, modified by @a type .
   * 
   * @param offset A #goffset.
   * @param type A Glib::SeekType.
   * @return <tt>true</tt> if successful. If an error
   * has occurred, this function will return <tt>false</tt>.
   */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  bool seek(goffset offset, Glib::SeekType type);
#else
  bool seek(goffset offset, Glib::SeekType type, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  
  /** Tests if the stream can be truncated.
   * @return <tt>true</tt> if the stream can be truncated, <tt>false</tt> otherwise.
   */
  bool can_truncate() const;

  
  /** Truncates a stream with a given #offset. 
   * 
   * The operation can be cancelled by
   * triggering the cancellable object from another thread. If the operation
   * was cancelled, a Gio::Error will be thrown with CANCELLED. If an
   * operation was partially finished when the operation was cancelled the
   * partial result will be returned, without an error.
   * @param offset A #goffset.
   * @param cancellable Cancellable object.
   * @return <tt>true</tt> if successful. If an error
   * has occurred, this function will return <tt>false</tt> and set @a error
   * appropriately if present.
   */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  bool truncate(goffset offset, const Glib::RefPtr<Cancellable>& cancellable);
#else
  bool truncate(goffset offset, const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED


  //TODO: Document the exception: http://bugzilla.gnome.org/show_bug.cgi?id=509990
  /** Truncates a stream with a given #offset. 
   * 
   * @param offset A #goffset.
   * @return <tt>true</tt> if successful. If an error
   * has occured, this function will return <tt>false</tt>.
   */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  bool truncate(goffset offset);
#else
  bool truncate(goffset offset, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  //_WRAP_VFUNC(goffset tell() const, tell)
  //_WRAP_VFUNC(goffset can_seek() const, can_seek)
  //_WRAP_VFUNC(goffset seek(goffset offset, Glib::SeekType type, const Glib::RefPtr<Cancellable>& cancellable, GError** error), seek)
  //_WRAP_VFUNC(goffset can_truncate() const, can_truncate)

  //Renamed to truncate() - we don't know why it's called truncate_fn in C.
  //_WRAP_VFUNC(goffset truncate(goffset offset, const Glib::RefPtr<Cancellable>& cancellable, GError** error), truncate_fn)

  //There are no properties or signals.


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

protected:
  //GTK+ Virtual Functions (override these to change behaviour):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

  //Default Signal Handlers::
#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::Seekable
   */
  Glib::RefPtr<Gio::Seekable> wrap(GSeekable* object, bool take_copy = false);

} // namespace Glib


#endif /* _GIOMM_SEEKABLE_H */

