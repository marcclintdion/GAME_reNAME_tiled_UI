bool        generateRotationsOnce              =    true;    
GLint       floorTile_2m_ROTATE_FACTOR[30];  

bool        displayTileOrNot[30];

/*
GLint       floorTextureAssignment_01[]        = {2,  8, 7, 4, 1, 
                                                  9,  4, 3, 6, 5, 
                                                  8,  3, 2, 1, 4};*/
//-----------------------------------------------------------------  
GLint       floorTextureAssignment_01[]        = {0,  3, 2, 1, 2, 
                                                  3,  1, 0, 2, 3, 
                                                  2,  0, 3, 1, 0};
//-----------------------------------------------------------------  


GLfloat     floorTile_2m_POSITION[]            =  {  0.0, -2.71, 0.0, 1.0};                                                                   
GLfloat     floorTile_2m_ROTATE[]              =  {  0.0,  1.0,  0.0, 0.0};                                                                  
GLfloat     floorTile_2m_SCALE[]               =  {  1.0,  1.0,  1.0, 1.0};                                                                  
//-----------------------------------------------------------------                                                                                   
GLfloat     floorTile_2m_LIGHT_POSITION_01[]   =  {  2.0, 15.0, 30.0, 1.0};                                                                 
GLfloat     floorTile_2m_SHININESS             =    80.0;                                                                                   
GLfloat     floorTile_2m_ATTENUATION           =     1.0;                                                                                   
//-----------------------------------------------------------------                                                                                   
GLuint      floorTile_2m_VBO;                                                                                                               
GLuint      floorTile_2m_INDICES_VBO;                                                                                                       
//-----------------------------------------------------------------                                                                                   
GLuint      floorTile_2m_NORMALMAP;                                                                                                         

const int numberOfMarbleFloorTiles = 20;

GLuint      floorTile_2m_TEXTUREMAP[numberOfMarbleFloorTiles];      

                                                                                               
//====================================================================================   
GLfloat floorTile_2m_boundingBox[6]; 
