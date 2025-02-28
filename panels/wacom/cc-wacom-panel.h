/*
 * Copyright © 2011 Red Hat, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Authors: Peter Hutterer <peter.hutterer@redhat.com>
 *          Bastien Nocera <hadess@hadess.net>
 */


#ifndef _CC_WACOM_PANEL_H
#define _CC_WACOM_PANEL_H

#include <shell/cc-panel.h>

G_BEGIN_DECLS

#define CC_TYPE_WACOM_PANEL cc_wacom_panel_get_type()

#define CC_WACOM_PANEL(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST ((obj), \
  CC_TYPE_WACOM_PANEL, CcWacomPanel))

#define CC_WACOM_PANEL_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST ((klass), \
  CC_TYPE_WACOM_PANEL, CcWacomPanelClass))

#define CC_IS_WACOM_PANEL(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE ((obj), \
  CC_TYPE_WACOM_PANEL))

#define CC_IS_WACOM_PANEL_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE ((klass), \
  CC_TYPE_WACOM_PANEL))

#define CC_WACOM_PANEL_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS ((obj), \
  CC_TYPE_WACOM_PANEL, CcWacomPanelClass))

typedef struct _CcWacomPanel CcWacomPanel;
typedef struct _CcWacomPanelClass CcWacomPanelClass;
typedef struct _CcWacomPanelPrivate CcWacomPanelPrivate;

struct _CcWacomPanelClass
{
  CcPanelClass parent_class;
};

GType cc_wacom_panel_get_type (void) G_GNUC_CONST;

void  cc_wacom_panel_register (GIOModule *module);

G_END_DECLS

#endif /* _CC_WACOM_PANEL_H */
