// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _ATKMM_HYPERLINK_H
#define _ATKMM_HYPERLINK_H


#include <glibmm.h>

/* $Id: hyperlink.hg,v 1.4 2006/04/12 11:11:24 murrayc Exp $ */

/* Copyright (C) 2003 The gtkmm Development Team
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

#include <atkmm/action.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _AtkHyperlink AtkHyperlink;
typedef struct _AtkHyperlinkClass AtkHyperlinkClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Atk
{ class Hyperlink_Class; } // namespace Atk
namespace Atk
{

class Object;

/* An ATK object which encapsulates a link or set of links in a hypertext document.
 * It implements the AtkAction interface.
 */

class Hyperlink
  : public Glib::Object,
    public Atk::Action
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Hyperlink CppObjectType;
  typedef Hyperlink_Class CppClassType;
  typedef AtkHyperlink BaseObjectType;
  typedef AtkHyperlinkClass BaseClassType;

private:  friend class Hyperlink_Class;
  static CppClassType hyperlink_class_;

private:
  // noncopyable
  Hyperlink(const Hyperlink&);
  Hyperlink& operator=(const Hyperlink&);

protected:
  explicit Hyperlink(const Glib::ConstructParams& construct_params);
  explicit Hyperlink(AtkHyperlink* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Hyperlink();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  AtkHyperlink*       gobj()       { return reinterpret_cast<AtkHyperlink*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const AtkHyperlink* gobj() const { return reinterpret_cast<AtkHyperlink*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  AtkHyperlink* gobj_copy();

private:

  
protected:

public:

  
  /** Get a the URI associated with the anchor specified 
   * by @a i of @a link. 
   * 
   * Multiple anchors are primarily used by client-side image maps.
   * @param i A (zero-index) integer specifying the desired anchor.
   * @return A string specifying the URI.
   */
  Glib::ustring get_uri(int i) const;

  
  /** Returns the item associated with this hyperlinks nth anchor.
   * For instance, the returned Atk::Object will implement Atk::Text
   * if @a link is a text hyperlink, Atk::Image if @a link is an image
   * hyperlink etc. 
   * 
   * Multiple anchors are primarily used by client-side image maps.
   * @param i A (zero-index) integer specifying the desired anchor.
   * @return An Atk::Object associated with this hyperlinks i-th anchor.
   */
  Glib::RefPtr<Atk::Object> get_object(int i);
  
  /** Returns the item associated with this hyperlinks nth anchor.
   * For instance, the returned Atk::Object will implement Atk::Text
   * if @a link is a text hyperlink, Atk::Image if @a link is an image
   * hyperlink etc. 
   * 
   * Multiple anchors are primarily used by client-side image maps.
   * @param i A (zero-index) integer specifying the desired anchor.
   * @return An Atk::Object associated with this hyperlinks i-th anchor.
   */
  Glib::RefPtr<const Atk::Object> get_object(int i) const;
  
  
  /** Gets the index with the hypertext document at which this link ends.
   * @return The index with the hypertext document at which this link ends.
   */
  int get_end_index() const;

  
  /** Gets the index with the hypertext document at which this link begins.
   * @return The index with the hypertext document at which this link begins.
   */
  int get_start_index() const;

  
  /** Since the document that a link is associated with may have changed
   * this method returns <tt>true</tt> if the link is still valid (with
   * respect to the document it references) and <tt>false</tt> otherwise.
   * @return Whether or not this link is still valid.
   */
  bool is_valid() const;

  
  /** Indicates whether the link currently displays some or all of its
   * content inline.  Ordinary HTML links will usually return
   * <tt>false</tt>, but an inline &lt;src&gt; HTML element will return
   * <tt>true</tt>.
   * a *
   * @return Whether or not this link displays its content inline.
   */
  bool is_inline() const;

  
  /** Gets the number of anchors associated with this hyperlink.
   * @return The number of anchors associated with this hyperlink.
   */
  int get_n_anchors() const;
  
  /** Determines whether this AtkHyperlink is selected
   * @return True is the AtkHyperlink is selected, False otherwise.
   */
  bool is_selected_link() const;

  
  /**
   * @par Prototype:
   * <tt>void on_my_%link_activated()</tt>
   */

  Glib::SignalProxy0< void > signal_link_activated();


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Specifies whether the AtkHyperlink object is selected.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_selected_link() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The number of anchors associated with the AtkHyperlink object.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<int> property_number_of_anchors() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The end index of the AtkHyperlink object.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<int> property_end_index() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The start index of the AtkHyperlink object.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<int> property_start_index() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


protected:
  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual gchar* get_uri_vfunc(int i) const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual Glib::RefPtr<Atk::Object> get_object_vfunc(int i);
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual int get_end_index_vfunc() const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual int get_start_index_vfunc() const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual bool is_valid_vfunc() const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual int get_n_anchors_vfunc() const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual guint link_state_vfunc() const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual bool is_selected_link_vfunc() const;
#endif //GLIBMM_VFUNCS_ENABLED
 

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
  virtual void on_link_activated();
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


};

} // namespace Atk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Atk::Hyperlink
   */
  Glib::RefPtr<Atk::Hyperlink> wrap(AtkHyperlink* object, bool take_copy = false);
}


#endif /* _ATKMM_HYPERLINK_H */

