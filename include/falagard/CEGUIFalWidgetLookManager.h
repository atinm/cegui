/************************************************************************
    filename:   CEGUIFalWidgetLookManager.h
    created:    Mon Jun 13 2005
    author:     Paul D Turner <paul@cegui.org.uk>
*************************************************************************/
/*************************************************************************
    Crazy Eddie's GUI System (http://www.cegui.org.uk)
    Copyright (C)2004 - 2005 Paul D Turner (paul@cegui.org.uk)
 
    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.
 
    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.
 
    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*************************************************************************/
#ifndef _CEGUIFalWidgetLookManager_h_
#define _CEGUIFalWidgetLookManager_h_

#include "CEGUISingleton.h"
#include "CEGUIString.h"
#include "CEGUIExceptions.h"
#include "falagard/CEGUIFalWidgetLookFeel.h"
#include <map>

// Start of CEGUI namespace section
namespace CEGUI
{
    /*!
    \brief
        Manager class that gives top-level access to widget data based "look and feel" specifications loaded into the system.
    */
    class CEGUIEXPORT WidgetLookManager : public Singleton<WidgetLookManager>
    {
    public:
        /*!
        \brief
            Constructor.
        */
        WidgetLookManager();

        /*!
        \brief
            Destructor
        */
        ~WidgetLookManager();

        /*!
        \brief
            Parses a file containing window look & feel specifications (in the form of XML).

        \note
            If the new file contains specifications for widget types that are already specified, it is not an error;
            the previous definitions are overwritten by the new data.  An entry will appear in the log each time any
            look & feel component is overwritten.

        \param filename
            String object containing the filename of a file containing the widget look & feel data

        \param resourceGroup
            Resource group identifier to pass to the resource provider when loading the file.

        \return
            Nothing.

        \exception	FileIOException				thrown if there was some problem accessing or parsing the file \a filename
        \exception	InvalidRequestException		thrown if an invalid filename was provided.
        */
        void parseLookNFeelSpecification(const String& filename, const String& resourceGroup = "");


        /*!
        \brief
            Return whether a WidgetLookFeel has been created with the specified name.

        \param widget
            String object holding the name of a widget look to test for.

        \return
            - true if a WindowLookFeel named \a widget is available.
            - false if so such WindowLookFeel is currently available.
        */
        bool isWidgetLookAvailable(const String& widget) const;


        /*!
        \brief
            Return a const reference to a WidgetLookFeel object which has the specified name.

        \param widget
            String object holding the name of a widget look that is to be returned.

        \return
            const reference to the requested WidgetLookFeel object.

        \exception UnknownObjectException   thrown if no WindowLookFeel is available with the requested name.
        */
        const WidgetLookFeel& getWidgetLook(const String& widget) const;


        /*!
        \brief
            Erase the WidgetLookFeel that has the specified name.

        \param widget
            String object holding the name of a widget look to be erased.  If no such WindowLookFeel exists, nothing
            happens.

        \return
            Nothing.
        */
        void eraseWidgetLook(const String& widget);


        /*!
        \brief
            Add the given WidgetLookFeel.

        \note
            If the WidgetLookFeel specification uses a name that already exists within the system, it is not an error;
            the previous definition is overwritten by the new data.  An entry will appear in the log each time any
            look & feel component is overwritten.

        \param look
            WidgetLookFeel object to be added to the system.  NB: The WidgetLookFeel is copied, no change of ownership of the
            input object occurrs.

        \return
            Nothing.
        */
        void addWidgetLook(const WidgetLookFeel& look);

    private:
        static const String FalagardSchemaName;     //!< Name of schema file used for XML validation.

        typedef std::map<String, WidgetLookFeel> WidgetLookList;
        WidgetLookList  d_widgetLooks;
    };

} // End of  CEGUI namespace section


#endif  // end of guard _CEGUIFalWidgetLookManager_h_