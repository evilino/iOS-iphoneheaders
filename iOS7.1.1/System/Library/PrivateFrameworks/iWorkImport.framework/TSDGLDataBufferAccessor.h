/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDGLDataBufferAccessor <NSObject>
@required
-(void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(SCD_Struct_TS479*)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setGLPoint2D:(SCD_Struct_TS479)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(SCD_Struct_TS481*)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setGLPoint3D:(SCD_Struct_TS481)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(tquat<float>*)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setGLPoint4D:(tquat<float>)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
@end

