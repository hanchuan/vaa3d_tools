// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_MAIN_H
#define _GTKMM_MAIN_H


#include <glibmm.h>

/* $Id: main.hg,v 1.9 2005/02/13 20:48:35 murrayc Exp $ */

/* main.h
 * 
 * Copyright (C) 1998-2003 The gtkmm Development Team
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


#include <gtk/gtk.h>

#include <sigc++/sigc++.h>
#include <gdkmm/types.h>


namespace Gtk
{

class Widget;
class Window;

//**********************************************************************

#ifndef DOXYGEN_SHOULD_SKIP_THIS
//Actually, I'd like to just keep these out of the alphabetical list. murrayc.

/// Run Signal Class (internal)
class RunSig
{
public:
  typedef sigc::slot<void> SlotType;

  sigc::connection connect(const SlotType& slot);

protected:
  static gboolean gtk_callback(gpointer data);
};


/// Quit Signal Class (internal)
class QuitSig
{
public:
  typedef sigc::slot<bool> SlotType;

  sigc::connection connect(const SlotType& slot, guint main_level = 0);

protected:
  static gboolean gtk_callback(gpointer data); //gtk+ calls this, which then calls our slot.
};


/// KeySnooper Signal Class (internal)
class KeySnooperSig
{
public:
  typedef sigc::slot<int, Widget*, GdkEventKey*> SlotType;

  sigc::connection connect(const SlotType& slot);

protected:
  static int gtk_callback(GtkWidget* widget, GdkEventKey* event, gpointer data);
};

#endif /* DOXYGEN_SHOULD_SKIP_THIS */


//**********************************************************************

/** Main application class
 * Every application must have one of these objects.
 * It may not be global and must be the first Gtk object created.
 * It is a singleton so declaring more than one will simply access the first
 * created.
 *
 * Normal use of this class is in the main() function to give argc and argv
 * to the gtk initialization. Widgets can use Gtk::Main::quit()
 * to exit from the application.
 *
 * The internals of the widget have been disguised as signals
 * so that the user can easily connect using the same methods
 * used throughout the widget interface.
 *
 * Minimal gtkmm application is something like this:
 * @code
 * int main(int argc, char *argv[]) {
 *     Gtk::Main kit(argc, argv);
 *     ... create some widgets ...
 *     kit.run();
 * }
 * @endcode
 */
class Main : public sigc::trackable
{
public:

  //This offers the same functionality as gtk_init_with_args():
  /** Scans the argument vector, and strips off all parameters parsed by GTK+ or your @a option_context.
   * Add a Glib::OptionGroup to the Glib::OptionContext to parse your own command-line arguments.  
   *
   * Note:  The argument strings themself won't be modified, although the
   * pointers to them might change.  This makes it possible to create your
   * own argv of string literals, which have the type 'const char[]' in
   * standard C++.  (You might need to use const_cast<>, though.)
   *
   * This function automatically generates nicely formatted 
   * <option>--help</option> output. Note that your program will
   * be terminated after writing out the help output.
   *
   * @param argc a reference to the number of command line arguments.
   * @param argv a reference to the array of command line arguments.
   * @parameter_string a string which is displayed in the first line of <option>--help</option> output, 
   * after <literal><replaceable>programname</replaceable> [OPTION...]</literal>
   * @param option_context A Glib::OptionContext containing Glib::OptionGroups which described the command-line arguments taken by your program. 
   *
   * @throw Glib::OptionError
   */
  Main(int& argc, char**& argv, Glib::OptionContext& option_context);

  /** Scans the argument vector, and strips off all parameters known to GTK+.
   * Your application may then handle the remaining arguments.
   *
   * Note:  The argument strings themself won't be modified, although the
   * pointers to them might change.  This makes it possible to create your
   * own argv of string literals, which have the type 'const char[]' in
   * standard C++.  (You might need to use const_cast<>, though.)
   */
  Main(int* argc, char*** argv, bool set_locale = true);

  /// See Main(int* argc, char*** argv, bool set_locale).
  Main(int& argc, char**& argv, bool set_locale = true);

 
  virtual ~Main();

  /// Access to the one global instance of Gtk::Main.
  static Gtk::Main* instance();

