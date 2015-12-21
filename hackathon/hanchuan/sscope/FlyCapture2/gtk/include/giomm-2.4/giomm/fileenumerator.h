// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_FILEENUMERATOR_H
#define _GIOMM_FILEENUMERATOR_H


#include <glibmm.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The glibmm Development Team
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

#include <glibmm/object.h>
#include <glibmm/arrayhandle.h>
#include <glibmm/listhandle.h>
#include <giomm/asyncresult.h>
#include <giomm/cancellable.h>
#include <giomm/fileinfo.h>
//#include <giomm/file.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GFileEnumerator GFileEnumerator;
typedef struct _GFileEnumeratorClass GFileEnumeratorClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class FileEnumerator_Class; } // namespace Gio
namespace Gio
{

class File;

//TODO: Consider wrapping this like a std::iterator (or at least renaming it), though the asyncness probably makes that unsuitable.

/** Enumerated Files Routines.
 * FileEnumerator allows you to operate on a set of Gio::Files, returning a Gio::FileInfo instance for each file enumerated 
 * (e.g. Gio::File::enumerate_children() will return a FileEnumerator for each of the children within a directory).
 *
 * To get the next file's information from a Gio::FileEnumerator, use next_file() or its asynchronous version, next_file_async(). 
 * Note that the asynchronous version will return a list of Gio::FileInfos, whereas the synchronous version will only return the next 
 * file in the enumerator.
 *
 * To close a Gio::FileEnumerator, use FileEnumerator::close(), or its asynchronous version, close_async(). Once a FileEnumerator is closed, 
 * no further actions may be performed on it.
 *
 * @newin2p16
 */

class FileEnumerator : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef FileEnumerator CppObjectType;
  typedef FileEnumerator_Class CppClassType;
  typedef GFileEnumerator BaseObjectType;
  typedef GFileEnumeratorClass BaseClassType;

private:  friend class FileEnumerator_Class;
  static CppClassType fileenumerator_class_;

private:
  // noncopyable
  FileEnumerator(const FileEnumerator&);
  FileEnumerator& operator=(const FileEnumerator&);

protected:
  explicit FileEnumerator(const Glib::ConstructParams& construct_params);
  explicit FileEnumerator(GFileEnumerator* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~FileEnumerator();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GFileEnumerator*       gobj()       { return reinterpret_cast<GFileEnumerator*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GFileEnumerator* gobj() const { return reinterpret_cast<GFileEnumerator*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GFileEnumerator* gobj_copy();

private:


public:
  
  /** Return value: A FileInfo or <tt>0</tt> on error or end of enumerator.
   * @param cancellable Optional Cancellable object, <tt>0</tt> to ignore.
   * @return A FileInfo or <tt>0</tt> on error or end of enumerator.
   * Free the returned object with Glib::object_unref() when no longer needed.
   */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  Glib::RefPtr<FileInfo> next_file(const Glib::RefPtr<Cancellable>& cancellable);
#else
  Glib::RefPtr<FileInfo> next_file(const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED


  /** 
   * @return A FileInfo or an empty RefPtr on error or end of enumerator.
   */
  #ifdef GLIBMM_EXCEPTIONS_ENABLED
  Glib::RefPtr<FileInfo> next_file();
  #else
  Glib::RefPtr<FileInfo> next_file(std::auto_ptr<Glib::Error>& error);
  #endif //GLIBMM_EXCEPTIONS_ENABLED

  
  /** Releases all resources used by this enumerator, making the
   * enumerator return IO_ERROR_CLOSED on all calls.
   * 
   * This will be automatically called when the last reference
   * is dropped, but you might want to call this function to make 
   * sure resources are released as early as possible.
   * @param cancellable Optional Cancellable object, <tt>0</tt> to ignore.
   * @return #<tt>true</tt> on success or #<tt>false</tt> on error.
   */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  bool close(const Glib::RefPtr<Cancellable>& cancellable);
#else
  bool close(const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED


  /** Releases all resources used by this enumerator, making the
   * enumerator throw a Gio::Error with CLOSED on all calls.
   * 
   * This will be automatically called when the last reference
   * is dropped, but you might want to call this method to make sure resources
   * are released as early as possible.
   * @return #<tt>true</tt> on success or an empty RefPtr on error.
   */
  #ifdef GLIBMM_EXCEPTIONS_ENABLED
  bool close();
  #else
  bool close(std::auto_ptr<Glib::Error>& error);
  #endif //GLIBMM_EXCEPTIONS_ENABLED


  /** Request information for a number of files from the enumerator asynchronously. 
   * When all I/O for the operation is finished the callback slot will be called with the requested information.
   *
   * The callback could be called with less than num_files files in case of error or at the end of the enumerator. 
   * In case of a partial error the callback will be called with any succeeding items and no error, and on the next request the error will be reported. 
   * If a request is cancelled the callback will be called with ERROR_CANCELLED.
   *
   * During an async request no other sync and async calls are allowed, and will result in ERROR_PENDING errors.
   *
   * Any outstanding I/O request with higher priority (lower numerical value) will be executed before an outstanding request with lower priority. 
   * The default priority is PRIORITY_DEFAULT.
   * @param slot A callback to call when the request is satisfied.
   * @param cancellable An cancellable object which can be used to cancel the request.
   * @param num_files The number of file info objects to request.
   * @param io_priority The I/O priority of the request.
   */
  void next_files_async(const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, int num_files = 1, int io_priority = Glib::PRIORITY_DEFAULT);

  /** Request information for a number of files from the enumerator asynchronously. 
   * When all I/O for the operation is finished the callback slot will be called with the requested information.
   *
   * The callback could be called with less than num_files files in case of error or at the end of the enumerator. 
   * In case of a partial error the callback will be called with any succeeding items and no error, and on the next request the error will be reported. 
   * If a request is cancelled the callback will be called with ERROR_CANCELLED.
   *
   * During an async request no other sync and async calls are allowed, and will result in ERROR_PENDING errors.
   *
   * Any outstanding I/O request with higher priority (lower numerical value) will be executed before an outstanding request with lower priority. 
   * The default priority is PRIORITY_DEFAULT.
   * @param slot A callback to call when the request is satisfied.
   * @param num_files The number of file info objects to request.
   * @param io_priority The I/O priority of the request.
   */
  void next_files_async(const SlotAsyncReady& slot, int num_files = 1, int io_priority = Glib::PRIORITY_DEFAULT);
  

  /** Finishes the asynchronous operation started with g_file_enumerator_next_files_async().
   * @param result A AsyncResult.
   * @return A List of FileInfo&lt;!----&gt;s. You must free the list with 
   * Glib::list_free() and unref the infos with g_object_unref when you're 
   * done with them.
   */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  Glib::ListHandle< Glib::RefPtr<FileInfo> > next_files_finish(const Glib::RefPtr<AsyncResult>& result);
#else
  Glib::ListHandle< Glib::RefPtr<FileInfo> > next_files_finish(const Glib::RefPtr<AsyncResult>& result, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED


  /** Asynchronously closes the file enumerator.
   *
   * See close(), which is the synchronous version of this function.
   *
   * The operation can be cancelled by triggering the cancellable object from another thread. 
   * If the operation was cancelled, a Gio::Error with CANCELLED will be thrown by close_finish().
   *
   * @param io_priority The I/O priority of the request.
   * @param cancellable A Cancellable object which can be used to cancel the operation.
   * @param slot A callback to call when the request is satisfied.
   */
  void close_async(int io_priority, const Glib::RefPtr<Cancellable>& cancellable, const SlotAsyncReady& slot);

  /** Asynchronously closes the file enumerator.
   *
   * See close(), which is the synchronous version of this function.
   *
   * @param io_priority The I/O priority of the request.
   * @param slot  A callback to call when the request is satisfied.
   */
  void close_async(int io_priority, const SlotAsyncReady& slot);
  

  /** Finishes closing a file enumerator, started from g_file_enumerator_close_async().
   * 
   * If the file enumerator was already closed when g_file_enumerator_close_async() 
   * was called, then this function will throw a Gio::Error with CLOSED, and 
   * return <tt>false</tt>. If the file enumerator had pending operation when the close 
   * operation was started, then this function will throw a Gio::Error with PENDING, and
   * return <tt>false</tt>.  The operation may have been 
   * cancelled by triggering the cancellable object from another thread. If the operation
   * was cancelled, a Gio::Error with CANCELLED will be thrown, and <tt>false</tt> will be 
   * returned.
   * @param result A AsyncResult.
   * @return <tt>true</tt> if the close operation has finished successfully.
   */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  bool close_finish(const Glib::RefPtr<AsyncResult>& result);
#else
  bool close_finish(const Glib::RefPtr<AsyncResult>& result, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED


  /** Checks if the file enumerator has been closed.
   * @return <tt>true</tt> if the @a enumerator is closed.
   */
  bool is_closed() const;
  
  /** Checks if the file enumerator has pending operations.
   * @return <tt>true</tt> if the @a enumerator has pending operations.
   */
  bool has_pending() const;
  
  /** Sets the file enumerator as having pending operations.
   * @param pending A boolean value.
   */
  void set_pending(bool pending = true);

  
  /** Get the File container which is being enumerated.
   * @return The File which is being enumerated.
   * 
   * @newin2p18.
   */
  Glib::RefPtr<File> get_container();
  
  /** Get the File container which is being enumerated.
   * @return The File which is being enumerated.
   * 
   * @newin2p18.
   */
  Glib::RefPtr<const File> get_container() const;


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
   * @relates Gio::FileEnumerator
   */
  Glib::RefPtr<Gio::FileEnumerator> wrap(GFileEnumerator* object, bool take_copy = false);
}


#endif /* _GIOMM_FILEENUMERATOR_H */

