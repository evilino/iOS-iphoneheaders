/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@protocol TSCH3DGLResolveFramebuffer;
@class TSCH3DGLFBO;

@interface TSCH3DGLFramebufferMultisample : NSObject <TSCHUnretainedParent> {

	<TSCH3DGLResolveFramebuffer>* mParent;
	FramebufferAttributes mAttributes;
	TSCH3DGLFBO* mMultisampleFBO;
	bool mResolved;
	bool mMultisampleDisabled;

}

@property (nonatomic,readonly) bool usingMultisample; 
@property (nonatomic,readonly) bool resolved; 
@property (nonatomic,readonly) FramebufferAttributes attributes; 
+(id)multisampleWithParent:(id)arg1 framebufferAttributes:(const FramebufferAttributes*)arg2 ;
-(void)clearParent;
-(bool)activateInsideSession:(id)arg1 ;
-(void)disableSamplingInSession:(id)arg1 ;
-(bool)validForSession:(id)arg1 ;
-(bool)bindInSession:(id)arg1 ;
-(id)initWithParent:(id)arg1 framebufferAttributes:(const FramebufferAttributes*)arg2 ;
-(bool)p_supportsMultisample;
-(id)multisampleFBOResource;
-(FramebufferAttributes)p_clampedAttributes;
-(SessionLoadResourceResult)p_loadFramebufferInSession:(id)arg1 ;
-(bool)usingMultisample;
-(bool)p_createMultisampleFBOOnDemandInsideSession:(id)arg1 returningResolveFramebufferActivated:(bool*)arg2 ;
-(void)resolveInSession:(id)arg1 ;
-(bool)resolved;
-(void)dealloc;
-(id).cxx_construct;
-(FramebufferAttributes)attributes;
@end

