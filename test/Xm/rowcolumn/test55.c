/** test6 -- an option menu.
**/

#include <Xm/Xm.h>
#include <Xm/RowColumn.h>
#include <Xm/PushB.h>
#include <Xm/CascadeB.h>
#include <stdio.h>

int
main(int argc, char **argv)
{
    XtAppContext theApp;
    Widget toplevel, rc;
    Widget pane1;
    Widget button1, button2;
    Arg args[10];
    int n;

    toplevel = XtVaAppInitialize(&theApp, "rc-test7", NULL, 0,
				 &argc, argv, NULL, NULL);
    XtVaSetValues(toplevel,
    	XmNallowShellResize, True,
    	NULL);

    pane1 = XmCreatePulldownMenu(toplevel,
				 "pulldown",
				 NULL, 0);

    button1 = XtVaCreateManagedWidget("button1",
				      xmPushButtonWidgetClass,
				      pane1,
				      NULL);

    button2 = XtVaCreateManagedWidget("button2",
				      xmPushButtonWidgetClass,
				      pane1,
				      NULL);

    n = 0;
    XtSetArg(args[n], XmNsubMenuId, pane1); n++;
    XtSetArg(args[n], XmNlabelString, XmStringCreateLocalized("Option:")); n++;

    rc = XmCreateOptionMenu(toplevel,
			    "option",
			    args, n);


    XtManageChild(rc);

    XtRealizeWidget(toplevel);

  {
  static XtWidgetGeometry Expected[] = {
  	CWWidth | CWHeight,		0,	0,	134,	35,	0,0,0,
  	CWWidth | CWHeight | CWX | CWY,	3,	3,	46,	29,	0,0,0,
  	CWWidth | CWHeight | CWX | CWY,	52,	3,	79,	29,	0,0,0,
  	CWWidth | CWHeight,		0,	0,	176,	35,	0,0,0,
  	CWWidth | CWHeight | CWX | CWY,	3,	3,	46,	29,	0,0,0,
  	CWWidth | CWHeight | CWX | CWY,	52,	3,	121,	29,	0,0,0,
};

  PrintDetails(toplevel, Expected);
  LessTifTestWaitForIt(toplevel);
  XtVaSetValues(button2,
  	XmNlabelString, XmStringCreateSimple("button2button2"),
  	NULL);
  PrintDetails(toplevel, Expected);
  }
    LessTifTestMainLoop(toplevel);
    /*
    XtAppMainLoop(theApp);    
    */
    exit(0);
}


