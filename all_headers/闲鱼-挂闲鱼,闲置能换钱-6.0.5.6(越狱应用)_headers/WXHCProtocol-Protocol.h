//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, WXHCTabConfigItem, WXViewController;

@protocol WXHCProtocol <NSObject>
- (void)setUpNaviItem:(WXViewController *)arg1 withConfigItem:(WXHCTabConfigItem *)arg2;
- (NSArray *)domainOfWeexMHC;
- (_Bool)isValidWeexMHCURL:(NSURL *)arg1;

@optional
- (NSString *)md5OfWeexHC:(NSString *)arg1;
@end

