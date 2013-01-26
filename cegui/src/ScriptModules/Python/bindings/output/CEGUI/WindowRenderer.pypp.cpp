// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "WindowRenderer.pypp.hpp"

namespace bp = boost::python;

struct WindowRenderer_wrapper : CEGUI::WindowRenderer, bp::wrapper< CEGUI::WindowRenderer > {

    WindowRenderer_wrapper(::CEGUI::String const & name, ::CEGUI::String const & class_name="Window" )
    : CEGUI::WindowRenderer( boost::ref(name), boost::ref(class_name) )
      , bp::wrapper< CEGUI::WindowRenderer >(){
        // constructor
    
    }

    virtual void getRenderingContext( ::CEGUI::RenderingContext & ctx ) const  {
        if( bp::override func_getRenderingContext = this->get_override( "getRenderingContext" ) )
            func_getRenderingContext( boost::ref(ctx) );
        else{
            this->CEGUI::WindowRenderer::getRenderingContext( boost::ref(ctx) );
        }
    }
    
    void default_getRenderingContext( ::CEGUI::RenderingContext & ctx ) const  {
        CEGUI::WindowRenderer::getRenderingContext( boost::ref(ctx) );
    }

    virtual ::CEGUI::Rectf getUnclippedInnerRect(  ) const  {
        if( bp::override func_getUnclippedInnerRect = this->get_override( "getUnclippedInnerRect" ) )
            return func_getUnclippedInnerRect(  );
        else{
            return this->CEGUI::WindowRenderer::getUnclippedInnerRect(  );
        }
    }
    
    ::CEGUI::Rectf default_getUnclippedInnerRect(  ) const  {
        return CEGUI::WindowRenderer::getUnclippedInnerRect( );
    }

    virtual bool handleFontRenderSizeChange( ::CEGUI::Font const * const font ) {
        if( bp::override func_handleFontRenderSizeChange = this->get_override( "handleFontRenderSizeChange" ) )
            return func_handleFontRenderSizeChange( font );
        else{
            return this->CEGUI::WindowRenderer::handleFontRenderSizeChange( font );
        }
    }
    
    bool default_handleFontRenderSizeChange( ::CEGUI::Font const * const font ) {
        return CEGUI::WindowRenderer::handleFontRenderSizeChange( font );
    }

    virtual void onAttach(  ){
        if( bp::override func_onAttach = this->get_override( "onAttach" ) )
            func_onAttach(  );
        else{
            this->CEGUI::WindowRenderer::onAttach(  );
        }
    }
    
    virtual void default_onAttach(  ){
        CEGUI::WindowRenderer::onAttach( );
    }

    virtual void onDetach(  ){
        if( bp::override func_onDetach = this->get_override( "onDetach" ) )
            func_onDetach(  );
        else{
            this->CEGUI::WindowRenderer::onDetach(  );
        }
    }
    
    virtual void default_onDetach(  ){
        CEGUI::WindowRenderer::onDetach( );
    }

    virtual void onLookNFeelAssigned(  ){
        if( bp::override func_onLookNFeelAssigned = this->get_override( "onLookNFeelAssigned" ) )
            func_onLookNFeelAssigned(  );
        else{
            this->CEGUI::WindowRenderer::onLookNFeelAssigned(  );
        }
    }
    
    virtual void default_onLookNFeelAssigned(  ){
        CEGUI::WindowRenderer::onLookNFeelAssigned( );
    }

    virtual void onLookNFeelUnassigned(  ){
        if( bp::override func_onLookNFeelUnassigned = this->get_override( "onLookNFeelUnassigned" ) )
            func_onLookNFeelUnassigned(  );
        else{
            this->CEGUI::WindowRenderer::onLookNFeelUnassigned(  );
        }
    }
    
    virtual void default_onLookNFeelUnassigned(  ){
        CEGUI::WindowRenderer::onLookNFeelUnassigned( );
    }

    virtual void performChildWindowLayout(  ) {
        if( bp::override func_performChildWindowLayout = this->get_override( "performChildWindowLayout" ) )
            func_performChildWindowLayout(  );
        else{
            this->CEGUI::WindowRenderer::performChildWindowLayout(  );
        }
    }
    
    void default_performChildWindowLayout(  ) {
        CEGUI::WindowRenderer::performChildWindowLayout( );
    }

    void registerProperty( ::CEGUI::Property * property, bool const ban_from_xml ){
        CEGUI::WindowRenderer::registerProperty( boost::python::ptr(property), ban_from_xml );
    }

    void registerProperty( ::CEGUI::Property * property ){
        CEGUI::WindowRenderer::registerProperty( boost::python::ptr(property) );
    }

    virtual void render(  ){
        bp::override func_render = this->get_override( "render" );
        func_render(  );
    }

    virtual void update( float arg0 ) {
        if( bp::override func_update = this->get_override( "update" ) )
            func_update( arg0 );
        else{
            this->CEGUI::WindowRenderer::update( arg0 );
        }
    }
    
