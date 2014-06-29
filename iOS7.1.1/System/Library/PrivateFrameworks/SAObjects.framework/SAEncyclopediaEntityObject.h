/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SAEncyclopediaEntityLink, NSURL, NSArray;

@interface SAEncyclopediaEntityObject : SADomainObject

@property (nonatomic,copy) NSString * articleAbstract; 
@property (nonatomic,retain) SAEncyclopediaEntityLink * articleLink; 
@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * nameAnnotation; 
@property (nonatomic,copy) NSArray * propertyGroups; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)propertyGroups;
-(void)setPropertyGroups:(id)arg1 ;
-(id)groupIdentifier;
-(void)setImage:(id)arg1 ;
-(id)image;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)articleAbstract;
-(void)setArticleAbstract:(id)arg1 ;
-(id)articleLink;
-(void)setArticleLink:(id)arg1 ;
-(id)nameAnnotation;
-(void)setNameAnnotation:(id)arg1 ;
@end
