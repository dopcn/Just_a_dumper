//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TBCComicDownloadManagerDelegate <NSObject>

@optional
- (void)comicDidFail:(NSString *)arg1 chapterId:(NSString *)arg2;
- (void)comicDidFinish:(NSString *)arg1 chapterId:(NSString *)arg2;
- (void)comicDownload:(NSString *)arg1 chapterId:(NSString *)arg2 progress:(float)arg3;
- (void)comicDidStart:(NSString *)arg1 chapterId:(NSString *)arg2;
- (void)comicDidChange:(NSString *)arg1;
@end