    void default_update( float arg0 ) {
        CEGUI::WindowRenderer::update( arg0 );
    }

};

void register_WindowRenderer_class(){

    { //::CEGUI::WindowRenderer
        typedef bp::class_< WindowRenderer_wrapper, boost::noncopyable > WindowRenderer_exposer_t;
        WindowRenderer_exposer_t WindowRenderer_exposer = WindowRenderer_exposer_t( "WindowRenderer", bp::init< CEGUI::String const &, bp::optional< CEGUI::String const & > >(( bp::arg("name"), bp::arg("class_name")="Window" ), "*************************************************************************\n\
                Constructor  Destructor\n\
            **************************************************************************\n\
            *!\n\
            \n\
                Constructor\n\
        \n\
            @param name\n\
                Factory type name\n\
        \n\
            @param class_name\n\
                The name of a widget class that is to be the minimum requirement for\n\
                this window renderer.\n\
            *\n") );
        bp::scope WindowRenderer_scope( WindowRenderer_exposer );
        { //::CEGUI::WindowRenderer::getClass
        
            typedef ::CEGUI::String const & ( ::CEGUI::WindowRenderer::*getClass_function_type )(  ) const;
            
            WindowRenderer_exposer.def( 
                "getClass"
                , getClass_function_type( &::CEGUI::WindowRenderer::getClass )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
            \n\
                Get the minimum Window class this renderer requires\n\
            *\n" );
        
        }
        { //::CEGUI::WindowRenderer::getLookNFeel
        
            typedef ::CEGUI::WidgetLookFeel const & ( ::CEGUI::WindowRenderer::*getLookNFeel_function_type )(  ) const;
            
            WindowRenderer_exposer.def( 
                "getLookNFeel"
                , getLookNFeel_function_type( &::CEGUI::WindowRenderer::getLookNFeel )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
            \n\
                Get the Look'N'Feel assigned to our window\n\
            *\n" );
        
        }
        { //::CEGUI::WindowRenderer::getName
        
            typedef ::CEGUI::String const & ( ::CEGUI::WindowRenderer::*getName_function_type )(  ) const;
            
            WindowRenderer_exposer.def( 
                "getName"
                , getName_function_type( &::CEGUI::WindowRenderer::getName )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
            \n\
                Returns the factory type name of this window renderer.\n\
            *\n" );
        
        }
        { //::CEGUI::WindowRenderer::getRenderingContext
        
            typedef void ( ::CEGUI::WindowRenderer::*getRenderingContext_function_type )( ::CEGUI::RenderingContext & ) const;
            typedef void ( WindowRenderer_wrapper::*default_getRenderingContext_function_type )( ::CEGUI::RenderingContext & ) const;
            
            WindowRenderer_exposer.def( 
                "getRenderingContext"
                , getRenderingContext_function_type(&::CEGUI::WindowRenderer::getRenderingContext)
                , default_getRenderingContext_function_type(&WindowRenderer_wrapper::default_getRenderingContext)
                , ( bp::arg("ctx") ) );
        
        }
        { //::CEGUI::WindowRenderer::getUnclippedInnerRect
        
            typedef ::CEGUI::Rectf ( ::CEGUI::WindowRenderer::*getUnclippedInnerRect_function_type )(  ) const;
            typedef ::CEGUI::Rectf ( WindowRenderer_wrapper::*default_getUnclippedInnerRect_function_type )(  ) const;
            
            WindowRenderer_exposer.def( 
                "getUnclippedInnerRect"
                , getUnclippedInnerRect_function_type(&::CEGUI::WindowRenderer::getUnclippedInnerRect)
                , default_getUnclippedInnerRect_function_type(&WindowRenderer_wrapper::default_getUnclippedInnerRect) );
        
        }
        { //::CEGUI::WindowRenderer::getWindow
        
            typedef ::CEGUI::Window * ( ::CEGUI::WindowRenderer::*getWindow_function_type )(  ) const;
            
            WindowRenderer_exposer.def( 
                "getWindow"
                , getWindow_function_type( &::CEGUI::WindowRenderer::getWindow )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
            \n\
                Get the window this windowrenderer is attached to.\n\
            *\n" );
        
        }
        { //::CEGUI::WindowRenderer::handleFontRenderSizeChange
        
            typedef bool ( ::CEGUI::WindowRenderer::*handleFontRenderSizeChange_function_type )( ::CEGUI::Font const * const ) ;
            typedef bool ( WindowRenderer_wrapper::*default_handleFontRenderSizeChange_function_type )( ::CEGUI::Font const * const ) ;
            
            WindowRenderer_exposer.def( 
                "handleFontRenderSizeChange"
                , handleFontRenderSizeChange_function_type(&::CEGUI::WindowRenderer::handleFontRenderSizeChange)
                , default_handleFontRenderSizeChange_function_type(&WindowRenderer_wrapper::default_handleFontRenderSizeChange)
                , ( bp::arg("font") ) );
        
        }
        { //::CEGUI::WindowRenderer::onAttach
        
            typedef void ( WindowRenderer_wrapper::*onAttach_function_type )(  ) ;
            
            WindowRenderer_exposer.def( 
                "onAttach"
                , onAttach_function_type( &WindowRenderer_wrapper::default_onAttach )
                , "*!\n\
            \n\
                Handler called when this windowrenderer is attached to a window\n\
            *\n" );
        
        }
        { //::CEGUI::WindowRenderer::onDetach
        
            typedef void ( WindowRenderer_wrapper::*onDetach_function_type )(  ) ;
            
            WindowRenderer_exposer.def( 
                "onDetach"
                , onDetach_function_type( &WindowRenderer_wrapper::default_onDetach )
                , "*!\n\
            \n\
                Handler called when this windowrenderer is detached from its window\n\
            *\n" );
        
        }
        { //::CEGUI::WindowRenderer::onLookNFeelAssigned
        
            typedef void ( WindowRenderer_wrapper::*onLookNFeelAssigned_function_type )(  ) ;
            
            WindowRenderer_exposer.def( 
                "onLookNFeelAssigned"
                , onLookNFeelAssigned_function_type( &WindowRenderer_wrapper::default_onLookNFeelAssigned )
                , "*!\n\
            \n\
                Handler called when a Look'N'Feel is assigned to our window.\n\
            *\n" );
        
        }
        { //::CEGUI::WindowRenderer::onLookNFeelUnassigned
        
            typedef void ( WindowRenderer_wrapper::*onLookNFeelUnassigned_function_type )(  ) ;
            
            WindowRenderer_exposer.def( 
                "onLookNFeelUnassigned"
                , onLookNFeelUnassigned_function_type( &WindowRenderer_wrapper::default_onLookNFeelUnassigned )
                , "*!\n\
            \n\
                Handler called when a Look'N'Feel is removedunassigned from our window.\n\
            *\n" );
        
        }
        { //::CEGUI::WindowRenderer::performChildWindowLayout
        
            typedef void ( ::CEGUI::WindowRenderer::*performChildWindowLayout_function_type )(  ) ;
            typedef void ( WindowRenderer_wrapper::*default_performChildWindowLayout_function_type )(  ) ;
            
            WindowRenderer_exposer.def( 
                "performChildWindowLayout"
                , performChildWindowLayout_function_type(&::CEGUI::WindowRenderer::performChildWindowLayout)
                , default_performChildWindowLayout_function_type(&WindowRenderer_wrapper::default_performChildWindowLayout) );
        
        }
        { //::CEGUI::WindowRenderer::registerProperty
        
            typedef void ( WindowRenderer_wrapper::*registerProperty_function_type )( ::CEGUI::Property *,bool const ) ;
            
            WindowRenderer_exposer.def( 
                "registerProperty"
                , registerProperty_function_type( &WindowRenderer_wrapper::registerProperty )
                , ( bp::arg("property"), bp::arg("ban_from_xml") )
                , "*************************************************************************\n\
                    Implementation methods\n\
                **************************************************************************\n\
                *!\n\
                \n\
                    Register a property class that will be properly managed by this window\n\
                    renderer.\n\
            \n\
                @param property\n\
                    Pointer to a static Property object that will be added to the target\n\
                    window.\n\
            \n\
                @param ban_from_xml\n\
                    - true if this property should be added to the 'ban' list so that it is\n\
                      not written in XML output.\n\
                    - false if this property is not banned and should appear in XML output.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowRenderer::registerProperty
        
            typedef void ( WindowRenderer_wrapper::*registerProperty_function_type )( ::CEGUI::Property * ) ;
            
            WindowRenderer_exposer.def( 
                "registerProperty"
                , registerProperty_function_type( &WindowRenderer_wrapper::registerProperty )
                , ( bp::arg("property") )
                , "*!\n\
                \n\
                    Register a property class that will be properly managed by this window\n\
                    renderer.\n\
            \n\
                @param property\n\
                    Pointer to a static Property object that will be added to the target\n\
                    window.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowRenderer::render
        
            typedef void ( ::CEGUI::WindowRenderer::*render_function_type )(  ) ;
            
            WindowRenderer_exposer.def( 
                "render"
                , bp::pure_virtual( render_function_type(&::CEGUI::WindowRenderer::render) )
                , "*************************************************************************\n\
                    Public interface\n\
                **************************************************************************\n\
                *!\n\
                \n\
                    Populate render cache.\n\
            \n\
                    This method must be implemented by all window renderers and should\n\
                    perform the rendering operations needed for this widget.\n\
                    Normally using the Falagard API...\n\
                *\n" );
        
        }
        { //::CEGUI::WindowRenderer::update
        
            typedef void ( ::CEGUI::WindowRenderer::*update_function_type )( float ) ;
            typedef void ( WindowRenderer_wrapper::*default_update_function_type )( float ) ;
            
            WindowRenderer_exposer.def( 
                "update"
                , update_function_type(&::CEGUI::WindowRenderer::update)
                , default_update_function_type(&WindowRenderer_wrapper::default_update)
                , ( bp::arg("arg0") ) );
        
        }
    }

}