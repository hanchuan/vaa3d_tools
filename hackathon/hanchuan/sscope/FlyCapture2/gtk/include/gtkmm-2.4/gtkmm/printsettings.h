// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_PRINTSETTINGS_H
#define _GTKMM_PRINTSETTINGS_H


#include <glibmm.h>

/* Copyright (C) 2006 The gtkmm Development Team
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
#include <gtkmm/enums.h>
#include <gtkmm/papersize.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkPrintSettings GtkPrintSettings;
typedef struct _GtkPrintSettingsClass GtkPrintSettingsClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class PrintSettings_Class; } // namespace Gtk
namespace Gtk
{

/** @addtogroup gtkmmEnums Enums and Flags */

/**
 * @ingroup gtkmmEnums
 */
enum PrintDuplex
{
  PRINT_DUPLEX_SIMPLEX,
  PRINT_DUPLEX_HORIZONTAL,
  PRINT_DUPLEX_VERTICAL
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::PrintDuplex> : public Glib::Value_Enum<Gtk::PrintDuplex>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{

/**
 * @ingroup gtkmmEnums
 */
enum PrintQuality
{
  PRINT_QUALITY_LOW,
  PRINT_QUALITY_NORMAL,
  PRINT_QUALITY_HIGH,
  PRINT_QUALITY_DRAFT
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::PrintQuality> : public Glib::Value_Enum<Gtk::PrintQuality>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{

/**
 * @ingroup gtkmmEnums
 */
enum PrintPages
{
  PRINT_PAGES_ALL,
  PRINT_PAGES_CURRENT,
  PRINT_PAGES_RANGES
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::PrintPages> : public Glib::Value_Enum<Gtk::PrintPages>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{

/**
 * @ingroup gtkmmEnums
 */
enum PageSet
{
  PAGE_SET_ALL,
  PAGE_SET_EVEN,
  PAGE_SET_ODD
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::PageSet> : public Glib::Value_Enum<Gtk::PageSet>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{

/**
 * @ingroup gtkmmEnums
 */
enum NumberUpLayout
{
  NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_TOP_TO_BOTTOM,
  NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_BOTTOM_TO_TOP,
  NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_TOP_TO_BOTTOM,
  NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_BOTTOM_TO_TOP,
  NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_LEFT_TO_RIGHT,
  NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_RIGHT_TO_LEFT,
  NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_LEFT_TO_RIGHT,
  NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_RIGHT_TO_LEFT
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::NumberUpLayout> : public Glib::Value_Enum<Gtk::NumberUpLayout>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{


/** A PrintSettings object represents the settings of a print dialog in a system-independent way. 
 * The main use for this object is that once you've printed you can get a settings object that 
 * represents the settings the user chose, and the next time you print you can pass that object 
 * in so that the user doesn't have to re-set all his settings.
 * 
 * It's also possible to enumerate the settings so that you can easily save the settings for the 
 * next time your app runs, or even store them in a document. The predefined keys try to use shared 
 * values as much as possible so that moving such a document between systems still works. 
 *
 * @newin2p10
 *
 * @ingroup Printing
 */

class PrintSettings : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef PrintSettings CppObjectType;
  typedef PrintSettings_Class CppClassType;
  typedef GtkPrintSettings BaseObjectType;
  typedef GtkPrintSettingsClass BaseClassType;

private:  friend class PrintSettings_Class;
  static CppClassType printsettings_class_;

private:
  // noncopyable
  PrintSettings(const PrintSettings&);
  PrintSettings& operator=(const PrintSettings&);

protected:
  explicit PrintSettings(const Glib::ConstructParams& construct_params);
  explicit PrintSettings(GtkPrintSettings* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~PrintSettings();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkPrintSettings*       gobj()       { return reinterpret_cast<GtkPrintSettings*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkPrintSettings* gobj() const { return reinterpret_cast<GtkPrintSettings*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkPrintSettings* gobj_copy();

private:

protected:
  PrintSettings();

 //TODO: We need fuller information about the GError domains:
 //http://bugzilla.gnome.org/show_bug.cgi?id=544706

 /** Reads the print settings from the @a key_file.
  * Returns a new PrintSettings object with the restored settings,
  * or an empty RefPtr if an error occurred.
  * See save_to_key_file().
  *
  * @param key_file The KeyFile to retrieve the settings from.
  * @result the restored PrintSettings
  *
  * @throws KeyFileError
  *
  * @newin2p14
  */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  static Glib::RefPtr<PrintSettings> create_from_key_file(const Glib::KeyFile& key_file);
#else
  static Glib::RefPtr<PrintSettings> create_from_key_file(const Glib::KeyFile& key_file, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED

 /** Reads the print settings from the group @a group_name in @a key_file.
  * Returns a new PrintSettings object with the restored settings,
  * or an empty RefPtr if an error occurred.
  * See save_to_key_file().
  *
  * @param key_file The KeyFile to retrieve the settings from.
  * @param group_name The name of the group to use.
  * @result the restored PrintSettings
  *
  * @throws KeyFileError
  *
  * @newin2p14
  */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  static Glib::RefPtr<PrintSettings> create_from_key_file(const Glib::KeyFile& key_file, const Glib::ustring& group_name);
#else
  static Glib::RefPtr<PrintSettings> create_from_key_file(const Glib::KeyFile& key_file, const Glib::ustring& group_name, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED
  

 /** Reads the print settings from @a file_name. Returns a new PrintSettings
  * object with the restored settings, or an empty RefPtr if an error occurred.
  * See save_to_file().
  *
  * @param file_name The filename to read the settings from.
  * @result the restored PrintSettings
  *
  * @throws KeyFileError
  *
  * @newin2p14
  */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  static Glib::RefPtr<PrintSettings> create_from_file(const std::string& file_name);
#else
  static Glib::RefPtr<PrintSettings> create_from_file(const std::string& file_name, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED
  

public:
  
  static Glib::RefPtr<PrintSettings> create();


  /** Print settings keys.
   */
  class Keys
  {
  public:
    static const Glib::ustring PRINTER;
    static const Glib::ustring ORIENTATION;
    static const Glib::ustring PAPER_FORMAT;
    static const Glib::ustring PAPER_WIDTH;
    static const Glib::ustring PAPER_HEIGHT;
    static const Glib::ustring NUM_COPIES;
    static const Glib::ustring DEFAULT_SOURCE;
    static const Glib::ustring QUALITY;
    static const Glib::ustring RESOLUTION;
    static const Glib::ustring USE_COLOR;
    static const Glib::ustring DUPLEX;
    static const Glib::ustring COLLATE;
    static const Glib::ustring REVERSE;
    static const Glib::ustring MEDIA_TYPE;
    static const Glib::ustring DITHER;
    static const Glib::ustring SCALE;
    static const Glib::ustring PRINT_PAGES;
    static const Glib::ustring PAGE_RANGES;
    static const Glib::ustring PAGE_SET;
    static const Glib::ustring FINISHINGS;
    static const Glib::ustring NUMBER_UP;
    static const Glib::ustring NUMBER_UP_LAYOUT;
    static const Glib::ustring OUTPUT_BIN;

    static const Glib::ustring OUTPUT_FILE_FORMAT;
    static const Glib::ustring OUTPUT_URI;

    static const Glib::ustring WIN32_DRIVER_VERSION;
    static const Glib::ustring WIN32_DRIVER_EXTRA;
  };

  
  /** Copies a Gtk::PrintSettings object.
   * @return A newly allocated copy of @a other
   * 
   * @newin2p10.
   */
  Glib::RefPtr<PrintSettings> copy() const;

  //The from_ infix was added to these functions to make them clearer. GTK+ didn't want to change them.
  
  /** Reads the print settings from @a file_name.
   * See gtk_print_settings_to_file().
   * @param file_name The filename to read the settings from.
   * @return <tt>true</tt> on success
   * 
   * @newin2p14.
   */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  bool load_from_file(const std::string& file_name);
#else
  bool load_from_file(const std::string& file_name, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED


  /** Reads the print settings from the group @a group_name in @a key_file.
   * @param key_file The KeyFile to retrieve the settings from.
   * @param group_name The name of the group to use, or <tt>0</tt> to use the default
   * "Print Settings".
   * @return <tt>true</tt> on success
   * 
   * @newin2p14.
   */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  bool load_from_key_file(const Glib::KeyFile& key_file, const Glib::ustring& group_name);
#else
  bool load_from_key_file(const Glib::KeyFile& key_file, const Glib::ustring& group_name, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED


 /** Reads the print settings from the @a key_file.
  * See save_to_key_file().
  *
  * @param key_file The KeyFile to retrieve the settings from.
  * @result true on success.
  *
  * @throws KeyFileError
  *
  * @newin2p14
  */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  bool load_from_key_file(const Glib::KeyFile& key_file);
#else
  bool load_from_key_file(const Glib::KeyFile& key_file, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED


  //The save_ prefix was added to these functions to make them clearer. GTK+ didn't want to change them.
  
  /** This function saves the print settings from @a settings to @a file_name.
   *  @throws FileError
   * @param file_name The file to save to.
   * @return <tt>true</tt> on success
   * 
   * @newin2p12.
   */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  bool save_to_file(const std::string& file_name) const;
#else
  bool save_to_file(const std::string& file_name, std::auto_ptr<Glib::Error>& error) const;
#endif //GLIBMM_EXCEPTIONS_ENABLED


  /** This function adds the print settings from @a settings to @a key_file.
   * 
   * @newin2p12
   * @param key_file The Glib::KeyFile to save the print settings to.
   * @param group_name The group to add the settings to in @a key_file.
   */
  void save_to_key_file(Glib::KeyFile& key_file, const Glib::ustring& group_name) const;

  #ifndef GTKMM_DISABLE_DEPRECATED
  /** This function adds the print settings from @a settings to @a key_file,
   * in the "Print Settings" group.
   * 
   * @newin2p12
   * @param key_file The Glib::KeyFile to save the print settings to.
   *
   * @deprecated Use the const version.
   */
  void save_to_key_file(Glib::KeyFile& key_file);
  #endif //GTKMM_DISABLE_DEPRECATED

  /** This function adds the print settings from @a settings to @a key_file,
   * in the "Print Settings" group.
   * 
   * @newin2p12
   * @param key_file The Glib::KeyFile to save the print settings to.
   */
  void save_to_key_file(Glib::KeyFile& key_file) const;

  //TODO: add a @see link?
  
  /** Return value: <tt>true</tt>, if @a key has a value
   * @param key A key.
   * @return <tt>true</tt>, if @a key has a value
   * 
   * @newin2p10.
   */
  bool has_key(const Glib::ustring& key) const;

  
  /** Looks up the string value associated with @a key.
   * @param key A key.
   * @return The string value for @a key
   * 
   * @newin2p10.
   */
  Glib::ustring get(const Glib::ustring& key) const;

  
  /** Associates @a value with @a key.
   * 
   * @newin2p10
   * @param key A key.
   * @param value A string value, or <tt>0</tt>.
   */
  void set(const Glib::ustring& key, const Glib::ustring& value);
  
  /** Removes any value associated with @a key. 
   * This has the same effect as setting the value to <tt>0</tt>.
   * 
   * @newin2p10
   * @param key A key.
   */
  void unset(const Glib::ustring& key);

  /** For example, 
   * void on_foreach_setting(const Glib::ustring& key, const Glib::ustring& value);
   */
  typedef sigc::slot<void, const Glib::ustring&, const Glib::ustring&> SlotForeach;

  /** Calls a function for each print setting.
  * @param slot The callback to call for each print setting.
  */
  void setting_foreach(const SlotForeach& slot);

 
  /** Return value: <tt>true</tt>, if @a key maps to a true value.
   * @param key A key.
   * @return <tt>true</tt>, if @a key maps to a true value.
   * 
   * @newin2p10.
   */
  bool get_bool(const Glib::ustring& key) const;
  
  /** Sets @a key to a boolean value.
   * 
   * @newin2p10
   * @param key A key.
   * @param value A boolean.
   */
  void set_bool(const Glib::ustring& key, bool value = true);

  
  /** Return value: the double value of @a key
   * @param key A key.
   * @return The double value of @a key
   * 
   * @newin2p10.
   */
  double get_double(const Glib::ustring& key) const;
  
  /** Return value: the floating point number associated with @a key
   * @param key A key.
   * @param def The default value.
   * @return The floating point number associated with @a key
   * 
   * @newin2p10.
   */
  double get_double_with_default(const Glib::ustring& key, double def) const;
  
  /** Sets @a key to a double value.
   * 
   * @newin2p10
   * @param key A key.
   * @param value A double value.
   */
  void set_double(const Glib::ustring& key, double value);

  
  /** Return value: the length value of @a key, converted to @a unit
   * @param key A key.
   * @param unit The unit of the return value.
   * @return The length value of @a key, converted to @a unit
   * 
   * @newin2p10.
   */
  double get_length(const Glib::ustring& key, Unit unit) const;
  
  /** Associates a length in units of @a unit with @a key.
   * 
   * @newin2p10
   * @param key A key.
   * @param value A length.
   * @param unit The unit of @a length.
   */
  void set_length(const Glib::ustring& key, double value, Unit unit);

  
  /** Return value: the integer value of @a key
   * @param key A key.
   * @return The integer value of @a key 
   * 
   * @newin2p10.
   */
  int get_int(const Glib::ustring& key) const;
  
  /** Return value: the integer value of @a key
   * @param key A key.
   * @param def The default value.
   * @return The integer value of @a key
   * 
   * @newin2p10.
   */
  int get_int_with_default(const Glib::ustring& key, int def) const;
  
  /** Sets @a key to an integer value.
   * 
   * @newin2p10
   * @param key A key.
   * @param value An integer.
   */
  void set_int(const Glib::ustring& key, int value);

  // helpers:

  
  /** Convenience function to obtain the value of 
   * Gtk::PRINT_SETTINGS_PRINTER.
   * @return The printer name
   * 
   * @newin2p10.
   */
  Glib::ustring get_printer() const;
  
  /** Convenience function to set Gtk::PRINT_SETTINGS_PRINTER
   * to @a printer.
   * 
   * @newin2p10
   * @param printer The printer name.
   */
  void set_printer(const Glib::ustring& name);

  
  /** Get the value of Gtk::PRINT_SETTINGS_ORIENTATION, 
   * converted to a Gtk::PageOrientation.
   * @return The orientation
   * 
   * @newin2p10.
   */
  PageOrientation get_orientation() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_ORIENTATION.
   * 
   * @newin2p10
   * @param orientation A page orientation.
   */
  void set_orientation(PageOrientation orientation);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_PAPER_FORMAT, 
   * converted to a Gtk::PaperSize.
   * @return The paper size
   * 
   * @newin2p10.
   */
  PaperSize get_paper_size();
  
  /** Gets the value of Gtk::PRINT_SETTINGS_PAPER_FORMAT, 
   * converted to a Gtk::PaperSize.
   * @return The paper size
   * 
   * @newin2p10.
   */
  const PaperSize get_paper_size() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_PAPER_FORMAT,
   * Gtk::PRINT_SETTINGS_PAPER_WIDTH and
   * Gtk::PRINT_SETTINGS_PAPER_HEIGHT.
   * 
   * @newin2p10
   * @param paper_size A paper size.
   */
  void set_paper_size(const PaperSize& paper_size);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_PAPER_WIDTH,
   * converted to @a unit.
   * @param unit The unit for the return value.
   * @return The paper width, in units of @a unit
   * 
   * @newin2p10.
   */
  double get_paper_width(Unit unit) const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_PAPER_WIDTH.
   * 
   * @newin2p10
   * @param width The paper width.
   * @param unit The units of @a width.
   */
  void set_paper_width(double width, Unit unit);
  
  /** Gets the value of Gtk::PRINT_SETTINGS_PAPER_HEIGHT,
   * converted to @a unit.
   * @param unit The unit for the return value.
   * @return The paper height, in units of @a unit
   * 
   * @newin2p10.
   */
  double get_paper_height(Unit unit) const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_PAPER_HEIGHT.
   * 
   * @newin2p10
   * @param height The paper height.
   * @param unit The units of @a height.
   */
  void set_paper_height(double height, Unit unit);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_USE_COLOR.
   * @return Whether to use color
   * 
   * @newin2p10.
   */
  bool get_use_color() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_USE_COLOR.
   * 
   * @newin2p10
   * @param use_color Whether to use color.
   */
  void set_use_color(bool use_color = true);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_COLLATE.
   * @return Whether to collate the printed pages
   * 
   * @newin2p10.
   */
  bool get_collate() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_COLLATE.
   * 
   * @newin2p10
   * @param collate Whether to collate the output.
   */
  void set_collate(bool collate = true);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_REVERSE.
   * @return Whether to reverse the order of the printed pages
   * 
   * @newin2p10.
   */
  bool get_reverse() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_REVERSE.
   * 
   * @newin2p10
   * @param reverse Whether to reverse the output.
   */
  void set_reverse(bool reverse = true);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_DUPLEX.
   * @return Whether to print the output in duplex.
   * 
   * @newin2p10.
   */
  PrintDuplex get_duplex() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_DUPLEX.
   * 
   * @newin2p10
   * @param duplex A Gtk::PrintDuplex value.
   */
  void set_duplex(PrintDuplex duplex);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_QUALITY.
   * @return The print quality
   * 
   * @newin2p10.
   */
  PrintQuality get_quality() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_QUALITY.
   * 
   * @newin2p10
   * @param quality A Gtk::PrintQuality value.
   */
  void set_quality(PrintQuality quality);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_N_COPIES.
   * @return The number of copies to print
   * 
   * @newin2p10.
   */
  int get_n_copies() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_N_COPIES.
   * 
   * @newin2p10
   * @param num_copies The number of copies.
   */
  void set_n_copies(int num_copies);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_NUMBER_UP.
   * @return The number of pages per sheet
   * 
   * @newin2p10.
   */
  int get_number_up() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_NUMBER_UP.
   * 
   * @newin2p10
   * @param number_up The number of pages per sheet.
   */
  void set_number_up(int number_up);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_NUMBER_UP_LAYOUT.
   * @return Layout of page in number-up mode
   * 
   * @newin2p14.
   */
  NumberUpLayout get_number_up_layout() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_NUMBER_UP_LAYOUT.
   * 
   * @newin2p14
   * @param number_up_layout A Gtk::NumberUpLayout value.
   */
  void set_number_up(NumberUpLayout number_up_layout);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_RESOLUTION.
   * @return The resolution in dpi
   * 
   * @newin2p10.
   */
  int get_resolution() const;
  
  /** Sets the values of Gtk::PRINT_SETTINGS_RESOLUTION,
   * Gtk::PRINT_SETTINGS_RESOLUTION_X and 
   * Gtk::PRINT_SETTINGS_RESOLUTION_Y.
   * 
   * @newin2p10
   * @param resolution The resolution in dpi.
   */
  void set_resolution(int resolution);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_RESOLUTION_X.
   * @return The horizontal resolution in dpi
   * 
   * @newin2p16.
   */
  int get_resolution_x() const;
  
  /** Gets the value of Gtk::PRINT_SETTINGS_RESOLUTION_Y.
   * @return The vertical resolution in dpi
   * 
   * @newin2p16.
   */
  int get_resolution_y() const;
  
  /** Sets the values of Gtk::PRINT_SETTINGS_RESOLUTION,
   * Gtk::PRINT_SETTINGS_RESOLUTION_X and
   * Gtk::PRINT_SETTINGS_RESOLUTION_Y.
   * 
   * @newin2p16
   * @param resolution_x The horizontal resolution in dpi.
   * @param resolution_y The vertical resolution in dpi.
   */
  void set_resolution_xy(int resolution_x, int resolution_y);
  
  /** Gets the value of Gtk::PRINT_SETTINGS_PRINTER_LPI.
   * @return The resolution in lpi (lines per inch)
   * 
   * @newin2p16.
   */
  double get_printer_lpi() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_PRINTER_LPI.
   * 
   * @newin2p16
   * @param lpi The resolution in lpi (lines per inch).
   */
  void set_printer_lpi(double lpi);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_SCALE.
   * @return The scale in percent
   * 
   * @newin2p10.
   */
  double get_scale() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_SCALE.
   * 
   * @newin2p10
   * @param scale The scale in percent.
   */
  void set_scale(double scale);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_PRINT_PAGES.
   * @return Which pages to print
   * 
   * @newin2p10.
   */
  PrintPages get_print_pages() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_PRINT_PAGES.
   * 
   * @newin2p10
   * @param pages A Gtk::PrintPages value.
   */
  void set_print_pages(PrintPages print_pages);

  //This corresponds to GtkPageRange.
  class PageRange
  {
  public:
    PageRange();
    PageRange(int start, int end);

    int start;
    int end;
  };

  Glib::ArrayHandle<PageRange> get_page_ranges() const;
  void set_page_ranges(const Glib::ArrayHandle<PageRange>& page_ranges);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_PAGE_SET.
   * @return The set of pages to print
   * 
   * @newin2p10.
   */
  PageSet get_page_set() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_PAGE_SET.
   * 
   * @newin2p10
   * @param page_set A Gtk::PageSet value.
   */
  void set_page_set(PageSet page_set);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_DEFAULT_SOURCE.
   * @return The default source
   * 
   * @newin2p10.
   */
  Glib::ustring get_default_source() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_DEFAULT_SOURCE.
   * 
   * @newin2p10
   * @param default_source The default source.
   */
  void set_default_source(const Glib::ustring& default_source);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_MEDIA_TYPE.
   * 
   * The set of media types is defined in PWG 5101.1-2002 PWG.
   * <!-- FIXME link here -->
   * @return The media type
   * 
   * @newin2p10.
   */
  Glib::ustring get_media_type() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_MEDIA_TYPE.
   * 
   * The set of media types is defined in PWG 5101.1-2002 PWG.
   * <!-- FIXME link here -->
   * 
   * @newin2p10
   * @param media_type The media type.
   */
  void set_media_type(const Glib::ustring& media_type);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_DITHER.
   * @return The dithering that is used
   * 
   * @newin2p10.
   */
  Glib::ustring get_dither() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_DITHER.
   * 
   * @newin2p10
   * @param dither The dithering that is used.
   */
  void set_dither(const Glib::ustring& dither);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_FINISHINGS.
   * @return The finishings
   * 
   * @newin2p10.
   */
  Glib::ustring get_finishings() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_FINISHINGS.
   * 
   * @newin2p10
   * @param finishings The finishings.
   */
  void set_finishings(const Glib::ustring& finishings);

  
  /** Gets the value of Gtk::PRINT_SETTINGS_OUTPUT_BIN.
   * @return The output bin
   * 
   * @newin2p10.
   */
  Glib::ustring get_output_bin() const;
  
  /** Sets the value of Gtk::PRINT_SETTINGS_OUTPUT_BIN.
   * 
   * @newin2p10
   * @param output_bin The output bin.
   */
  void set_output_bin(const Glib::ustring& output_bin);

  //There are no properties.


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

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::PrintSettings
   */
  Glib::RefPtr<Gtk::PrintSettings> wrap(GtkPrintSettings* object, bool take_copy = false);
}


#endif /* _GTKMM_PRINTSETTINGS_H */

