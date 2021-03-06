// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "UnifiedDim.pypp.hpp"

namespace bp = boost::python;

struct UnifiedDim_wrapper : CEGUI::UnifiedDim, bp::wrapper< CEGUI::UnifiedDim > {

    UnifiedDim_wrapper(CEGUI::UnifiedDim const & arg )
    : CEGUI::UnifiedDim( arg )
      , bp::wrapper< CEGUI::UnifiedDim >(){
        // copy constructor
        
    }

    UnifiedDim_wrapper( )
    : CEGUI::UnifiedDim( )
      , bp::wrapper< CEGUI::UnifiedDim >(){
        // null constructor
    
    }

    UnifiedDim_wrapper(::CEGUI::UDim const & value, ::CEGUI::DimensionType dim )
    : CEGUI::UnifiedDim( boost::ref(value), dim )
      , bp::wrapper< CEGUI::UnifiedDim >(){
        // constructor
    
    }

    virtual ::CEGUI::BaseDim * clone(  ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone(  );
        else{
            return this->CEGUI::UnifiedDim::clone(  );
        }
    }
    
    ::CEGUI::BaseDim * default_clone(  ) const  {
        return CEGUI::UnifiedDim::clone( );
    }

    virtual float getValue( ::CEGUI::Window const & wnd ) const  {
        if( bp::override func_getValue = this->get_override( "getValue" ) )
            return func_getValue( boost::ref(wnd) );
        else{
            return this->CEGUI::UnifiedDim::getValue( boost::ref(wnd) );
        }
    }
    
    float default_getValue( ::CEGUI::Window const & wnd ) const  {
        return CEGUI::UnifiedDim::getValue( boost::ref(wnd) );
    }

    virtual float getValue( ::CEGUI::Window const & wnd, ::CEGUI::Rectf const & container ) const  {
        if( bp::override func_getValue = this->get_override( "getValue" ) )
            return func_getValue( boost::ref(wnd), boost::ref(container) );
        else{
            return this->CEGUI::UnifiedDim::getValue( boost::ref(wnd), boost::ref(container) );
        }
    }
    
    float default_getValue( ::CEGUI::Window const & wnd, ::CEGUI::Rectf const & container ) const  {
        return CEGUI::UnifiedDim::getValue( boost::ref(wnd), boost::ref(container) );
    }

    virtual void writeXMLElementAttributes_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeXMLElementAttributes_impl = this->get_override( "writeXMLElementAttributes_impl" ) )
            func_writeXMLElementAttributes_impl( boost::ref(xml_stream) );
        else{
            this->CEGUI::UnifiedDim::writeXMLElementAttributes_impl( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeXMLElementAttributes_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::UnifiedDim::writeXMLElementAttributes_impl( boost::ref(xml_stream) );
    }

    virtual void writeXMLElementName_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeXMLElementName_impl = this->get_override( "writeXMLElementName_impl" ) )
            func_writeXMLElementName_impl( boost::ref(xml_stream) );
        else{
            this->CEGUI::UnifiedDim::writeXMLElementName_impl( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeXMLElementName_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::UnifiedDim::writeXMLElementName_impl( boost::ref(xml_stream) );
    }

    virtual bool handleFontRenderSizeChange( ::CEGUI::Window & window, ::CEGUI::Font const * font ) const  {
        if( bp::override func_handleFontRenderSizeChange = this->get_override( "handleFontRenderSizeChange" ) )
            return func_handleFontRenderSizeChange( boost::ref(window), boost::python::ptr(font) );
        else{
            return this->CEGUI::BaseDim::handleFontRenderSizeChange( boost::ref(window), boost::python::ptr(font) );
        }
    }
    
    bool default_handleFontRenderSizeChange( ::CEGUI::Window & window, ::CEGUI::Font const * font ) const  {
        return CEGUI::BaseDim::handleFontRenderSizeChange( boost::ref(window), boost::python::ptr(font) );
    }

    virtual void writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::ref(xml_stream) );
        else{
            this->CEGUI::BaseDim::writeXMLToStream( boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::BaseDim::writeXMLToStream( boost::ref(xml_stream) );
    }

};

