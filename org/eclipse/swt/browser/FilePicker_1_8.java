/*******************************************************************************
 * Copyright (c) 2003, 2012 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/
package org.eclipse.swt.browser;

import org.eclipse.swt.internal.mozilla.*;

class FilePicker_1_8 extends FilePicker {

@Override
void createCOMInterfaces () {
	/* Create each of the interfaces that this object implements */
	supports = new XPCOMObject (new int[] {2, 0, 0}) {
		@Override
		public int /*long*/ method0 (int /*long*/[] args) {return QueryInterface (args[0], args[1]);}
		@Override
		public int /*long*/ method1 (int /*long*/[] args) {return AddRef ();}
		@Override
		public int /*long*/ method2 (int /*long*/[] args) {return Release ();}
	};

	filePicker = new XPCOMObject (new int[] {2, 0, 0, 3, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}) {
		@Override
		public int /*long*/ method0 (int /*long*/[] args) {return QueryInterface (args[0], args[1]);}
		@Override
		public int /*long*/ method1 (int /*long*/[] args) {return AddRef ();}
		@Override
		public int /*long*/ method2 (int /*long*/[] args) {return Release ();}
		@Override
		public int /*long*/ method3 (int /*long*/[] args) {return Init (args[0], args[1], (short)args[2]);}
		@Override
		public int /*long*/ method4 (int /*long*/[] args) {return AppendFilters ((int)/*64*/args[0]);}
		@Override
		public int /*long*/ method5 (int /*long*/[] args) {return AppendFilter (args[0], args[1]);}
		@Override
		public int /*long*/ method6 (int /*long*/[] args) {return GetDefaultString (args[0]);}
		@Override
		public int /*long*/ method7 (int /*long*/[] args) {return SetDefaultString (args[0]);}
		@Override
		public int /*long*/ method8 (int /*long*/[] args) {return GetDefaultExtension (args[0]);}
		@Override
		public int /*long*/ method9 (int /*long*/[] args) {return SetDefaultExtension (args[0]);}
		@Override
		public int /*long*/ method10 (int /*long*/[] args) {return GetFilterIndex (args[0]);}
		@Override
		public int /*long*/ method11 (int /*long*/[] args) {return SetFilterIndex ((int)/*64*/args[0]);}
		@Override
		public int /*long*/ method12 (int /*long*/[] args) {return GetDisplayDirectory (args[0]);}
		@Override
		public int /*long*/ method13 (int /*long*/[] args) {return SetDisplayDirectory (args[0]);}
		@Override
		public int /*long*/ method14 (int /*long*/[] args) {return GetFile (args[0]);}
		@Override
		public int /*long*/ method15 (int /*long*/[] args) {return GetFileURL (args[0]);}
		@Override
		public int /*long*/ method16 (int /*long*/[] args) {return GetFiles (args[0]);}
		@Override
		public int /*long*/ method17 (int /*long*/[] args) {return Show (args[0]);}
	};
}

/*
 * As of Mozilla 1.8 some of nsIFilePicker's string arguments changed type.  This method
 * answers a java string based on the type of string that is appropriate for the Mozilla
 * version being used.
 */
@Override
String parseAString (int /*long*/ string) {
	return new nsEmbedString (string).toString ();
}
}
