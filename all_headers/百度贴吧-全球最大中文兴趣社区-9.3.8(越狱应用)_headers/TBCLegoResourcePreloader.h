//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TBCWebImageManagerDelegate-Protocol.h"

@class IDPCache, NSString;

@interface TBCLegoResourcePreloader : NSObject <TBCWebImageManagerDelegate>
{
    IDPCache *_cache;
}

+ (id)cacheKeyForPageType:(id)arg1 pageID:(id)arg2 itemID:(id)arg3;
+ (id)pageDataFromCacheForPageType:(id)arg1 pageID:(id)arg2 itemID:(id)arg3;
+ (void)cachePageData:(id)arg1 forPageType:(id)arg2 pageID:(id)arg3 itemID:(id)arg4;
+ (void)preloadPicWithUrl:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) IDPCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)loadFinish:(_Bool)arg1 loadDescription:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

