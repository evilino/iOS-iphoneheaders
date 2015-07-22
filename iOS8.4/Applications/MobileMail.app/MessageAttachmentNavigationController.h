/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class MessageViewController;

@interface MessageAttachmentNavigationController : UINavigationController {

	MessageViewController* _parentMessageViewController;

}

@property (assign,nonatomic) MessageViewController * parentMessageViewController;              //@synthesize parentMessageViewController=_parentMessageViewController - In the implementation block
-(MessageViewController *)parentMessageViewController;
-(void)setParentMessageViewController:(MessageViewController *)arg1 ;
-(void)presentModalViewController:(id)arg1 animated:(char)arg2 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
@end
