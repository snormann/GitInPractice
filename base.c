#include <gtk/gtk.h>
//2nd comment before main
//add this comment before main
int main( int   argc,
          char *argv[] )
{
    GtkWidget *window;
    
    gtk_init (&argc, &argv);
    //comment added by work repository
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_widget_show  (window);
    
    gtk_main ();
    
}
//just happened to use this file as my first in git (2nd comment)
//now my next comment goes here
