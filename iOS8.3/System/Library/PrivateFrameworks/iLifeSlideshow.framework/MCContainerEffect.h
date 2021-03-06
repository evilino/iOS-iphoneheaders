/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/MCContainer.h>
#import <iLifeSlideshow/MCActionSupport.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSSet, NSArray;

@interface MCContainerEffect : MCContainer <MCActionSupport> {

	NSMutableArray* mSlides;
	NSMutableArray* mTexts;
	NSMutableDictionary* mActions;
	NSMutableDictionary* mEffectAttributes;
	char mIsLive;
	NSString* mEffectID;

}

@property (readonly) NSDictionary * actions; 
@property (nonatomic,readonly) unsigned countOfActions; 
@property (readonly) NSSet * slides; 
@property (readonly) NSArray * orderedSlides; 
@property (nonatomic,readonly) unsigned countOfSlides; 
@property (nonatomic,readonly) unsigned nextAvailableSlideIndex; 
@property (readonly) NSSet * texts; 
@property (readonly) NSArray * orderedTexts; 
@property (nonatomic,readonly) unsigned countOfTexts; 
@property (nonatomic,readonly) unsigned nextAvailableTextIndex; 
@property (copy) NSString * effectID; 
@property (copy) NSDictionary * effectAttributes; 
@property (assign,nonatomic) char isLive; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)removeActionForKey:(id)arg1 ;
-(NSDictionary *)actions;
-(id)actionForKey:(id)arg1 ;
-(void)removeAllActions;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isLive;
-(id)imprint;
-(id)slideAtIndex:(unsigned)arg1 ;
-(void)removeAllSlides;
-(NSSet *)slides;
-(id)addSlides:(int)arg1 ;
-(void)removeSlidesAtIndices:(id)arg1 ;
-(unsigned)countOfTexts;
-(NSSet *)texts;
-(NSString *)effectID;
-(void)removeAllTexts;
-(unsigned)countOfSlides;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)effectAttributes;
-(void)setEffectAttributes:(NSDictionary *)arg1 ;
-(id)effectAttributeForKey:(id)arg1 ;
-(void)setEffectID:(NSString *)arg1 ;
-(void)demolish;
-(unsigned)nextAvailableSlideIndex;
-(id)insertSlideForAsset:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)insertSlideAtIndex:(int)arg1 ;
-(id)insertSlidesForAssets:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)moveSlidesAtIndices:(id)arg1 toIndex:(unsigned)arg2 ;
-(id)insertTextsForAttributedStrings:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeTextsAtIndices:(id)arg1 ;
-(void)moveTextsAtIndices:(id)arg1 toIndex:(unsigned)arg2 ;
-(void)setIsLive:(char)arg1 ;
-(id)addSlidesForAssets:(id)arg1 ;
-(id)addSlide;
-(id)addTextsForAttributedStrings:(id)arg1 ;
-(unsigned)countOfActions;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)initActionsWithImprints:(id)arg1 ;
-(void)demolishActions;
-(id)imprintsForActions;
-(id)insertSlideForContainer:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned)nextAvailableTextIndex;
-(id)insertTextsForAssets:(id)arg1 andKey:(id)arg2 atIndex:(unsigned)arg3 ;
-(NSArray *)orderedSlides;
-(id)addSlideForAsset:(id)arg1 ;
-(id)addSlideForContainer:(id)arg1 ;
-(NSArray *)orderedTexts;
-(id)textAtIndex:(unsigned)arg1 ;
-(id)addTextForAttributedString:(id)arg1 ;
-(id)addTextForAsset:(id)arg1 andKey:(id)arg2 ;
-(id)addTextsForAssets:(id)arg1 andKey:(id)arg2 ;
-(id)insertTextForAttributedString:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)insertTextForAsset:(id)arg1 andKey:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)addEffectAttributes:(id)arg1 ;
@end

