//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BBAMNPUtilities : NSObject
{
}

+ (void)loadForfirstPageURL:(id)arg1 animated:(_Bool)arg2;
+ (id)jsonStringFromDictionary:(id)arg1;
+ (id)parseJSONString:(id)arg1;
+ (_Bool)isPageURLValid:(id)arg1;
+ (long long)tabRootPageIndexForURL:(id)arg1;
+ (id)getSlaveWebVCById:(id)arg1;
+ (id)getAllSlaveWebViewController;
+ (id)getTopSlaveWebViewController;
+ (id)getServiceTabBarController;
+ (id)getCurrentNavigationController;

@end

