/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKLandmarkIconGenerator : NSObject
+(id)sharedGenerator;
-(id)newIconWithMask:(CGImageRef)arg1 outlineMask:(CGImageRef)arg2 style:(SCD_Struct_VK235*)arg3 scale:(double)arg4 ;
-(BOOL)canHandleStyle:(SCD_Struct_VK235*)arg1 ;
-(id)keyForName:(id)arg1 style:(SCD_Struct_VK235*)arg2 size:(long long)arg3 ;
@end
