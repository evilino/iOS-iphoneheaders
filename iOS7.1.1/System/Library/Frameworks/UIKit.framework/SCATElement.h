/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:36:59 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCATElement <AXGroupable>
@property (nonatomic,readonly) CGRect scatFrame; 
@property (nonatomic,readonly) CGPoint scatCenterPoint; 
@property (nonatomic,readonly) CGPathRef scatPath; 
@property (nonatomic,readonly) BOOL scatPathIsInScreenCoordinates; 
@property (nonatomic,readonly) unsigned long long scatTraits; 
@property (nonatomic,readonly) BOOL scatIsValid; 
@property (nonatomic,readonly) BOOL scatIsAXElement; 
@property (nonatomic,readonly) BOOL scatIndicatesOwnFocus; 
@property (nonatomic,readonly) BOOL scatShouldActivateDirectly; 
@property (nonatomic,readonly) NSString * scatSpeakableDescription; 
@property (nonatomic,readonly) BOOL scatIsKeyboardKey; 
@property (nonatomic,readonly) BOOL scatCanShowAlternateKeys; 
@property (nonatomic,readonly) NSArray * scatAlternateKeys; 
@property (nonatomic,readonly) CGRect scatTextCursorFrame; 
@property (nonatomic,readonly) NSNumber * scatOverrideCursorTheme; 
@optional
-(void)scatDidBecomeFocused:(BOOL)arg1;
-(id)scatSpeakableDescription:(BOOL)arg1;

@required
-(BOOL)scatIndicatesOwnFocus;
-(BOOL)scatSupportsAction:(int)arg1;
-(id)scatSpeakableDescription;
-(CGPathRef)scatPath;
-(BOOL)scatPerformAction:(int)arg1;
-(id)scatOverrideCursorTheme;
-(BOOL)scatIsAXElement;
-(CGRect*)scatFrame;
-(BOOL)scatIsKeyboardKey;
-(id)scatAlternateKeys;
-(unsigned long long)scatTraits;
-(BOOL)scatCanScrollInAtLeastOneDirection;
-(id)scatSupportedGestures;
-(BOOL)scatCanShowAlternateKeys;
-(id)scrollableElement;
-(CGPoint*)scatCenterPoint;
-(BOOL)scatPerformAction:(int)arg1 withValue:(id)arg2;
-(BOOL)scatShouldActivateDirectly;
-(BOOL)scatIsValid;
-(BOOL)scatPathIsInScreenCoordinates;
-(CGRect*)scatTextCursorFrame;
-(void)scatScrollToVisible;
@end
