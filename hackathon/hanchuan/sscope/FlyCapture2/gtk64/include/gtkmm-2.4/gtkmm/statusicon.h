// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_STATUSICON_H
#define _GTKMM_STATUSICON_H


#include <glibmm.h>

/* $Id: statusicon.hg,v 1.6 2006/07/05 16:59:28 murrayc Exp $ */

/* Copyright (C) 2005 The gtkmm Development Team
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


#include <gtkmm/image.h> //For ImageType.
#include <gtkmm/stockid.h>
#include <gtkmm/menu.h>
#include <gdkmm/pixbuf.h>
#include <gdkmm/types.h>
#include <gtkmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkStatusIcon GtkStatusIcon;
typedef struct _GtkStatusIconClass GtkStatusIconClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class StatusIcon_Class; } // namespace Gtk
namespace Gtk
{

/** The "system tray" or notification area is normally used for transient icons that indicate some 
 * special state. For example, a system tray icon might appear to tell the user that they have new 
 * mail, or have an incoming instant message, or something along those lines. The basic idea is 
 * that creating an icon in the notification area is less annoying than popping up a dialog.
 *
 * A StatusIcon object can be used to display an icon in a "system tray". The icon can have a 
 * tooltip, and the user can interact with it by activating it or popping up a context menu. 
 * Critical information should not solely be displayed in a StatusIcon, since it may not be 
 * visible (e.g. when the user doesn't have a notification area on his panel). This can be checked 
 * with is_embedded().
 *
 * On X11, the implementation follows the freedesktop.org "System Tray" specification.  
 * Implementations of the "tray" side of this specification can be found e.g. in the GNOME and KDE 
 * panel applications. 
 *
 * @newin2p10
 */

