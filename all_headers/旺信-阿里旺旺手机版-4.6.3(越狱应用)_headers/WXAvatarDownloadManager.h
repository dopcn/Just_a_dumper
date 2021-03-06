//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXSDWebDataManagerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface WXAvatarDownloadManager : NSObject <WXSDWebDataManagerDelegate>
{
    long long _remainingDownloadCount;
    NSArray *_urls;
    NSMutableArray *_avatars;
    CDUnknownBlockType _doneBlock;
}

+ (id)managerWithURLs:(id)arg1 doneBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(retain, nonatomic) NSMutableArray *avatars; // @synthesize avatars=_avatars;
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(nonatomic) long long remainingDownloadCount; // @synthesize remainingDownloadCount=_remainingDownloadCount;
- (void).cxx_destruct;
- (void)webDataManager:(id)arg1 didFailWithError:(id)arg2 theURL:(id)arg3;
- (void)webDataManager:(id)arg1 didFinishWithData:(id)arg2 isCache:(_Bool)arg3 theURL:(id)arg4;
- (void)downloadTaskDidComplete;
- (void)download;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

