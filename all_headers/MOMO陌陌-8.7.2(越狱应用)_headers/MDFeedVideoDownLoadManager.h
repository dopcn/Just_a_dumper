//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MDFeedVideoDownLoadManager : NSObject
{
    NSMutableDictionary *_downloadQueue;
}

@property(retain, nonatomic) NSMutableDictionary *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
- (void).cxx_destruct;
- (void)releaseBind:(id)arg1;
- (void)removeDownloadFromQueue:(id)arg1;
- (void)cancelDownloadWithUuid:(id)arg1;
- (void)downloadVideoDelegate:(id)arg1 uuid:(id)arg2 urlString:(id)arg3 needProcess:(_Bool)arg4 fileType:(int)arg5;
- (id)init;

@end