class StatusIcon : public Glib::Object
{
   
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef StatusIcon CppObjectType;
  typedef StatusIcon_Class CppClassType;
  typedef GtkStatusIcon BaseObjectType;
  typedef GtkStatusIconClass BaseClassType;

private:  friend class StatusIcon_Class;
  static CppClassType statusicon_class_;

private:
  // noncopyable
  StatusIcon(const StatusIcon&);
  StatusIcon& operator=(const StatusIcon&);

protected:
  explicit StatusIcon(const Glib::ConstructParams& construct_params);
  explicit StatusIcon(GtkStatusIcon* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~StatusIcon();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkStatusIcon*       gobj()       { return reinterpret_cast<GtkStatusIcon*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkStatusIcon* gobj() const { return reinterpret_cast<GtkStatusIcon*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkStatusIcon* gobj_copy();

private:

protected:
  StatusIcon();
  
  explicit StatusIcon(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf);
  explicit StatusIcon(const StockID& stock);
  explicit StatusIcon(const Glib::ustring& icon_name);
  explicit StatusIcon(const Glib::RefPtr<const Gio::Icon>& icon);

public:
  /** Creates a new Gtk::StatusIcon object.
   * @return A Glib::RefPtr<> to a newly created Gtk::StatusIcon object.
   */
  
  static Glib::RefPtr<StatusIcon> create(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf);

  
  static Glib::RefPtr<StatusIcon> create(const StockID& stock_id);

  
  static Glib::RefPtr<StatusIcon> create(const Glib::ustring& icon_name);


 /** Creates a status icon displaying the file @a filename. 
  * The image will be scaled down to fit in the available 
  * space in the notification area, if necessary.
  * 
  * @param filename A filename.
  * @result A new StatusIcon
  *
  * @newin2p10
  */
  static Glib::RefPtr<StatusIcon> create_from_file(const std::string& filename);
  

  /** Makes @a status_icon display @a pixbuf. 
   * See new_from_pixbuf() for details.
   * 
   * @newin2p10
   * @param pixbuf A Gdk::Pixbuf or <tt>0</tt>.
   */
  void set(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf);
  
  /** Makes @a status_icon display the file @a filename.
   * See new_from_file() for details.
   * 
   * @newin2p10
   * @param filename A filename.
   */
  void set_from_file(const Glib::ustring& filename);
  
  /** Makes @a status_icon display the stock icon with the id @a stock_id.
   * See new_from_stock() for details.
   * 
   * @newin2p10
   * @param stock_id A stock icon id.
   */
  void set(const StockID& stock_id);
  
  /** Makes @a status_icon display the icon named @a icon_name from the 
   * current icon theme.
   * See new_from_icon_name() for details.
   * 
   * @newin2p10
   * @param icon_name An icon name.
   */
  void set(const Glib::ustring& icon_name);
  
  /** Makes @a status_icon display the Icon.
   * See new_from_gicon() for details.
   * 
   * @newin2p14
   * @param icon A GIcon.
   */
  void set(const Glib::RefPtr<const Gio::Icon>& icon);

  
  /** Gets the type of representation being used by the Gtk::StatusIcon
   * to store image data. If the Gtk::StatusIcon has no image data,
   * the return value will be Gtk::IMAGE_EMPTY.
   * @return The image representation being used
   * 
   * @newin2p10.
   */
  ImageType get_storage_type() const;

  
  /** Gets the Gdk::Pixbuf being displayed by the Gtk::StatusIcon.
   * The storage type of the status icon must be Gtk::IMAGE_EMPTY or
   * Gtk::IMAGE_PIXBUF (see get_storage_type()).
   * The caller of this function does not own a reference to the
   * returned pixbuf.
   * @return The displayed pixbuf, or <tt>0</tt> if the image is empty.
   * 
   * @newin2p10.
   */
  Glib::RefPtr<Gdk::Pixbuf> get_pixbuf();
  
  /** Gets the Gdk::Pixbuf being displayed by the Gtk::StatusIcon.
   * The storage type of the status icon must be Gtk::IMAGE_EMPTY or
   * Gtk::IMAGE_PIXBUF (see get_storage_type()).
   * The caller of this function does not own a reference to the
   * returned pixbuf.
   * @return The displayed pixbuf, or <tt>0</tt> if the image is empty.
   * 
   * @newin2p10.
   */
  Glib::RefPtr<const Gdk::Pixbuf> get_pixbuf() const;

  
  /** Gets the id of the stock icon being displayed by the Gtk::StatusIcon.
   * The storage type of the status icon must be Gtk::IMAGE_EMPTY or
   * Gtk::IMAGE_STOCK (see get_storage_type()).
   * The returned string is owned by the Gtk::StatusIcon and should not
   * be freed or modified.
   * @return Stock id of the displayed stock icon,
   * or <tt>0</tt> if the image is empty.
   * 
   * @newin2p10.
   */
  StockID get_stock() const;
  
  /** Gets the name of the icon being displayed by the Gtk::StatusIcon.
   * The storage type of the status icon must be Gtk::IMAGE_EMPTY or
   * Gtk::IMAGE_ICON_NAME (see get_storage_type()).
   * The returned string is owned by the Gtk::StatusIcon and should not
   * be freed or modified.
   * @return Name of the displayed icon, or <tt>0</tt> if the image is empty.
   * 
   * @newin2p10.
   */
  Glib::ustring get_icon_name() const;

  
  /** Retrieves the Icon being displayed by the Gtk::StatusIcon.
   * The storage type of the status icon must be Gtk::IMAGE_EMPTY or
   * Gtk::IMAGE_GICON (see get_storage_type()).
   * The caller of this function does not own a reference to the
   * returned Icon.
   * 
   * If this function fails, @a icon is left unchanged;
   * @return The displayed icon, or <tt>0</tt> if the image is empty
   * 
   * @newin2p14.
   */
  Glib::RefPtr<Gio::Icon> get_icon();
  
  /** Retrieves the Icon being displayed by the Gtk::StatusIcon.
   * The storage type of the status icon must be Gtk::IMAGE_EMPTY or
   * Gtk::IMAGE_GICON (see get_storage_type()).
   * The caller of this function does not own a reference to the
   * returned Icon.
   * 
   * If this function fails, @a icon is left unchanged;
   * @return The displayed icon, or <tt>0</tt> if the image is empty
   * 
   * @newin2p14.
   */
  Glib::RefPtr<const Gio::Icon> get_icon() const;

  
  /** Gets the size in pixels that is available for the image. 
   * Stock icons and named icons adapt their size automatically
   * if the size of the notification area changes. For other
   * storage types, the size-changed signal can be used to
   * react to size changes.
   * 
   * Note that the returned size is only meaningful while the 
   * status icon is embedded (see is_embedded()).
   * @return The size that is available for the image
   * 
   * @newin2p10.
   */
  int get_size() const;

  
  /** Sets the Gdk::Screen where @a status_icon is displayed; if
   * the icon is already mapped, it will be unmapped, and
   * then remapped on the new screen.
   * 
   * @newin2p12
   * @param screen A Gdk::Screen.
   */
  void set_screen(const Glib::RefPtr<Gdk::Screen>& screen);
  
  /** Return value: a Gdk::Screen.
   * @return A Gdk::Screen.
   * 
   * @newin2p12.
   */
  Glib::RefPtr<Gdk::Screen> get_screen();
  
  /** Return value: a Gdk::Screen.
   * @return A Gdk::Screen.
   * 
   * @newin2p12.
   */
  Glib::RefPtr<const Gdk::Screen> get_screen() const;

  
  /** Sets the tooltip of the status icon.
   * 
   * @newin2p10
   * 
   * Deprecated: 2.16: Use set_tooltip_text() instead.
   * @param tooltip_text The tooltip text, or <tt>0</tt>.
   */
  void set_tooltip(const Glib::ustring& tooltip_text);

  
  /** Shows or hides a status icon.
   * 
   * @newin2p10
   * @param visible <tt>true</tt> to show the status icon, <tt>false</tt> to hide it.
   */
  void set_visible(bool visible = true);
  
  /** Return value: <tt>true</tt> if the status icon is visible
   * @return <tt>true</tt> if the status icon is visible
   * 
   * @newin2p10.
   */
  bool get_visible() const;
  
  /** Makes the status icon start or stop blinking. 
   * Note that blinking user interface elements may be problematic
   * for some users, and thus may be turned off, in which case
   * this setting has no effect.
   * 
   * @newin2p10
   * @param blinking <tt>true</tt> to turn blinking on, <tt>false</tt> to turn it off.
   */
  void set_blinking(bool blinking = true);
  
  /** Return value: <tt>true</tt> if the icon is blinking
   * @return <tt>true</tt> if the icon is blinking
   * 
   * @newin2p10.
   */
  bool get_blinking() const;

  
  /** Return value: <tt>true</tt> if the status icon is embedded in
   * @return <tt>true</tt> if the status icon is embedded in
   * a notification area.
   * 
   * @newin2p10.
   */
  bool is_embedded() const;

  /** Displays a menu aligned to the status icon, and makes it available for selection. 
   * Applications can use this function to display context-sensitive menus.
   *
   * This is equivalent to the gtk_status_icon_position_menu() helper callback in GTK+, 
   * which can be provided to gtk_menu_popup().
   *
   * See Gtk::Menu::popup() for more details.
   *
   * @param menu The menu to popup for the status icon.
   * @param button The mouse button which was pressed to initiate the event.
   * @param activate_time The time at which the activation event occurred.
   *
   * @newin2p12
   */
  void popup_menu_at_position(Menu& menu, guint button, guint32 activate_time);
  
   //Note that gtk_status_icon_position_menu() is meant to be used as a helpful callback when calling gtk_menu_popup().
   //We make it easier by just providing a popup method that uses it. 


  //In gtk_status_icon_get_geometry(), any of the parameters may be NULL,
  //but we don't need 6 different overloads, with different parameters.
  //But we can add some if there are common cases.

  /** Obtains information about the location of the status icon
   * on screen. This information can be used to e.g. position 
   * popups like notification bubbles. 
   * See popup_menu_at_position() for a more convenient 
   * alternative for positioning menus.
   *
   * Note that some platforms do not allow GTK+ to provide 
   * this information.
   *
   * @param screen: The screen.
   * @param area The area occupied by the status icon.
   * @param orientation The orientation of the panel  in which the status icon is embedded. A panel 
   * at the top or bottom of the screen is horizontal, a panel at the left or right is vertical.
   * @result true if the location information has been filled in.
   *
   * @newin2p10
   */
  bool get_geometry(Glib::RefPtr<Gdk::Screen>& screen, Gdk::Rectangle& area, Orientation& orientation);
  

  /** Return value: current value of has-tooltip on @a status_icon.
   * @return Current value of has-tooltip on @a status_icon.
   * 
   * @newin2p16.
   */
  bool get_has_tooltip() const;
  
  /** Sets the has-tooltip property on @a status_icon to @a has_tooltip.
   * See Gtk::StatusIcon:has-tooltip for more information.
   * 
   * @newin2p16
   * @param has_tooltip Whether or not @a status_icon has a tooltip.
   */
  void set_has_tooltip(bool has_tooltip = true);
  
  /** Gets the contents of the tooltip for @a status_icon.
   * @return The tooltip text, or <tt>0</tt>. You should free the
   * returned string with Glib::free() when done.
   * 
   * @newin2p16.
   */
  Glib::ustring get_tooltip_text() const;
  
  /** Sets @a text as the contents of the tooltip.
   * 
   * This function will take care of setting Gtk::StatusIcon:has-tooltip to
   * <tt>true</tt> and of the default handler for the Gtk::StatusIcon::query-tooltip
   * signal.
   * 
   * See also the Gtk::StatusIcon:tooltip-text property and
   * gtk_tooltip_set_text().
   * 
   * @newin2p16
   * @param text The contents of the tooltip for @a status_icon.
   */
  void set_tooltip_text(const Glib::ustring& text);
  
  /** Gets the contents of the tooltip for @a status_icon.
   * @return The tooltip text, or <tt>0</tt>. You should free the
   * returned string with Glib::free() when done.
   * 
   * @newin2p16.
   */
  Glib::ustring get_tooltip_markup() const;
  
  /** Sets @a markup as the contents of the tooltip, which is marked up with
   * the <link linkend="PangoMarkupFormat">Pango text markup language</link>.
   * 
   * This function will take care of setting Gtk::StatusIcon:has-tooltip to <tt>true</tt>
   * and of the default handler for the Gtk::StatusIcon::query-tooltip signal.
   * 
   * See also the Gtk::StatusIcon:tooltip-markup property and
   * gtk_tooltip_set_markup().
   * 
   * @newin2p16
   * @param markup The contents of the tooltip for @a status_icon, or <tt>0</tt>.
   */
  void set_tooltip_markup(const Glib::ustring& markup);

  
  /** This function is only useful on the X11/freedesktop.org platform.
   * It returns a window ID for the widget in the underlying
   * status icon implementation.  This is useful for the Galago 
   * notification service, which can send a window ID in the protocol 
   * in order for the server to position notification windows 
   * pointing to a status icon reliably.
   * 
   * This function is not intended for other use cases which are
   * more likely to be met by one of the non-X11 specific methods, such
   * as position_menu().
   * @return An 32 bit unsigned integer identifier for the 
   * underlying X11 Window
   * 
   * @newin2p14.
   */
  guint32 get_x11_window_id() const;

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** A GdkPixbuf to display.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> > property_pixbuf() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** A GdkPixbuf to display.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> > property_pixbuf() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Filename to load and display.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_WriteOnly<std::string> property_file() ;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Stock ID for a stock image to display.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<StockID> property_stock() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Stock ID for a stock image to display.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<StockID> property_stock() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The name of the icon from the icon theme.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Glib::ustring> property_icon_name() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The name of the icon from the icon theme.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_icon_name() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The GIcon being displayed.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> > property_gicon() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The GIcon being displayed.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> > property_gicon() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The representation being used for image data.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<ImageType> property_storage_type() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The size of the icon.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<int> property_size() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The screen where this status icon will be displayed.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gdk::Screen> > property_screen() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The screen where this status icon will be displayed.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Screen> > property_screen() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether or not the status icon is blinking.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_blinking() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether or not the status icon is blinking.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_blinking() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether or not the status icon is visible.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_visible() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether or not the status icon is visible.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_visible() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  /**
   * @par Prototype:
   * <tt>bool on_my_%size_changed(int size)</tt>
   */

  Glib::SignalProxy1< bool,int > signal_size_changed();


  //TODO: Remove no_default_handler when we can break ABI.
  
  /**
   * @par Prototype:
   * <tt>void on_my_%activate()</tt>
   */

  Glib::SignalProxy0< void > signal_activate();

  
  /**
   * @par Prototype:
   * <tt>void on_my_%popup_menu(guint button, guint32 activate_time)</tt>
   */

  Glib::SignalProxy2< void,guint,guint32 > signal_popup_menu();

  
  /**
   * @par Prototype:
   * <tt>bool on_my_%button_press_event(GdkEventButton* event)</tt>
   */

  Glib::SignalProxy1< bool,GdkEventButton* > signal_button_press_event();

  
  /**
   * @par Prototype:
   * <tt>bool on_my_%button_release_event(GdkEventButton* event)</tt>
   */

  Glib::SignalProxy1< bool,GdkEventButton* > signal_button_release_event();

  
  /**
   * @par Prototype:
   * <tt>bool on_my_%scroll_event(GdkEventScroll* event)</tt>
   */

  Glib::SignalProxy1< bool,GdkEventScroll* > signal_scroll_event();


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
  virtual bool on_size_changed(int size);
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::StatusIcon
   */
  Glib::RefPtr<Gtk::StatusIcon> wrap(GtkStatusIcon* object, bool take_copy = false);
}


#endif /* _GTKMM_STATUSICON_H */

