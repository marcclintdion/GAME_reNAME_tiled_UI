glEnable(GL_DEPTH_TEST);	
        glEnable(GL_DEPTH_TEST);
        glDepthMask(1);
        glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE); 
        glDepthFunc(GL_LESS);
      
      
        glBindFramebuffer(GL_FRAMEBUFFER, m_uiFrameBufferObject);   

#ifdef WIN32
        //----------------------------------------------------------------
        glClear (GL_DEPTH_BUFFER_BIT);
        glViewport(1, 1, (GLsizei)(viewWidth), (GLsizei)(viewHeight));
        //----------------------------------------------------------------

    
        PerspectiveMatrix(ProjectionShadow, fieldOfView, (GLfloat)viewWidth * 1.2 /  (GLfloat)viewHeight,  adjustNearFar[0],  adjustNearFar[1]);
#endif
   
#ifdef   __APPLE__     
        //----------------------------------------------------------------
        glClear (GL_DEPTH_BUFFER_BIT);
        glViewport(1, 1, 2000 - 2, 1000 - 2);
        //----------------------------------------------------------------
        glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE); 
    
        PerspectiveMatrix(ProjectionShadow, fieldOfView, 2000 / 1000,  adjustNearFar[0],  adjustNearFar[1]);
#endif          
      
        
        //glPolygonOffset(2.5, 10.0);
        //glEnable(GL_POLYGON_OFFSET_FILL);
      
        //================================================================================================================================
        shaderNumber = 47;//shadow_32bit_Stride
        setupTransforms_Shadows();
        #include "_MODEL_FOLDERS_/flowerShield/flowerShield_Shadow_01.cpp"
        //================================================================================================================================
        shaderNumber = 47;//shadow_32bit_Stride
        setupTransforms_Shadows();       
        #include "_MODEL_FOLDERS_/sculptris/sculptris_Shadow_01.cpp"
        //================================================================================================================================
        shaderNumber = 47;//shadow_32bit_Stride
        setupTransforms_Shadows();       
        #include "_MODEL_FOLDERS_/sphere/sphere_Shadow_01.cpp"
        //================================================================================================================================

        shaderNumber = 47;//shadow_32bit_Stride
        setupTransforms_Shadows();       
        #include "_MODEL_FOLDERS_/knight/knight_Shadow_01.cpp"
        //================================================================================================================================

        //================================================================================================================================
        shaderNumber = 47;//shadow_32bit_Stride          
        setupTransforms_Shadows();         
        #include "_MODEL_FOLDERS_/pillerPlantPot/pillerPlantPot_Shadow_01.cpp"
        //================================================================================================================================
        shaderNumber = 47;//shadow_32bit_Stride          
        setupTransforms_Shadows();    
        #include "_MODEL_FOLDERS_/plant_v005/plant_v005_Shadow_01.cpp"                                                              
        //====================================================================================                                                                
        shaderNumber = 47;//shadow_32bit_Stride          
        setupTransforms_Shadows();    
        #include "_MODEL_FOLDERS_/chassisFan/chassisFan_Shadow_01.cpp"                                                              
        //====================================================================================   
        shaderNumber = 47;//shadow_32bit_Stride   
        setupTransforms_Shadows();   
        #include "_MODEL_FOLDERS_/chassisFan/fanBrace_Shadow_01.cpp"                                                                 
        //====================================================================================                                                                
        shaderNumber = 47;//shadow_32bit_Stride   
        setupTransforms_Shadows();    
        #include "_MODEL_FOLDERS_/chassisFan/fanBlades_Shadow_01.cpp"                                                                             
        //====================================================================================                                                                
#include "_MODEL_FOLDERS_/woodLongThinBox_0/woodLongThinBox_0_Shadow_00.cpp"                                                              
//====================================================================================                                                                
     
        
        //glEnable(GL_CULL_FACE);


//========================================================================================================================================



//############################################################################################################################################### 
//###############################################################################################################################################   
//###############################################################################################################################################   
        
	                       
        glBindFramebuffer(GL_FRAMEBUFFER, 0);
	
	
        //glDepthMask(0);
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE); 
        //glDepthFunc(GL_EQUAL);	
	
