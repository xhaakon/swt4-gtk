/*******************************************************************************
 * Copyright (c) 2000, 2012 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/
package org.eclipse.swt.internal.theme;

import org.eclipse.swt.SWT;
import org.eclipse.swt.graphics.*;
import org.eclipse.swt.internal.*;
import org.eclipse.swt.internal.cairo.Cairo;
import org.eclipse.swt.internal.gtk.*;

public class TabFolderDrawData extends DrawData {
	public int tabsWidth;
	public int tabsHeight;
	public Rectangle tabsArea;
	public int selectedX;
	public int selectedWidth;
	public int spacing;
	
public TabFolderDrawData() {
	state = new int[1];
	if (SWT.getPlatform().equals("gtk")) {
		spacing = -2;
	}
}

@Override
void draw(Theme theme, GC gc, Rectangle bounds) {
	int /*long*/ notebookHandle = theme.notebookHandle;
	int /*long*/ gtkStyle = OS.gtk_widget_get_style (notebookHandle);
	int /*long*/ drawable = gc.getGCData().drawable;
	theme.transferClipping(gc, gtkStyle);
	int x = bounds.x, y = bounds.y, width = bounds.width, height = bounds.height;
	height -= tabsHeight;
	int gap_x = selectedX, gap_width = selectedWidth, gap_side = OS.GTK_POS_TOP;
	if ((style & SWT.BOTTOM) != 0) {
		gap_side = OS.GTK_POS_BOTTOM;
	} else {
		y += tabsHeight;
	}
	byte[] detail = Converter.wcsToMbcs(null, "notebook", true);
	gtk_render_frame_gap (gtkStyle, drawable, getStateType(DrawData.WIDGET_WHOLE), OS.GTK_SHADOW_OUT, null, notebookHandle, detail, x, y, width, height, gap_side, gap_x, gap_width);
	if (tabsArea != null) {
		tabsArea.x = bounds.x;
		tabsArea.y = bounds.y;
		tabsArea.width = bounds.width;
		tabsArea.height = tabsHeight;
		if ((style & SWT.BOTTOM) != 0) {
			tabsArea.y += bounds.height - tabsHeight;
		}
	}
}

@Override
int getStateType(int part) {
	return OS.GTK_STATE_NORMAL;
}

@Override
int hit(Theme theme, Point position, Rectangle bounds) {
	return bounds.contains(position) ? DrawData.WIDGET_WHOLE : DrawData.WIDGET_NOWHERE;
}

void gtk_render_frame_gap (int /*long*/ style, int /*long*/ window, int state_type, int shadow_type, GdkRectangle area, int /*long*/ widget, byte[] detail, int x , int y, int width, int height, int gap_side, int gap_x, int gap_width) {
	if (OS.GTK3) {
		int /*long*/ cairo = OS.gdk_cairo_create (window);
		int /*long*/ context = OS.gtk_widget_get_style_context (style);
		OS.gtk_render_frame_gap (context, cairo, context, y, gap_width, height, gap_side, gap_x, gap_x + gap_width);
		Cairo.cairo_destroy (cairo);
	} else {
		OS.gtk_paint_box_gap (style, window, state_type, shadow_type, area, widget, detail, x, y, width, height, gap_side, gap_x, gap_width);
	}
}

}
