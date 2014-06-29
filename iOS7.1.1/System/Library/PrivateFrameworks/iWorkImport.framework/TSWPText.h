/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPLayoutTarget.h>
#import <iWorkImport/TSWPLayoutOwner.h>
#import <iWorkImport/TSWPColumnMetrics.h>

@protocol TSWPTextDelegate;
@class TSWPParagraphStyle, TSWPListStyle, TSWPColumnStyle, TSUColor, TSWPStorage, NSMutableArray, NSObject, TSDCanvas, TSDLayout, TSWPPadding;

@interface TSWPText : NSObject <TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics> {

	TSWPParagraphStyle* _paragraphStyle;
	TSWPListStyle* _listStyle;
	TSWPColumnStyle* _columnStyle;
	TSUColor* _textColorOverride;
	TSWPStorage* _storage;
	NSMutableArray* _columns;
	CGSize _minSize;
	CGSize _maxSize;
	unsigned long long _pageNumber;
	unsigned long long _pageCount;
	int _flags;
	CGPoint _anchor;
	int _naturalAlignment;
	int _naturalDirection;
	NSObject<TSWPTextDelegate>* _delegate;

}

@property (assign,nonatomic) NSObject<TSWPTextDelegate> * delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TSWPParagraphStyle * paragraphStyle;                                 //@synthesize paragraphStyle=_paragraphStyle - In the implementation block
@property (nonatomic,retain) TSUColor * textColorOverride;                                          //@synthesize textColorOverride=_textColorOverride - In the implementation block
@property (nonatomic,readonly) NSMutableArray * columns;                                            //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) <TSWPOffscreenColumn> * previousTargetLastColumn; 
@property (nonatomic,readonly) const TSWPTopicNumberHints* previousTargetTopicNumbers; 
@property (nonatomic,readonly) <TSWPOffscreenColumn> * nextTargetFirstColumn; 
@property (nonatomic,readonly) const TSWPTopicNumberHints* nextTargetTopicNumbers; 
@property (nonatomic,readonly) <TSWPFootnoteHeightMeasurer> * footnoteHeightMeasurer; 
@property (nonatomic,readonly) <TSWPFootnoteMarkProvider> * footnoteMarkProvider; 
@property (nonatomic,readonly) TSPObject<TSDHint> * nextTargetFirstChildHint; 
@property (nonatomic,readonly) CGSize minSize; 
@property (nonatomic,readonly) CGSize maxSize; 
@property (nonatomic,readonly) CGSize currentSize; 
@property (nonatomic,readonly) CGPoint position; 
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (nonatomic,readonly) unsigned autosizeFlags; 
@property (nonatomic,readonly) int verticalAlignment; 
@property (nonatomic,readonly) int naturalAlignment;                                                //@synthesize naturalAlignment=_naturalAlignment - In the implementation block
@property (nonatomic,readonly) int naturalDirection;                                                //@synthesize naturalDirection=_naturalDirection - In the implementation block
@property (nonatomic,readonly) bool wantsLineFragments; 
@property (nonatomic,readonly) unsigned long long pageNumber; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) bool textIsVertical; 
@property (nonatomic,readonly) bool layoutIsValid; 
@property (nonatomic,readonly) double maxAnchorY; 
@property (nonatomic,readonly) CGRect maskRect; 
@property (nonatomic,retain) NSMutableArray * anchoredDrawablesForRelayout; 
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (nonatomic,readonly) TSDLayout * parentLayoutForInlineAttachments; 
@property (nonatomic,readonly) bool shouldHyphenate; 
@property (nonatomic,readonly) CFLocaleRef hyphenationLocale; 
@property (nonatomic,readonly) CGSize adjustedInsets; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) bool alwaysStartsNewTarget; 
@property (nonatomic,readonly) bool shrinkTextToFit; 
@property (nonatomic,readonly) bool columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
-(id)paragraphStyle;
-(id)initWithParagraphStyle:(id)arg1 ;
-(id)initWithParagraphStyle:(id)arg1 columnStyle:(id)arg2 ;
-(void)setTextColorOverride:(id)arg1 ;
-(id)layoutText:(id)arg1 minSize:(CGSize)arg2 maxSize:(CGSize)arg3 anchor:(CGPoint)arg4 flags:(int)arg5 ;
-(id)layoutTextStorage:(id)arg1 minSize:(CGSize)arg2 maxSize:(CGSize)arg3 anchor:(CGPoint)arg4 pageNumber:(unsigned long long)arg5 pageCount:(unsigned long long)arg6 flags:(int)arg7 ;
-(void)drawColumn:(id)arg1 selection:(id)arg2 inContext:(CGContextRef)arg3 isFlipped:(bool)arg4 viewScale:(double)arg5 ;
-(bool)textIsVertical;
-(CGSize)adjustedInsets;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4 ;
-(id)layoutMargins;
-(bool)alwaysStartsNewTarget;
-(bool)shrinkTextToFit;
-(bool)columnsAreLeftToRight;
-(CGSize)measureText:(id)arg1 ;
-(id)layoutText:(id)arg1 kind:(int)arg2 minSize:(CGSize)arg3 maxSize:(CGSize)arg4 anchor:(CGPoint)arg5 flags:(int)arg6 ;
-(id)initWithParagraphStyle:(id)arg1 columnStyle:(id)arg2 alignmentForNaturalAlignment:(int)arg3 naturalDirection:(int)arg4 ;
-(bool)adjustColumnOriginForAlignment;
-(bool)forceWesternLineBreaking;
-(void)drawColumn:(id)arg1 inContext:(CGContextRef)arg2 isFlipped:(bool)arg3 viewScale:(double)arg4 ;
-(void)drawText:(id)arg1 inContext:(CGContextRef)arg2 minSize:(CGSize)arg3 maxSize:(CGSize)arg4 anchor:(CGPoint)arg5 flags:(int)arg6 viewScale:(double)arg7 ;
-(id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(NSRange*)arg2 ;
-(bool)caresAboutStorageChanges;
-(void)layoutManagerNeedsLayout:(id)arg1 ;
-(void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3 ;
-(id)currentAnchoredDrawableLayouts;
-(id)validatedLayoutForAnchoredDrawable:(id)arg1 ;
-(unsigned)autosizeFlags;
-(id)validatedLayoutForInlineDrawable:(id)arg1 ;
-(id)previousTargetLastColumn;
-(id)footnoteHeightMeasurer;
-(id)footnoteMarkProvider;
-(id)textWrapper;
-(id)textColorOverride;
-(double)maxAnchorY;
-(id)nextTargetFirstChildHint;
-(void)setNeedsDisplayInTargetRect:(CGRect)arg1 ;
-(const TSWPTopicNumberHints*)nextTargetTopicNumbers;
-(id)nextTargetFirstColumn;
-(id)currentInlineDrawableLayouts;
-(void)addAttachmentLayout:(id)arg1 ;
-(const TSWPTopicNumberHints*)previousTargetTopicNumbers;
-(bool)isLastTarget;
-(int)naturalAlignment;
-(bool)isLayoutOffscreen;
-(CGRect)targetRectForCanvasRect:(CGRect)arg1 ;
-(int)naturalDirection;
-(bool)wantsLineFragments;
-(bool)layoutIsValid;
-(id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2 columnStyle:(id)arg3 alignmentForNaturalAlignment:(int)arg4 naturalDirection:(int)arg5 ;
-(id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2 columnStyle:(id)arg3 ;
-(id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2 ;
-(id)layoutTextStorage:(id)arg1 minSize:(CGSize)arg2 maxSize:(CGSize)arg3 anchor:(CGPoint)arg4 flags:(int)arg5 ;
-(CGSize)currentSize;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(CGSize)maxSize;
-(CGPoint)position;
-(CGPoint)anchorPoint;
-(CGSize)minSize;
-(unsigned long long)pageCount;
-(id).cxx_construct;
-(unsigned long long)columnCount;
-(unsigned long long)pageNumber;
-(id)columns;
-(int)verticalAlignment;
@end
