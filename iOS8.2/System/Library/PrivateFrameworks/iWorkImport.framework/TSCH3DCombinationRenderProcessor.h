/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class NSIndexSet, TSCH3DShaderEffects, TSCH3DShaderEffectsStates;

@interface TSCH3DCombinationRenderProcessor : TSCH3DRetargetRenderProcessor {

	NSIndexSet* mEnabled;
	StateStack<glm::detail::tmat4x4<float>, 8> mTransformStack;
	tmat4x4<float> mProjection;
	char mTransformChanged;
	char mProjectionChanged;
	StateStack<TSCH3D::ObjectState, 6>* mObjectStateStack;
	TSCH3DShaderEffects* mEffects;
	TSCH3DShaderEffectsStates* mShaderEffectsStates;

}

@property (nonatomic,readonly) char transformChanged; 
@property (nonatomic,readonly) char projectionChanged; 
+(id)processorWithOriginal:(id)arg1 enableTypes:(id)arg2 ;
-(StateStack<TSCH3D::ObjectState, 6>*)objectStateStack;
-(void)resetBuffers;
-(char)transformChanged;
-(id)effectsStates;
-(void)popMatrix;
-(void)pushMatrix;
-(void)projection:(tmat4x4<float>*)arg1 ;
-(id)initWithOriginal:(id)arg1 ;
-(void)translate:(tvec3<float>*)arg1 ;
-(void)copyProjectionInto:(tmat4x4<float>*)arg1 ;
-(void)copyTransformInto:(tmat4x4<float>*)arg1 ;
-(char)projectionChanged;
-(id)initWithOriginal:(id)arg1 enableTypes:(id)arg2 ;
-(char)objectStateEnabled;
-(char)shaderEnabled;
-(void)resetTransformChangeFlags;
-(char)matrixEnabled;
-(tmat4x4<float>*)projectionTransform;
-(void)dealloc;
-(void)replace:(tmat4x4<float>*)arg1 ;
-(tmat4x4<float>*)currentTransform;
-(id)effects;
-(void)popState;
-(void)pushState;
-(void)scale:(tvec3<float>*)arg1 ;
-(void)multiply:(tmat4x4<float>*)arg1 ;
@end
