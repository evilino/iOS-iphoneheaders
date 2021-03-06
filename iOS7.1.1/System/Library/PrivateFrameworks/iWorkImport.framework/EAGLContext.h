/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString, EAGLSharegroup;

@interface EAGLContext : NSObject {

	EAGLContextPrivate* _private;
	NSString* debugLabel;

}

@property (readonly) unsigned long long API; 
@property (readonly) EAGLSharegroup * sharegroup; 
@property (nonatomic,copy) NSString * debugLabel; 
@property (assign,getter=isMultiThreaded,nonatomic) bool multiThreaded; 
+(bool)setCurrentContext:(id)arg1 ;
+(id)currentContext;
-(unsigned long long)API;
-(EAGLMacroContextRef)getMacroContextPrivate;
-(id)sharegroup;
-(bool)attachImage:(unsigned long long)arg1 toCoreSurface:(IOSurfaceRef)arg2 invertedRender:(bool)arg3 ;
-(EAGLMacroContextRef)GetMacroContextPrivate;
-(bool)isMultiThreaded;
-(void)setDebugLabel:(id)arg1 ;
-(bool)texImageIOSurface:(IOSurfaceRef)arg1 target:(unsigned long long)arg2 internalFormat:(unsigned long long)arg3 width:(unsigned)arg4 height:(unsigned)arg5 format:(unsigned long long)arg6 type:(unsigned long long)arg7 plane:(unsigned)arg8 invert:(bool)arg9 ;
-(unsigned long long)setParameter:(unsigned)arg1 to:(int*)arg2 ;
-(id)initWithAPI:(unsigned long long)arg1 properties:(id)arg2 ;
-(bool)setBlockFence:(/*^block*/ id)arg1 onQueue:(id)arg2 ;
-(id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(bool)arg2 ;
-(void)setMultiThreaded:(bool)arg1 ;
-(id)debugLabel;
-(void)swapNotification:(IOMobileFramebufferRef)arg1 forTransaction:(unsigned)arg2 onLayer:(unsigned)arg3 ;
-(void)sendNotification:(unsigned)arg1 forTransaction:(unsigned)arg2 onLayer:(unsigned)arg3 ;
-(void)dealloc;
-(id)initWithAPI:(unsigned long long)arg1 ;
-(bool)renderbufferStorage:(unsigned long long)arg1 fromDrawable:(id)arg2 ;
-(bool)presentRenderbuffer:(unsigned long long)arg1 ;
-(id)initWithAPI:(unsigned long long)arg1 sharegroup:(id)arg2 ;
-(unsigned long long)getParameter:(unsigned)arg1 to:(int*)arg2 ;
@end

