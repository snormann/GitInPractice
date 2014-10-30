#include <gtk/gtk.h>
//2nd comment before main
//add this comment before main
int main( int   argc,
          char *argv[] )
{
    GtkWidget *window;
//conflict potential made on test  
//added comment 10/30 8:47am initially on local test repo
    gtk_init (&argc, &argv);
    //comment added by work repository
//added comment 10/30 8:59am first on test repo
window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_widget_show  (window);
    
    gtk_main ();
    
}
//just happened to use this file as my first in git (2nd comment)
//now my next comment goes here
