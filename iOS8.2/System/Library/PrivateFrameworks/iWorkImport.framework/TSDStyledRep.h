/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRep.h>

@class CALayer, TSDMutableReflection, TSDShadow, TSDReflection;

@interface TSDStyledRep : TSDRep {

	CALayer* mShadowLayer;
	CALayer* mReflectionLayer;
	CGPoint mOriginalReflectionLayerPositionInScaledCanvas;
	char mIsUpdatingReflectionOpacity;
	TSDMutableReflection* mDynamicReflection;
	char mIsUpdatingShadow;
	TSDShadow* mDynamicShadow;
	struct {
		unsigned shadowInvalid : 1;
	}  mFlags;

}

@property (nonatomic,readonly) CALayer * shadowLayer; 
@property (nonatomic,readonly) CALayer * reflectionLayer; 
@property (nonatomic,readonly) TSDReflection * reflection; 
@property (nonatomic,readonly) float opacity; 
@property (nonatomic,readonly) TSDShadow * shadow; 
-(void)willUpdateLayer:(id)arg1 ;
-(void)didUpdateLayer:(id)arg1 ;
-(char)shouldShowSelectionHighlight;
-(void)dynamicDragDidBegin;
-(void)viewScaleDidChange;
-(id)textureForContext:(id)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(id)additionalLayersUnderLayer;
-(void)setTextureAttributes:(id)arg1 ;
-(id)styledLayout;
-(CALayer *)reflectionLayer;
-(char)shouldHideSelectionHighlightDueToRectangularPath;
-(void)invalidateShadowLayer;
-(char)shouldShowShadow;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(char)arg2 withStroke:(char)arg3 withOpacity:(char)arg4 forAlphaOnly:(char)arg5 drawChildren:(char)arg6 ;
-(id)pathSourceForSelectionHighlightBehavior;
-(char)canDrawShadowInOneStepWithChildren:(char)arg1 ;
-(char)shouldShowReflection;
-(void)calculateTextureClipBounds:(CGRect*)arg1 andOffset:(CGPoint*)arg2 withTransform:(CGAffineTransform*)arg3 andRectOnCanvas:(CGRect*)arg4 textureContext:(id)arg5 isUsingImageTexture:(char)arg6 ;
-(CALayer *)shadowLayer;
-(void)disposeReflectionLayer;
-(void)createReflectionLayer;
-(void)drawGradientWithAlphaOverReflection:(CGContextRef)arg1 applyingOpacity:(char)arg2 reflectionSize:(CGSize)arg3 ;
-(CGImageRef)newFrameMaskForViewScale:(float)arg1 frameRect:(CGRect*)arg2 ;
-(id)styledInfo;
-(CGRect)clipRectWithoutEffects;
-(CGRect)rectWithEffectsAppliedToRect:(CGRect)arg1 ;
-(CGRect)p_rectWithEffectsAppliedToRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2 includeShadow:(char)arg3 includeReflection:(char)arg4 ;
-(CGRect)reflectionLayerFrameInRoot;
-(void)drawReflectionIntoReflectionFrameInContext:(CGContextRef)arg1 withTransparencyLayer:(char)arg2 applyingOpacity:(char)arg3 drawChildren:(char)arg4 ;
-(void)p_drawReflectionInContext:(CGContextRef)arg1 ;
-(void)positionShadowLayer:(id)arg1 forShadow:(id)arg2 withNaturalBounds:(CGRect)arg3 ;
-(CGImageRef)newShadowImageWithSize:(CGSize)arg1 unflipped:(char)arg2 withChildren:(char)arg3 ;
-(void)drawInContextWithoutEffectsForAlphaOnly:(CGContextRef)arg1 ;
-(void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(CGContextRef)arg1 ;
-(CGImageRef)newShadowImageWithSize:(CGSize)arg1 shadow:(id)arg2 drawSelector:(SEL)arg3 unflipped:(char)arg4 ;
-(void)p_drawReflectionIntoReflectionFrameInContext:(CGContextRef)arg1 withTransparencyLayer:(char)arg2 applyingOpacity:(char)arg3 shouldClipGradient:(char)arg4 withBlock:(/*^block*/id)arg5 ;
-(CGImageRef)p_newReflectionImageWithSize:(CGSize)arg1 applyOpacity:(char)arg2 viewScale:(float)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)drawReflectionInContext:(CGContextRef)arg1 withTransparencyLayer:(char)arg2 applyingOpacity:(char)arg3 shouldClipGradient:(char)arg4 withBlock:(/*^block*/id)arg5 ;
-(void)drawShadowInContext:(CGContextRef)arg1 withChildren:(char)arg2 withDrawableOpacity:(char)arg3 ;
-(void)drawReflectionInContext:(CGContextRef)arg1 drawChildren:(char)arg2 ;
-(void)willUpdateEffectLayersForLayer:(id)arg1 ;
-(void)didUpdateEffectLayersForLayer:(id)arg1 ;
-(CGRect)p_clipRectInRootForTransform:(CGAffineTransform)arg1 includeShadow:(char)arg2 includeReflection:(char)arg3 ;
-(CGRect)reflectionLayerFrame;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 ;
-(void)drawInContextWithoutEffectsOrChildren:(CGContextRef)arg1 ;
-(void)dynamicReflectionOpacityChangeDidBegin;
-(void)dynamicReflectionOpacityUpdateToValue:(float)arg1 ;
-(void)dynamicReflectionOpacityChangeDidEnd;
-(void)dynamicShadowChangeDidBegin;
-(void)dynamicShadowUpdateToValue:(id)arg1 ;
-(void)dynamicShadowChangeDidEnd;
-(CGRect)clipRect;
-(void)dealloc;
-(void)setNeedsDisplay;
-(id)description;
-(float)opacity;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(TSDShadow *)shadow;
-(char)isInvisible;
-(TSDReflection *)reflection;
@end

