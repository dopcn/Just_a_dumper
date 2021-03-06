//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UITableViewCell, UIViewController;

@protocol QLThumbCreationUserInfo <NSObject>

@optional
- (double)getPageViewBottomOffest;
- (double)getPageViewTopOffest;
- (_Bool)isCellVisiableInTableView:(UITableViewCell *)arg1;
- (NSDictionary *)commonParamsForReport;
- (unsigned long long)getViewPageTypeWithObject:(id)arg1;
- (unsigned long long)getViewPageType;
- (long long)getViewStyleValue;
- (id)tcu_getObjectValueForCell:(NSString *)arg1;
- (NSString *)tcu_getStringValueForCell:(NSString *)arg1;
- (int)tcu_thumbBackgroundStyle;
- (UIViewController *)tcu_currentPageViewController;
@end

