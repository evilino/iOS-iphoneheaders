/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSDChangeableInfo.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSKTransformableObject.h>
#import <iWorkImport/TSKSearchable.h>

@protocol TSDContainerInfo, TSDOwningAttachment;
@class TSDInfoGeometry, NSObject, TSPLazyReference, TSSPropertySetChangeDetails, TSDExteriorTextWrap, TSPObject, TSDDefaultPartitioner, NSURL, TSDDrawableComment, NSString, KNSlide, KNAbstractSlide, NSArray, KNBuild;

@interface TSDDrawableInfo : TSPObject <TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject, TSKSearchable> {

	TSDInfoGeometry* mGeometry;
	NSObject*<TSDContainerInfo> mParentInfo;
	TSPLazyReference* mParentInfoReference;
	BOOL mLocked;
	BOOL mAspectRatioLocked;
	TSSPropertySetChangeDetails* mChanges;
	TSDExteriorTextWrap* mExteriorTextWrap;
	TSPObject*<TSDOwningAttachment> mOwningAttachment;
	TSDDefaultPartitioner* mDefaultPartitioner;
	NSURL* mHyperlinkURL;
	TSDDrawableComment* mComment;
	NSString* mAccessibilityDescription;

}

@property (nonatomic,readonly) KNSlide * slide; 
@property (nonatomic,readonly) KNAbstractSlide * abstractSlide; 
@property (nonatomic,readonly) NSArray * builds; 
@property (nonatomic,readonly) unsigned long long buildCount; 
@property (nonatomic,readonly) BOOL hasBuilds; 
@property (nonatomic,readonly) KNBuild * buildIn; 
@property (nonatomic,readonly) KNBuild * buildOut; 
@property (nonatomic,readonly) BOOL hasActionBuilds; 
@property (nonatomic,readonly) NSArray * actionBuilds; 
@property (nonatomic,readonly) NSArray * buildChunks; 
@property (nonatomic,readonly) NSArray * activeBuildChunks; 
@property (nonatomic,readonly) NSArray * ghostInfos; 
@property (assign,getter=isLocked,nonatomic) BOOL locked; 
@property (getter=isLockable,nonatomic,readonly) BOOL lockable; 
@property (nonatomic,readonly) BOOL supportsAttachedComments; 
@property (assign,nonatomic) BOOL aspectRatioLocked; 
@property (nonatomic,readonly) BOOL canSizeBeChangedIncrementally; 
@property (nonatomic,copy) TSDExteriorTextWrap * exteriorTextWrap; 
@property (nonatomic,copy) NSURL * hyperlinkURL; 
@property (nonatomic,readonly) BOOL supportsHyperlinks; 
@property (nonatomic,copy) NSString * accessibilityDescription; 
@property (nonatomic,retain) TSDDrawableComment * comment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@property (nonatomic,readonly) BOOL isUserModifiable; 
@property (nonatomic,readonly) Class editorClass; 
+(void)load;
+(BOOL)needsObjectUUID;
+(void)setShouldPartitionByDefault:(BOOL)arg1 ;
+(BOOL)canPartition;
-(id)uuidPathPrefixComponentsProvider;
-(NSArray *)builds;
-(NSArray *)buildChunks;
-(NSArray *)activeBuildChunks;
-(BOOL)hasBuilds;
-(BOOL)swizzled_matchesObjectPlaceholderGeometry;
-(NSArray *)actionBuilds;
-(unsigned long long)buildCount;
-(KNAbstractSlide *)abstractSlide;
-(BOOL)hasActionBuilds;
-(KNBuild *)buildIn;
-(KNBuild *)buildOut;
-(id)activeBuildChunksForAnimationType:(int)arg1 ;
-(NSArray *)ghostInfos;
-(void)swizzled_setMatchesObjectPlaceholderGeometry:(BOOL)arg1 ;
-(KNSlide *)slide;
-(int)elementKind;
-(void)setInsertionCenterPosition:(CGPoint)arg1 ;
-(id)objectUUIDPath;
-(void)saveToArchive:(DrawableArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const DrawableArchive*)arg1 unarchiver:(id)arg2 ;
-(void)setParentInfoDuringUnarchiving:(id)arg1 fromPasteboard:(BOOL)arg2 ;
-(BOOL)aspectRatioLocked;
-(id)copyWithContext:(id)arg1 ;
-(void)willCopyWithOtherDrawables:(id)arg1 ;
-(void)didCopy;
-(void)beginCollectingChanges;
-(id)endCollectingChanges;
-(id)presetKind;
-(BOOL)isThemeContent;
-(Class)repClass;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)animationFilters;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(CGAffineTransform)transformInRoot;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1 ;
-(id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(BOOL)matchesObjectPlaceholderGeometry;
-(void)setMatchesObjectPlaceholderGeometry:(BOOL)arg1 ;
-(void)coalesceChanges:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)searchForAnnotationsWithHitBlock:(/*^block*/id)arg1 ;
-(unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 ;
-(BOOL)reverseChunkingIsSupported;
-(id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3 ;
-(BOOL)supportsHyperlinks;
-(BOOL)canSizeBeChangedIncrementally;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isInlineWithText;
-(BOOL)isAttachedToBodyText;
-(BOOL)supportsAttachedComments;
-(void)willChangeProperty:(int)arg1 ;
-(BOOL)isLockable;
-(void)performBlockWithTemporaryLayout:(/*^block*/id)arg1 ;
-(CGAffineTransform)computeLayoutFullTransform;
-(id)containingGroup;
-(unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3 ;
-(id)descriptionForPasteboard;
-(CGPoint)transformableObjectAnchorPoint;
-(void)willChangeProperties:(id)arg1 ;
-(BOOL)isUserModifiable;
-(Class)editorClass;
-(void)setHyperlinkURL:(NSURL *)arg1 ;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(CGAffineTransform)computeFullTransform;
-(CGAffineTransform)fullTransformInRoot;
-(void)setExteriorTextWrap:(TSDExteriorTextWrap *)arg1 ;
-(TSDExteriorTextWrap *)exteriorTextWrap;
-(id)partitioner;
-(void)willGroupWithCommand:(id)arg1 ;
-(void)didUngroupWithCommand:(id)arg1 ;
-(id)commandToFlipWithOrientation:(int)arg1 ;
-(BOOL)canAnchor;
-(BOOL)canChangeWrapType;
-(id)descriptionForPasteboardWithSource:(id)arg1 ;
-(id)transformedGeometryWithTransform:(CGAffineTransform)arg1 inBounds:(CGRect)arg2 ;
-(NSURL *)hyperlinkURL;
-(void)dealloc;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(void)setComment:(TSDDrawableComment *)arg1 ;
-(void)setAspectRatioLocked:(BOOL)arg1 ;
-(TSDDrawableComment *)comment;
-(Class)layoutClass;
-(NSString *)accessibilityDescription;
@end
