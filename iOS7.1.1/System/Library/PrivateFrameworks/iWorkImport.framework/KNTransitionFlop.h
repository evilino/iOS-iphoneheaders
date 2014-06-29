/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNFrameAnimator.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>

@class TSDGLShader, TSDGLDataBuffer, NSArray, TSDGLMotionBlurEffect;

@interface KNTransitionFlop : KNAnimationEffect <KNFrameAnimator, KNAnimationPluginArchiving> {

	TSDGLShader* _flopShader;
	TSDGLShader* _flopVelocityShader;
	TSDGLDataBuffer* _colorDataBuffer;
	TSDGLDataBuffer* _velocityDataBuffer;
	NSArray* _colorBufferAttributes;
	NSArray* _velocityBufferAttributes;
	NSArray* _shadowBufferAttributes;
	unsigned long long _colorPositionAttributeIndex;
	unsigned long long _colorTexCoordAttributeIndex;
	unsigned long long _colorNormalAttributeIndex;
	unsigned long long _velocityPositionAttributeIndex;
	unsigned long long _velocityPrevPositionAttributeIndex;
	unsigned long long _shadowPositionAttributeIndex;
	unsigned long long _shadowAlphaAttributeIndex;
	TSDGLShader* _shadowShader;
	TSDGLDataBuffer* _shadowDataBuffer;
	TSDGLDataBuffer* _quadDataBuffer;
	TSDGLDataBuffer* _nextQuadDataBuffer;
	TSDGLShader* _quadShader;
	TSDGLMotionBlurEffect* _motionBlurEffect;
	long long _numPoints;
	bool _shouldDrawMotionBlur;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(bool)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(bool)arg5 version:(unsigned long long)arg6 ;
+(id)defaultAttributes;
+(id)animationName;
-(void)p_teardown;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(void)createArrays:(id)arg1 direction:(unsigned long long)arg2 ;
-(void)updateShadowWithTexture:(id)arg1 percent:(double)arg2 direction:(unsigned long long)arg3 ;
-(void)updateFlop:(id)arg1 withPercent:(double)arg2 direction:(unsigned long long)arg3 ;
-(void)p_drawFlopWithVelocity:(bool)arg1 isVertical:(bool)arg2 texture:(id)arg3 oldTexture:(id)arg4 ;
-(void)dealloc;
@end
