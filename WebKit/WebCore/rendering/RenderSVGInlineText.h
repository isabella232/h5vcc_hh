/*
 * This file is part of the WebKit project.
 *
 * Copyright (C) 2006 Oliver Hunt <ojh16@student.canterbury.ac.nz>
 * Copyright (C) 2006, 2008 Apple Inc. All rights reserved.
 *           (C) 2008 Rob Buis <buis@kde.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifndef RenderSVGInlineText_h
#define RenderSVGInlineText_h

#if ENABLE(SVG)

#include "RenderText.h"

namespace WebCore {
class RenderSVGInlineText : public RenderText {
public:
    RenderSVGInlineText(Node*, PassRefPtr<StringImpl>);

private:
    virtual const char* renderName() const { return "RenderSVGInlineText"; }

    virtual void styleDidChange(StyleDifference, const RenderStyle*);

    // FIXME: We need objectBoundingBox for DRT results and filters at the moment.
    // This should be fixed to give back the objectBoundingBox of the text root.
    virtual FloatRect objectBoundingBox() const { return FloatRect(); }

    virtual bool requiresLayer() const { return false; }
    virtual bool isSVGInlineText() const { return true; }

    virtual IntRect localCaretRect(InlineBox*, int caretOffset, int* extraWidthToEndOfLine = 0);

    virtual InlineTextBox* createTextBox();
};

}

#endif // ENABLE(SVG)

#endif // !RenderSVGInlineText_h
