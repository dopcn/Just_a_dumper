//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SessionViewControllerProtocol <NSObject>
- (_Bool)isInSearchMode;
- (void)viewWillAppearWhenFirstOpen;
- (void)viewDidAppearWhenFirstOpen;
- (long long)sessionType;

@optional
- (void)updateLastMessageForMessageList;
- (void)viewContactCard:(NSString *)arg1 userType:(long long)arg2;
- (void)viewDidApprearAfterFirstOpen;
- (void)cleanCacheText;
- (void)initCacheText;
- (void)saveCacheText;
- (_Bool)isMultiSelectUI;
@end

