        //------------------------------------------------------------------------------------------                                                       
        #ifdef __APPLE__                                                                                                                                   
        //---------------                                                                                                                                  
        filePathName = [[NSBundle mainBundle] pathForResource:@"fanAssembly_DOT3" ofType:@"png"];                                           
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &fanBlades_NORMALMAP);                                                                                       
                glBindTexture(GL_TEXTURE_2D, fanBlades_NORMALMAP);                                                                            
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------------                                                                                                                            
        filePathName = [[NSBundle mainBundle] pathForResource:@"fanAssembly" ofType:@"png"];                                                
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &fanBlades_TEXTUREMAP);                                                                                      
                glBindTexture(GL_TEXTURE_2D, fanBlades_TEXTUREMAP);                                                                           
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------                                                                                                                                  
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------                                                       
        #ifdef WIN32                                                                                                                                       
        loadTexture("_MODEL_FOLDERS_/chassisFan/fanAssembly_DOT3.png",          fanBlades_NORMALMAP);                
        loadTexture("_MODEL_FOLDERS_/chassisFan/fanAssembly.png",               fanBlades_TEXTUREMAP);               
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
        #include    "fanBlades.cpp"                                                                                                         
        glGenBuffers(1,              &fanBlades_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, fanBlades_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(fanBlades), fanBlades, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //------------------------------------------------------------------------------------------------------------                                     
        #include    "fanBlades_INDICES.cpp"                                                                                                 
        glGenBuffers(1,              &fanBlades_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, fanBlades_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(fanBlades_INDICES), fanBlades_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //------------------------------------------------------------------------------------------------------------                                       
        //====================================================================================   
        fanBlades_boundingBox[0] = -0.834316;
        fanBlades_boundingBox[1] = 0.92337;
        fanBlades_boundingBox[2] = -0.232052;
        fanBlades_boundingBox[3] = 0.208965;
        fanBlades_boundingBox[4] = -0.901158;
        fanBlades_boundingBox[5] = 0.913841;
        //====================================================================================   
/*        collisionBoxArray[boxCount][0] = -0.834316;
        collisionBoxArray[boxCount][1] = 0.92337;
        collisionBoxArray[boxCount][2] = -0.232052;
        collisionBoxArray[boxCount][3] = 0.208965;
        collisionBoxArray[boxCount][4] = -0.901158;
        collisionBoxArray[boxCount][5] = 0.913841;
        collisionBoxArray[boxCount][6] = boxCount;
        boxCount++;
*/                                                            
//==================================================================================== 