  /** Start the event loop.
   * This begins the event loop which handles events.  No
   * events propagate until this has been called.  It may be
   * called recursively to popup dialogs
   */
  static void run();

  /** Returns from the main loop when the window is closed.
   * When using this override, you should not use Gtk::Main::quit() to close
   * the application, but just call hide() on your Window class.
   *
   * @param window The window to show. This method will return when the window is hidden.
   */
  static void run(Window& window);

  /** Makes the innermost invocation of the main loop return when it regains control.
   */
  static void quit();

  static guint level();

  //This attempts to provide the same functionality as gtk_get_option_group():
  /** Add a Glib::OptionGroup, for the commandline arguments recognized
   * by GTK+ and GDK, to a Glib::OptionContext, so that these commandline arguments will 
   * be processed in addition to the existing commandline arguments specified by the Glib::OptionContext.
   *
   * You do not need to use this method if you pass your Glib::OptionContext to the Main constructor, because 
   * it adds the gtk option group automatically.
   *
   * @param option_context Option Context to which the group will be added.
   * @param open_default_display Whether to open the default display when parsing the commandline arguments.
   */
  static void add_gtk_option_group(Glib::OptionContext& option_context, bool open_default_display = true);

  /** Runs a single iteration of the main loop.
   * If no events are waiting to be processed GTK+ will block until the next event is noticed.
   * If you don't want to block then pass false for @a blocking or check if any events are pending with
   * pending() first.
   *
   * @param blocking Whether the caller must wait until the next event is noticed, or return immediately if there are no events.
   * @result true if quit() has been called for the innermost main loop.
   */
  static bool iteration(bool blocking = true);

  /** Checks if any events are pending. This can be used to update the GUI and invoke timeouts etc. while doing some time intensive computation.
   *
   * Example: Updating the GUI during a long computation.
   * @code
   * // computation going on
   * while( Gtk::Main::events_pending() )
   *   Gtk::Main::iteration();
   *
   * // computation continued
   * @endcode
   *
   * @result true if any events are pending, false otherwise.
   */
  static bool events_pending();

  /** Run signal
   * @return void
   */
  static RunSig& signal_run();

  /** Quit signal
   * You can connect signal handlers to invoke actions when Gtk::Main::quit()
   * has been called.  Note that main loops can be nested by calling
   * Gtk::Main::run() recursively, therefore receiving this signal doesn't
   * necessarily mean the application is about to be terminated.  If you want
   * to receive a signal only when the last main loop quits, call connect()
   * with <tt>main_level&nbsp;=&nbsp;1</tt>.
   * @code
   * bool thisclass::mymethod() { return false; }
   * Gtk::Main::signal_quit().connect(sigc::mem_fun(this, &thisclass::mymethod));
   * @endcode
   * @return bool - @c false means callback is removed, @c true means
   * it'll be called again the next the main loop quits.
   */
  static QuitSig& signal_quit();

  /** KeySnooper signal
   * Allows you to channel keypresses to a signal handler
   * without registering with the widget.
   *
   * @return KeySnooperSig A Signal to which you can connect a sigc::slot< int, Widget *, GdkEventKey * >
   *
   * It is the responsibility of the snooper to pass the keypress
   * to the widget, however, care must be taken that the keypress is
   * not passed twice.
   */
  static KeySnooperSig& signal_key_snooper();

  // Initialize table of wrap_new functions.
  // Doesn't need an instance of Gtk::Main.
  static void init_gtkmm_internals();

protected:
  Main();

  void init(int* argc, char*** argv, bool set_locale);
  // TODO: implement this to use the new Glib::OptionEntry argument parsing classes.
  //void init(int* argc, char*** argv, const std::string& parameter_string, const Glib::ArrayHandle<const Glib::OptionEntry&>& entries, const std::string& translation_domain);

  virtual void run_impl();
  virtual void quit_impl();
  virtual guint level_impl();
  virtual bool iteration_impl(bool blocking);
  virtual bool events_pending_impl();

  // Signal handlers:
  virtual void on_window_hide();

  // Signal proxies:
  static RunSig         signal_run_;
  static QuitSig        signal_quit_;
  static KeySnooperSig  signal_key_snooper_;

private:
  static Main* instance_;
};

} // namespace Gtk


#endif /* _GTKMM_MAIN_H */

