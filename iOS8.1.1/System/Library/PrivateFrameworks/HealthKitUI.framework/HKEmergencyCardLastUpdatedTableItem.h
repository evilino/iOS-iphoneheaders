/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKEmergencyCardTableItem.h>

@class UITableViewCell, UILabel, NSDateFormatter;

@interface HKEmergencyCardLastUpdatedTableItem : HKEmergencyCardTableItem {

	UITableViewCell* _cell;
	UILabel* _lastUpdatedLabel;
	NSDateFormatter* _dateFormatter;

}
-(id)initInEditMode:(BOOL)arg1 ;
-(UIEdgeInsets)separatorInset;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
@end
