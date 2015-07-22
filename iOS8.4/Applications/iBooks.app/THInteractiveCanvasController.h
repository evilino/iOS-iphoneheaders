/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/TSAInteractiveCanvasController.h>
#import <iBooks/THWPressableRepPressHandler.h>

@class NSArray, NSObject, CALayer, NSString;

@interface THInteractiveCanvasController : TSAInteractiveCanvasController <THWPressableRepPressHandler> {

	char mWasThreadedLayoutAndRenderEnabled;
	char mSuppressRevealScrollViewOnLayoutAndRender;
	char mOverscrolling;
	NSArray* mBackgroundLayers;
	NSArray* mForegroundLayers;
	char mHoistedMaskLayer;
	NSObject* miTunesMobileContext;
	char _renablePaging;
	char _selectOnLongPress;
	CALayer* _maskLayer;
	CGPoint _maskLayerOrigin;
	CGPoint _targetContentOffset;

}

@property (assign,nonatomic) char suppressRevealScrollViewOnLayoutAndRender; 
@property (nonatomic,retain,readonly) id<THAnnotationStorageController> bookAnnotationController; 
@property (nonatomic,retain) NSObject * iTunesMobileContext; 
@property (nonatomic,copy) NSArray * backgroundLayers; 
@property (nonatomic,copy) NSArray * foregroundLayers; 
@property (assign) char isOverscrolling; 
@property (readonly) char animatingScroll; 
@property (readonly) CGRect visibleUnscaledRectForContent; 
@property (readonly) float visibleHeight; 
@property (nonatomic,retain) CALayer * maskLayer;                                                              //@synthesize maskLayer=_maskLayer - In the implementation block
@property (assign,nonatomic) CGPoint maskLayerOrigin;                                                          //@synthesize maskLayerOrigin=_maskLayerOrigin - In the implementation block
@property (assign,nonatomic) char renablePaging;                                                               //@synthesize renablePaging=_renablePaging - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;                                                      //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (assign,nonatomic) char selectOnLongPress;                                                           //@synthesize selectOnLongPress=_selectOnLongPress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)pressHandlerForPressableReps;
-(char)canHandleGesture:(id)arg1 ;
-(char)handleGesture:(id)arg1 ;
-(void)willBeginHandlingGesture:(id)arg1 ;
-(id)documentNavigator;
-(void)pageLeft;
-(void)pageRight;
-(CGRect)visibleUnscaledRectForContent;
-(char)isOverscrolling;
-(void)updateBookmarkStatusAnimated:(char)arg1 ;
-(char)isCompactHeight;
-(void)updateBookmarkVisibleState;
-(id)hitRep:(CGPoint)arg1 allowsAllReps:(char)arg2 ;
-(void)handleHyperlinkWithURL:(id)arg1 ;
-(void)handleHyperlink:(id)arg1 hitRep:(id)arg2 ;
-(char)zoomToColumnWithFrame:(CGRect)arg1 ;
-(char)dynamicallyZooming;
-(char)animatingScroll;
-(void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned)arg3 ;
-(char)spellCheckingSuppressed;
-(char)shouldShowTextOverflowGlyphs;
-(void)p_releaseOutlets;
-(void)setITunesMobileContext:(NSObject *)arg1 ;
-(id)hitRep:(CGPoint)arg1 ;
-(id<THAnnotationStorageController>)bookAnnotationController;
-(NSArray *)foregroundLayers;
-(CGPoint)maskLayerOrigin;
-(void)setMaskLayerOrigin:(CGPoint)arg1 ;
-(void)p_adjustMaskLayerOnScrollView:(id)arg1 ;
-(void)p_moveMaskFromLayer:(id)arg1 toLayer:(id)arg2 ;
-(void)canvasDidLayout:(id)arg1 ;
-(void)p_updateMaskLayer;
-(char)p_zoomColumnAtPoint:(CGPoint)arg1 forceWpRep:(char)arg2 ;
-(char)p_shouldSharedAppDelegateHandleURL:(id)arg1 ;
-(id)bookNavigator;
-(void)i_handleGlossaryHyperlink:(id)arg1 rep:(id)arg2 anchor:(id)arg3 ;
-(id)p_gestureHitLink:(id)arg1 ;
-(void)makeRepsRecursivelyPerformSelectorIfImplemented:(SEL)arg1 ;
-(char)suppressRevealScrollViewOnLayoutAndRender;
-(id)nsAttributedSubstringForStorage:(id)arg1 range:(NSRange)arg2 rep:(id)arg3 baselineOrigin:(CGPoint*)arg4 ;
-(char)supportsWritingHighlights;
-(void)setSelectOnLongPress:(char)arg1 ;
-(char)selectOnLongPress;
-(void)willSetDocumentToMode:(int)arg1 fromMode:(int)arg2 animated:(char)arg3 ;
-(void)didSetDocumentToMode:(int)arg1 fromMode:(int)arg2 animated:(char)arg3 ;
-(char)p_pointIsInLeftMargin:(CGPoint)arg1 ;
-(char)p_pointIsInRightMargin:(CGPoint)arg1 ;
-(char)p_handleSingleTap:(id)arg1 ;
-(char)p_handleLongPress:(id)arg1 ;
-(char)p_handleTapAtPoint:(CGPoint)arg1 ;
-(void)p_handleOverscroll:(id)arg1 state:(int)arg2 ;
-(void)scrollView:(id)arg1 willAnimateToContentOffset:(CGPoint)arg2 ;
-(void)p_hoistMaskLayer;
-(void)p_unhoistMaskLayer;
-(void)setIsOverscrolling:(char)arg1 ;
-(char)p_allowPaging;
-(void)pressableRepWasPressed:(id)arg1 atPoint:(CGPoint)arg2 ;
-(char)supportsReadingHighlights;
-(id)additionalLayersUnderRepLayers;
-(id)additionalLayersOverRepLayers;
-(char)shouldEverShowPathHighlightOnInvisibleShapes;
-(char)suppressDoubleTapForSelection;
-(char)zoomColumnAtPoint:(CGPoint)arg1 ;
-(char)handleHyperlinksWithTextGRs;
-(id)linkForHyperlinkField:(id)arg1 ;
-(void)handleHyperlinkGesture:(id)arg1 ;
-(char)gestureHitLink:(id)arg1 ;
-(char)handleDoubleTapAtPoint:(CGPoint)arg1 ;
-(void)beginStaticLayoutAndRender;
-(void)endStaticLayoutAndRender:(char)arg1 ;
-(void)didBeginFreeTransform;
-(void)didEndFreeTransform;
-(void)didLayoutAndRenderOnThread;
-(id)canvasEditor;
-(SCD_Struct_TH57)wordMetricsAtPoint:(CGPoint)arg1 ;
-(char)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(void)showHyperlinkInfoForField:(id)arg1 inRep:(id)arg2 openInEditMode:(char)arg3 ;
-(char)wantsUpdatedScrollIndicatorInsets;
-(void)scrollViewDidLayoutSubviews:(id)arg1 ;
-(void)p_logPageAffordanceNavigationToMessageTracer;
-(void)setSuppressRevealScrollViewOnLayoutAndRender:(char)arg1 ;
-(NSObject *)iTunesMobileContext;
-(void)setBackgroundLayers:(NSArray *)arg1 ;
-(void)setForegroundLayers:(NSArray *)arg1 ;
-(char)renablePaging;
-(void)setRenablePaging:(char)arg1 ;
-(id)_axQuickSpeakContent;
-(id)_accessibilitySpeakSelectionTextInputResponder;
-(char)_accessibilityShouldShowSpeakBubble;
-(char)_accessibilityQuickSpeakContentIsSpeakable;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(NSArray *)backgroundLayers;
-(float)visibleHeight;
-(char)isCompactWidth;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(CGPoint)targetContentOffset;
-(CALayer *)maskLayer;
-(void)setMaskLayer:(CALayer *)arg1 ;
-(id)_accessibilityQuickSpeakContent;
@end
