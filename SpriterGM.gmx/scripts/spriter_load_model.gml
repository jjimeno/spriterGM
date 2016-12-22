///spriter_load_model(file, instance_name)
var file = argument0;
var instanceName = argument1;

spriterFile = file;
modelIndex = spriter_LoadModel(spriterFile);
spriter_check_errors();

var spritesCount = spriter_GetNumSprites(modelIndex);

for (var i = 0; i < spritesCount; i++)
{
    var spriteName = spriter_GetSprite(modelIndex, i);
    
    var spriteIndex = spriter_FindLoadedSprite(modelIndex, spriteName);
    
    if spriteIndex == -1
    {
        spriteIndex = sprite_add(spriteName,0,0,0,0,0);
    
        spriter_AddLoadedSprite(modelIndex, spriteName, spriteIndex);
        
        var srcImageWidth = sprite_get_width(spriteIndex);
        var srcImageHeight = sprite_get_height(spriteIndex);
        var texture = sprite_get_texture(spriteIndex, -1);
        var texelWidth = texture_get_texel_width(texture);
        var texelHeight = texture_get_texel_height(texture);
        
        spriter_SetLoadedSpriteTexelSize(modelIndex, spriteName, texelWidth, texelHeight);
        spriter_SetLoadedSpriteSize(modelIndex, spriteName, srcImageWidth, srcImageHeight);
    }
}

instanceIndex = spriter_CreateInstance(modelIndex, instanceName);
spriter_check_errors();
spriter_set_instance_position(x + sprite_width * 0.5, y + sprite_height * 0.5);
spriter_set_instance_scale(1.0, 1.0);

startTime = current_time;
instCount = 0;

spriter_check_errors();

spriter_ForceGarbageCollection();
