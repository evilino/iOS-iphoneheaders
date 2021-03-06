/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, IKViewElementStyle, IKAppDocument, NSMutableDictionary, NSMutableSet;

@interface IKViewElement : NSObject {

	char _disabled;
	char _impressionable;
	NSString* _elementID;
	unsigned _elementType;
	NSString* _elementName;
	IKViewElement* _parent;
	NSArray* _children;
	NSDictionary* _attributes;
	IKViewElementStyle* _style;
	NSString* _accessibilityText;
	NSString* _autoHighlightIdentifier;
	unsigned _updateType;
	NSArray* _features;
	IKAppDocument* _appDocument;
	NSString* _itmlID;
	NSMutableDictionary* _metadataDict;
	NSMutableSet* _activeSingularEvents;

}

@property (nonatomic,copy,readonly) NSString * elementID;                              //@synthesize elementID=_elementID - In the implementation block
@property (nonatomic,readonly) unsigned elementType;                                   //@synthesize elementType=_elementType - In the implementation block
@property (nonatomic,copy,readonly) NSString * elementName;                            //@synthesize elementName=_elementName - In the implementation block
@property (assign,nonatomic,__weak) IKViewElement * parent;                            //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSArray * children;                                       //@synthesize children=_children - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * attributes;                       //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain,readonly) IKViewElementStyle * style;                      //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityText;                      //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (nonatomic,copy,readonly) NSString * autoHighlightIdentifier;                //@synthesize autoHighlightIdentifier=_autoHighlightIdentifier - In the implementation block
@property (assign,getter=isDisabled,nonatomic) char disabled;                          //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isImpressionable,nonatomic) char impressionable;              //@synthesize impressionable=_impressionable - In the implementation block
@property (assign,nonatomic) unsigned updateType;                                      //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * features;                                //@synthesize features=_features - In the implementation block
@property (assign,nonatomic,__weak) IKAppDocument * appDocument;                       //@synthesize appDocument=_appDocument - In the implementation block
@property (nonatomic,retain,readonly) NSString * itmlID;                               //@synthesize itmlID=_itmlID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadataDict;                       //@synthesize metadataDict=_metadataDict - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeSingularEvents;                      //@synthesize activeSingularEvents=_activeSingularEvents - In the implementation block
+(unsigned)evaluateElementUpdateTypeAndReset:(id)arg1 ;
+(id)supportedFeatures;
+(char)shouldParseChildDOMElements;
-(NSString *)elementID;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(IKViewElementStyle *)style;
-(void)setDisabled:(char)arg1 ;
-(NSDictionary *)attributes;
-(NSString *)elementName;
-(void)setUpdateType:(unsigned)arg1 ;
-(id)childElementsWithType:(unsigned)arg1 ;
-(id)childElementWithType:(unsigned)arg1 ;
-(id)childTextElementWithStyle:(unsigned)arg1 ;
-(void)setAppDocument:(IKAppDocument *)arg1 ;
-(id)childImageElementWithType:(unsigned)arg1 ;
-(void)_reorderAndUpdateChildrenWithElements:(id)arg1 ;
-(void)_applyUpdatesToChildrenWithElements:(id)arg1 ;
-(void)setMetadataDict:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)activeSingularEvents;
-(void)setActiveSingularEvents:(NSMutableSet *)arg1 ;
-(void)setImpressionable:(char)arg1 ;
-(NSMutableDictionary *)metadataDict;
-(NSString *)autoHighlightIdentifier;
-(void)setChildren:(NSArray *)arg1 ;
-(unsigned)elementType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(unsigned)updateType;
-(NSString *)accessibilityText;
-(void)dispatchEventOfType:(unsigned)arg1 canBubble:(char)arg2 isCancelable:(char)arg3 extraInfo:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(NSString *)itmlID;
-(NSArray *)features;
-(char)isDisabled;
-(IKAppDocument *)appDocument;
-(char)isImpressionable;
-(NSArray *)children;
-(void)setParent:(IKViewElement *)arg1 ;
-(IKViewElement *)parent;
@end

