/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKPOIIconGenerator : NSObject
+(id)sharedGenerator;
-(CGSize)imageSizeForStyle:(SCD_Struct_VK235*)arg1 scale:(double)arg2 ;
-(id)newIconWithGlyph:(CGImageRef)arg1 style:(SCD_Struct_VK235*)arg2 scale:(double)arg3 ;
-(BOOL)canHandleStyle:(SCD_Struct_VK235*)arg1 ;
-(id)keyForName:(id)arg1 style:(SCD_Struct_VK235*)arg2 size:(long long)arg3 ;
@end

