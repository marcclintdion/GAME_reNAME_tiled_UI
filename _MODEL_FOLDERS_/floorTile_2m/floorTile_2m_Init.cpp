        //------------------------------------------------------------------------------------------                                                       
        #ifdef __APPLE__                                                                                                                                   
        //---------------                                                                                                                                  
        filePathName = [[NSBundle mainBundle] pathForResource:@"floorTile_2m_DOT3" ofType:@"png"];                                           
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &floorTile_2m_NORMALMAP);                                                                                       
                glBindTexture(GL_TEXTURE_2D, floorTile_2m_NORMALMAP);                                                                            
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------------                                                                                                                            
        filePathName = [[NSBundle mainBundle] pathForResource:@"marble_100" ofType:@"png"];                                                
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &floorTile_2m_TEXTUREMAP[0]);                                                                                      
                glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[0]);                                                                           
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------  
                                                                                                                                    
filePathName = [[NSBundle mainBundle] pathForResource:@"marble_101" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[1]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[1]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------    
filePathName = [[NSBundle mainBundle] pathForResource:@"marble_102" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[2]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[2]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------       

filePathName = [[NSBundle mainBundle] pathForResource:@"marble_103" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[3]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[3]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------    
/*
//---------------    
filePathName = [[NSBundle mainBundle] pathForResource:@"marble_35" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[4]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[4]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------       

filePathName = [[NSBundle mainBundle] pathForResource:@"marble_36" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[5]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[5]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------    

//---------------    
filePathName = [[NSBundle mainBundle] pathForResource:@"marble_37" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[6]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[6]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------       

filePathName = [[NSBundle mainBundle] pathForResource:@"marble_38" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[7]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[7]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------    
//---------------    
filePathName = [[NSBundle mainBundle] pathForResource:@"marble_39" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[8]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[8]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------       

filePathName = [[NSBundle mainBundle] pathForResource:@"marble_40" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[9]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[9]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------    

*/


        //==================================================================================================
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------                                                       
        #ifdef WIN32                                                                                                                                       
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/floorTile_2m_DOT3.png",          floorTile_2m_NORMALMAP);                
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_100.png",               floorTile_2m_TEXTUREMAP[0]);               
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_101.png",               floorTile_2m_TEXTUREMAP[1]);          
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_102.png",               floorTile_2m_TEXTUREMAP[2]);        
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_103.png",               floorTile_2m_TEXTUREMAP[3]);          
/*        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_35.png",               floorTile_2m_TEXTUREMAP[4]);          
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_36.png",               floorTile_2m_TEXTUREMAP[5]);          
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_37.png",               floorTile_2m_TEXTUREMAP[6]);          
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_38.png",               floorTile_2m_TEXTUREMAP[7]);          
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_39.png",               floorTile_2m_TEXTUREMAP[8]);          
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_40.png",               floorTile_2m_TEXTUREMAP[9]);               
*/        //loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_41.png",               floorTile_2m_TEXTUREMAP[10]);          
        //loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_42.png",               floorTile_2m_TEXTUREMAP[11]);        
        //loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_70.png",               floorTile_2m_TEXTUREMAP[12]);          
        //loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_71.png",               floorTile_2m_TEXTUREMAP[13]);          
        //loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_72.png",               floorTile_2m_TEXTUREMAP[14]);          
        //loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_71.png",               floorTile_2m_TEXTUREMAP[15]);          
        //loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_71.png",               floorTile_2m_TEXTUREMAP[16]);          
       //loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_71.png",               floorTile_2m_TEXTUREMAP[17]);         
       
       
       #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
        #include    "floorTile_2m.cpp"                                                                                                         
        glGenBuffers(1,              &floorTile_2m_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, floorTile_2m_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(floorTile_2m), floorTile_2m, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //------------------------------------------------------------------------------------------------------------                                     
        #include    "floorTile_2m_INDICES.cpp"                                                                                                 
        glGenBuffers(1,              &floorTile_2m_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, floorTile_2m_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(floorTile_2m_INDICES), floorTile_2m_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //------------------------------------------------------------------------------------------------------------                                       
        //====================================================================================   
        floorTile_2m_boundingBox[0] = -1.04335;
        floorTile_2m_boundingBox[1] = 1.04335;
        floorTile_2m_boundingBox[2] = -0.267863;
        floorTile_2m_boundingBox[3] = 0.270671;
        floorTile_2m_boundingBox[4] = -1;
        floorTile_2m_boundingBox[5] = 1;
        //====================================================================================   
        collisionBoxArray[boxCount][0] = -1.04335;
        collisionBoxArray[boxCount][1] = 1.04335;
        collisionBoxArray[boxCount][2] = -0.267863;
        collisionBoxArray[boxCount][3] = 0.270671;
        collisionBoxArray[boxCount][4] = -1;
        collisionBoxArray[boxCount][5] = 1;
        collisionBoxArray[boxCount][6] = boxCount;

//===========================================
for(int i = 0; i < 30; i++)
{
        displayTileOrNot[i] = 1.0;
}
//===========================================

/*   
         ofstream outSettings("z_sizeOfArray.cpp");
   
         outSettings << "var        number of array elements in floorTile_2m_INDICES        =  "    
                                  << COUNT_OF( floorTile_2m_INDICES)                             << ";\n\n"; 

         outSettings << "var        number of array elements in floorTile_2m        =  "    
                                  << COUNT_OF( floorTile_2m)/8                           << ";\n\n"; 
*/                               
                                  
                                  
