/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeSchema.h>

@interface _CUIiPhoneOSThemeSchema : CUIThemeSchema
-(int)schemaVersion;
-(const SCD_Struct_CU23*)elementCategoryAtIndex:(unsigned)arg1 ;
-(unsigned)elementCategoryCount;
-(const SCD_Struct_CU26*)elementDefinitionAtIndex:(unsigned)arg1 ;
-(unsigned)elementDefinitionCount;
-(const SCD_Struct_CU26*)sortedElementDefinitionAtIndex:(unsigned)arg1 ;
-(const SCD_Struct_CU26*)elementDefinitionWithName:(id)arg1 ;
-(id)widgetNameForPartDefinition:(const SCD_Struct_CU25*)arg1 ;
-(id)schemaRenditionsForPartDefinition:(const SCD_Struct_CU25*)arg1 ;
-(const SCD_Struct_CU23*)categoryForElementDefinition:(const SCD_Struct_CU26*)arg1 ;
-(const SCD_Struct_CU26*)effectDefinitionAtIndex:(unsigned)arg1 ;
-(const SCD_Struct_CU26*)sortedEffectDefinitionAtIndex:(unsigned)arg1 ;
-(const SCD_Struct_CU26*)effectDefinitionWithName:(id)arg1 ;
-(unsigned)effectDefinitionCount;
-(id)schemaEffectRenditionsForPartDefinition:(const SCD_Struct_CU25*)arg1 ;
-(const SCD_Struct_CU26*)_sortedElementDefinitions;
-(const SCD_Struct_CU26*)_sortedEffectDefinitions;
@end