void register_UnifiedDim_class(){

    { //::CEGUI::UnifiedDim
        typedef bp::class_< UnifiedDim_wrapper, bp::bases< CEGUI::BaseDim > > UnifiedDim_exposer_t;
        UnifiedDim_exposer_t UnifiedDim_exposer = UnifiedDim_exposer_t( "UnifiedDim", "*!\n\
        \n\
            Dimension type that represents an Unified dimension.\n\
            Implements BaseDim interface.\n\
        *\n", bp::init< >() );
        bp::scope UnifiedDim_scope( UnifiedDim_exposer );
        UnifiedDim_exposer.def( bp::init< CEGUI::UDim const &, CEGUI::DimensionType >(( bp::arg("value"), bp::arg("dim") ), "*!\n\
            \n\
                Constructor.\n\
        \n\
            @param value\n\
                UDim holding the value to assign to this UnifiedDim.\n\
        \n\
            @param dim\n\
                DimensionType value indicating what this UnifiedDim is to represent.  This is required\n\
                because we need to know what part of the base Window that the UDim scale component is\n\
                to operate against.\n\
            *\n") );
        { //::CEGUI::UnifiedDim::clone
        
            typedef ::CEGUI::BaseDim * ( ::CEGUI::UnifiedDim::*clone_function_type )(  ) const;
            typedef ::CEGUI::BaseDim * ( UnifiedDim_wrapper::*default_clone_function_type )(  ) const;
            
            UnifiedDim_exposer.def( 
                "clone"
                , clone_function_type(&::CEGUI::UnifiedDim::clone)
                , default_clone_function_type(&UnifiedDim_wrapper::default_clone)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::UnifiedDim::getBaseValue
        
            typedef ::CEGUI::UDim const & ( ::CEGUI::UnifiedDim::*getBaseValue_function_type )(  ) const;
            
            UnifiedDim_exposer.def( 
                "getBaseValue"
                , getBaseValue_function_type( &::CEGUI::UnifiedDim::getBaseValue )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "! Get the current value of the UnifiedDim.\n" );
        
        }
        { //::CEGUI::UnifiedDim::getSourceDimension
        
            typedef ::CEGUI::DimensionType ( ::CEGUI::UnifiedDim::*getSourceDimension_function_type )(  ) const;
            
            UnifiedDim_exposer.def( 
                "getSourceDimension"
                , getSourceDimension_function_type( &::CEGUI::UnifiedDim::getSourceDimension )
                , "*!\n\
                \n\
                    Gets the source dimension type for this WidgetDim.\n\
            \n\
                @return\n\
                    DimensionType value indicating which dimension should be used as the\n\
                    scale reference  base value when calculating the pixel value of this\n\
                    dimension.\n\
                *\n" );
        
        }
        { //::CEGUI::UnifiedDim::getValue
        
            typedef float ( ::CEGUI::UnifiedDim::*getValue_function_type )( ::CEGUI::Window const & ) const;
            typedef float ( UnifiedDim_wrapper::*default_getValue_function_type )( ::CEGUI::Window const & ) const;
            
            UnifiedDim_exposer.def( 
                "getValue"
                , getValue_function_type(&::CEGUI::UnifiedDim::getValue)
                , default_getValue_function_type(&UnifiedDim_wrapper::default_getValue)
                , ( bp::arg("wnd") ) );
        
        }
        { //::CEGUI::UnifiedDim::getValue
        
            typedef float ( ::CEGUI::UnifiedDim::*getValue_function_type )( ::CEGUI::Window const &,::CEGUI::Rectf const & ) const;
            typedef float ( UnifiedDim_wrapper::*default_getValue_function_type )( ::CEGUI::Window const &,::CEGUI::Rectf const & ) const;
            
            UnifiedDim_exposer.def( 
                "getValue"
                , getValue_function_type(&::CEGUI::UnifiedDim::getValue)
                , default_getValue_function_type(&UnifiedDim_wrapper::default_getValue)
                , ( bp::arg("wnd"), bp::arg("container") ) );
        
        }
        { //::CEGUI::UnifiedDim::setBaseValue
        
            typedef void ( ::CEGUI::UnifiedDim::*setBaseValue_function_type )( ::CEGUI::UDim const & ) ;
            
            UnifiedDim_exposer.def( 
                "setBaseValue"
                , setBaseValue_function_type( &::CEGUI::UnifiedDim::setBaseValue )
                , ( bp::arg("val") )
                , "! Set the current value of the UnifiedDim.\n" );
        
        }
        { //::CEGUI::UnifiedDim::setSourceDimension
        
            typedef void ( ::CEGUI::UnifiedDim::*setSourceDimension_function_type )( ::CEGUI::DimensionType ) ;
            
            UnifiedDim_exposer.def( 
                "setSourceDimension"
                , setSourceDimension_function_type( &::CEGUI::UnifiedDim::setSourceDimension )
                , ( bp::arg("dim") )
                , "*!\n\
                \n\
                    Sets the source dimension type for this WidgetDim.\n\
            \n\
                @param dim\n\
                    DimensionType value indicating which dimension should be used as the\n\
                    scale reference  base value when calculating the pixel value of this\n\
                    dimension.\n\
                *\n" );
        
        }
        { //::CEGUI::UnifiedDim::writeXMLElementAttributes_impl
        
            typedef void ( UnifiedDim_wrapper::*writeXMLElementAttributes_impl_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            UnifiedDim_exposer.def( 
                "writeXMLElementAttributes_impl"
                , writeXMLElementAttributes_impl_function_type( &UnifiedDim_wrapper::default_writeXMLElementAttributes_impl )
                , ( bp::arg("xml_stream") )
                , "Implementation of the base class interface\n" );
        
        }
        { //::CEGUI::UnifiedDim::writeXMLElementName_impl
        
            typedef void ( UnifiedDim_wrapper::*writeXMLElementName_impl_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            UnifiedDim_exposer.def( 
                "writeXMLElementName_impl"
                , writeXMLElementName_impl_function_type( &UnifiedDim_wrapper::default_writeXMLElementName_impl )
                , ( bp::arg("xml_stream") )
                , "Implementation of the base class interface\n" );
        
        }
        { //::CEGUI::BaseDim::handleFontRenderSizeChange
        
            typedef bool ( ::CEGUI::BaseDim::*handleFontRenderSizeChange_function_type )( ::CEGUI::Window &,::CEGUI::Font const * ) const;
            typedef bool ( UnifiedDim_wrapper::*default_handleFontRenderSizeChange_function_type )( ::CEGUI::Window &,::CEGUI::Font const * ) const;
            
            UnifiedDim_exposer.def( 
                "handleFontRenderSizeChange"
                , handleFontRenderSizeChange_function_type(&::CEGUI::BaseDim::handleFontRenderSizeChange)
                , default_handleFontRenderSizeChange_function_type(&UnifiedDim_wrapper::default_handleFontRenderSizeChange)
                , ( bp::arg("window"), bp::arg("font") ) );
        
        }
        { //::CEGUI::BaseDim::writeXMLToStream
        
            typedef void ( ::CEGUI::BaseDim::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            typedef void ( UnifiedDim_wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            UnifiedDim_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::BaseDim::writeXMLToStream)
                , default_writeXMLToStream_function_type(&UnifiedDim_wrapper::default_writeXMLToStream)
                , ( bp::arg("xml_stream") ) );
        
        }
    }

}
