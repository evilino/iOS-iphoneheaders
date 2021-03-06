/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPOffscreenColumn.h>

@protocol TSWPStyleProvider;
@class TSWPStorage;

@interface TSWPColumn : NSObject <TSWPOffscreenColumn> {

	TSWPStorage* _storage;
	CGRect _frameBounds;
	CGAffineTransform _transform;
	unsigned _startCharIndex;
	unsigned _characterCount;
	unsigned _startAnchoredCharIndex;
	unsigned _anchoredCharCount;
	unsigned _nextWidowPullsDownFromCharIndex;
	float _contentBottom;
	float _erasableContentBottom;
	int _layoutResultFlags;
	unsigned _columnIndex;
	unsigned _pageNumber;
	unsigned _scaleTextPercent;
	<TSWPStyleProvider>* _styleProvider;
	shared_ptr<TSWPLineFragmentArray>* _lineFragmentArray;
	void* _paragraphAdornments;
	BOOL _textIsVertical;

}

@property (nonatomic,readonly) CGRect frameBounds; 
@property (nonatomic,readonly) CGRect typographicBounds; 
@property (nonatomic,readonly) TSWPStorage * storage;                               //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic) NSRange range; 
@property (assign,nonatomic) NSRange anchoredRange; 
@property (nonatomic,readonly) unsigned countLines; 
@property (assign,nonatomic) float contentBottom;                                   //@synthesize contentBottom=_contentBottom - In the implementation block
@property (nonatomic,readonly) float textBottom; 
@property (assign,nonatomic) int layoutResultFlags;                                 //@synthesize layoutResultFlags=_layoutResultFlags - In the implementation block
@property (assign,nonatomic) unsigned scaleTextPercent;                             //@synthesize scaleTextPercent=_scaleTextPercent - In the implementation block
@property (assign,nonatomic) CGRect wpBounds;                                       //@synthesize frameBounds=_frameBounds - In the implementation block
@property (assign,nonatomic) CGAffineTransform transformFromWP;                     //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) CGAffineTransform transformToWP; 
@property (assign,nonatomic) unsigned startCharIndex;                               //@synthesize startCharIndex=_startCharIndex - In the implementation block
@property (assign,nonatomic) unsigned characterCount;                               //@synthesize characterCount=_characterCount - In the implementation block
@property (assign,nonatomic) unsigned startAnchoredCharIndex;                       //@synthesize startAnchoredCharIndex=_startAnchoredCharIndex - In the implementation block
@property (assign,nonatomic) unsigned anchoredCharCount;                            //@synthesize anchoredCharCount=_anchoredCharCount - In the implementation block
@property (assign,nonatomic) unsigned nextWidowPullsDownFromCharIndex;              //@synthesize nextWidowPullsDownFromCharIndex=_nextWidowPullsDownFromCharIndex - In the implementation block
@property (assign,nonatomic) float erasableContentBottom;                           //@synthesize erasableContentBottom=_erasableContentBottom - In the implementation block
@property (assign,nonatomic) unsigned columnIndex;                                  //@synthesize columnIndex=_columnIndex - In the implementation block
@property (assign,nonatomic) unsigned pageNumber;                                   //@synthesize pageNumber=_pageNumber - In the implementation block
@property (nonatomic,retain) <TSWPStyleProvider> * styleProvider;                   //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) BOOL textIsVertical;                                   //@synthesize textIsVertical=_textIsVertical - In the implementation block
+(id)columnForCharIndex:(unsigned)arg1 eol:(BOOL)arg2 withColumns:(id)arg3 ;
+(CGRect)rectForSelection:(id)arg1 withColumns:(id)arg2 useParagraphModeRects:(BOOL)arg3 ;
+(unsigned)charIndexForPoint:(CGPoint)arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 pastCenterGoesToNextChar:(BOOL)arg5 isAtEndOfLine:(BOOL*)arg6 leadingEdge:(BOOL*)arg7 ;
+(id)closestColumnInColumnsArray:(id)arg1 forPoint:(CGPoint)arg2 ignoreEmptyColumns:(BOOL)arg3 ignoreDrawableOnlyColumns:(BOOL)arg4 ;
+(CGRect)caretRectForInsertionPoint:(id)arg1 withColumns:(id)arg2 ;
+(CGRect)rectForSelection:(id)arg1 withColumns:(id)arg2 ;
+(unsigned)charIndexForPoint:(CGPoint)arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 leadingEdge:(BOOL*)arg6 ;
+(unsigned)charIndexForTopicDragAtPoint:(CGPoint)arg1 inColumnsArray:(id)arg2 ;
+(id)smartFieldWithAttributeKind:(int)arg1 inColumnArray:(id)arg2 atPoint:(CGPoint)arg3 ;
+(id)footnoteMarkAttachmentInColumnArray:(id)arg1 atPoint:(CGPoint)arg2 ;
+(id)footnoteReferenceAttachmentInColumnArray:(id)arg1 atPoint:(CGPoint)arg2 ;
+(id)pathForHighlightWithRange:(NSRange)arg1 columnArray:(id)arg2 pathStyle:(int)arg3 ;
+(CGRect)boundsRectForSelection:(id)arg1 columnArray:(id)arg2 includeRuby:(BOOL)arg3 ;
-(id)storage;
-(CGRect)frameBounds;
-(id)rectsForSelection:(id)arg1 ;
-(BOOL)textIsVertical;
-(unsigned)characterCount;
-(CGRect)typographicBounds;
-(CGRect)caretRectForSelection:(id)arg1 ;
-(SCD_Struct_TS566)lineMetricsAtCharIndex:(unsigned)arg1 allowEndOfLine:(BOOL)arg2 ;
-(unsigned)lineIndexForCharIndex:(unsigned)arg1 eol:(BOOL)arg2 ;
-(unsigned)countLines;
-(const TSWPLineFragment*)lineFragmentAtIndex:(unsigned)arg1 ;
-(unsigned)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 leadingEdge:(BOOL*)arg6 ;
-(unsigned)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 outFragment:(const TSWPLineFragment*)arg6 leadingEdge:(BOOL*)arg7 ;
-(const TSWPLineFragment*)lineFragmentForCharIndex:(unsigned)arg1 knobTag:(unsigned)arg2 selectionType:(int)arg3 ;
-(id)smartFieldAtCharIndex:(unsigned)arg1 attributeKind:(int)arg2 ;
-(id)rectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2 forParagraphMode:(BOOL)arg3 includeRuby:(BOOL)arg4 ;
-(void)setStartCharIndex:(unsigned)arg1 ;
-(void)setCharacterCount:(unsigned)arg1 ;
-(void)setStartAnchoredCharIndex:(unsigned)arg1 ;
-(void)setAnchoredCharCount:(unsigned)arg1 ;
-(void)setContentBottom:(float)arg1 ;
-(void)clearAdornments;
-(float)logicalBoundsTop;
-(float)textBottom;
-(const shared_ptr<TSWPLineFragmentArray>*)lineFragmentArray;
-(void)offsetLineFragmentsByPoint:(CGPoint)arg1 ;
-(CGAffineTransform)transformToWP;
-(CGAffineTransform)transformFromWP;
-(id)pMutableRectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2 includeSpaceAfter:(BOOL)arg3 includeSpaceBefore:(BOOL)arg4 includeLeading:(BOOL)arg5 forParagraphMode:(BOOL)arg6 includeRuby:(BOOL)arg7 inranges:(id)arg8 outranges:(id*)arg9 ;
-(id)rectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2 ;
-(const TSWPLineFragment*)pColumnEndingPartitionedLineFragmentInSelectionRange:(NSRange)arg1 ;
-(id)rectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2 forParagraphMode:(BOOL)arg3 ;
-(unsigned)charIndexFromWPPoint:(CGPoint)arg1 pastCenterGoesToNextChar:(BOOL)arg2 allowNotFound:(BOOL)arg3 outFragment:(const TSWPLineFragment*)arg4 leadingEdge:(BOOL*)arg5 ;
-(NSRange)anchoredRange;
-(void)renderWithRenderer:(id)arg1 currentSelection:(id)arg2 limitSelection:(id)arg3 listRange:(NSRange)arg4 rubyGlyphRange:(NSRange)arg5 isCanvasInteractive:(BOOL)arg6 suppressedMisspellingRange:(NSRange)arg7 blackAndWhite:(BOOL)arg8 dictationInterpretations:(const TSWPRangeVector*)arg9 autocorrections:(const TSWPRangeVector*)arg10 markedRange:(NSRange)arg11 markedText:(id)arg12 renderMode:(int)arg13 pageCount:(unsigned)arg14 suppressInvisibles:(BOOL)arg15 currentCanvasSelection:(id)arg16 ;
-(CGRect)wpBounds;
-(CGRect)erasableBounds:(unsigned)arg1 ;
-(void)trimToCharIndex:(unsigned)arg1 inTarget:(id)arg2 removeAutoNumberFootnoteCount:(unsigned)arg3 ;
-(unsigned)startCharIndex;
-(unsigned)startAnchoredCharIndex;
-(unsigned)nextWidowPullsDownFromCharIndex;
-(id)initWithStorage:(id)arg1 frameBounds:(CGRect)arg2 ;
-(float)logicalBoundsBottom;
-(void)setAnchoredRange:(NSRange)arg1 ;
-(void)incrementRanges:(int)arg1 ;
-(float)minimumHeightForLayoutOnPage;
-(BOOL)requiresGlyphVectorsForHeightMeasurement;
-(void)addAdornmentRect:(const TSWPAdornmentRect*)arg1 ;
-(void)setLineFragmentArray:(const shared_ptr<TSWPLineFragmentArray>*)arg1 ;
-(void)normalizeLineFragmentOrigins:(CGPoint)arg1 ;
-(unsigned)lineFragmentCountForBaseline:(float)arg1 ;
-(void)makeEmpty:(unsigned)arg1 layoutResultFlags:(int)arg2 ;
-(CGRect)boundsOfLineFragmentAtIndex:(unsigned)arg1 ;
-(NSRange)rangeOfLineFragmentAtIndex:(unsigned)arg1 ;
-(float)horizontalOffsetForCharIndex:(unsigned)arg1 lineFragmentIndex:(unsigned)arg2 bumpPastHyphen:(BOOL)arg3 allowPastLineBounds:(BOOL)arg4 ;
-(const TSWPLineFragment*)lineFragmentClosestToPoint:(CGPoint)arg1 knobTag:(unsigned)arg2 ;
-(CGRect)glyphRectForRange:(NSRange)arg1 includingLabel:(BOOL)arg2 ;
-(CGRect)glyphRectForRubyFieldAtCharIndex:(unsigned)arg1 glyphRange:(NSRange)arg2 ;
-(unsigned)glyphCountForRubyFieldAtCharIndex:(unsigned)arg1 ;
-(CGRect)columnRectForRange:(NSRange)arg1 ;
-(id)lineSelectionsForSelection:(id)arg1 ;
-(CGRect)firstRectForSelection:(id)arg1 includeSpaceAfter:(BOOL)arg2 includeSpaceBefore:(BOOL)arg3 includeLeading:(BOOL)arg4 ;
-(id)rectsForSelectionRange:(NSRange)arg1 ;
-(id)rectsForSelectionRanges:(id)arg1 selectionType:(int)arg2 ;
-(id)rectsForSelection:(id)arg1 ranges:(id*)arg2 ;
-(CGRect)erasableRectForSelectionRange:(NSRange)arg1 ;
-(id)drawableIntersectionRectsForSelection:(id)arg1 inTarget:(id)arg2 ;
-(unsigned)charIndexForSelectionFromPoint:(CGPoint)arg1 isTail:(BOOL)arg2 ;
-(TSWPCharIndexAndPosition)calcAttachmentPositionForDrawable:(id)arg1 atPoint:(CGPoint)arg2 inTextLayoutTarget:(id)arg3 tlBoundsInfluencingWrap:(CGPoint)arg4 wrapOutset:(CGSize)arg5 wrapMargin:(float)arg6 makeInline:(BOOL)arg7 ;
-(void)renderWithRenderer:(id)arg1 pageCount:(unsigned)arg2 ;
-(id)partitionedLayoutForInfo:(id)arg1 ;
-(id)singleLinePartitionedInfoAtStart:(BOOL)arg1 ;
-(BOOL)onlyHasAnchoredDrawable;
-(void)setWpBounds:(CGRect)arg1 ;
-(void)setTransformFromWP:(CGAffineTransform)arg1 ;
-(unsigned)anchoredCharCount;
-(void)setNextWidowPullsDownFromCharIndex:(unsigned)arg1 ;
-(float)contentBottom;
-(float)erasableContentBottom;
-(void)setErasableContentBottom:(float)arg1 ;
-(int)layoutResultFlags;
-(void)setLayoutResultFlags:(int)arg1 ;
-(unsigned)scaleTextPercent;
-(void)setScaleTextPercent:(unsigned)arg1 ;
-(void)setTextIsVertical:(BOOL)arg1 ;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)dealloc;
-(CGSize)maxSize;
-(NSRange)range;
-(id).cxx_construct;
-(float)textHeight;
-(unsigned)pageNumber;
-(void)setRange:(NSRange)arg1 ;
-(void)setPageNumber:(unsigned)arg1 ;
-(void)setColumnIndex:(unsigned)arg1 ;
-(unsigned)columnIndex;
-(void).cxx_destruct;
@end

