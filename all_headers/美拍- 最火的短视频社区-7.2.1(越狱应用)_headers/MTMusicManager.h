//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSOperationQueue;

@interface MTMusicManager : NSObject
{
    NSDictionary *_mvMusics;
    NSDictionary *_mvMusicsGenres;
    NSOperationQueue *_operationQueue;
    _Bool _isRequestingGenres;
    _Bool _isRequesting;
    NSMutableDictionary *_progresses;
    NSMutableDictionary *_callbacks;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) _Bool isRequestingGenres; // @synthesize isRequestingGenres=_isRequestingGenres;
@property(retain, nonatomic) NSMutableDictionary *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) NSMutableDictionary *progresses; // @synthesize progresses=_progresses;
- (void).cxx_destruct;
- (id)requestObjectForURL:(id)arg1;
- (void)deleteFileWithFileName:(id)arg1;
- (_Bool)isMusicDownloadedWithMusicId:(id)arg1 timeType:(id)arg2;
- (_Bool)haveDownloadedWithFileName:(id)arg1;
- (_Bool)cancelDownloadForURL:(id)arg1;
- (void)clearAllDownloadBlock;
- (void)clearAllDownload;
- (_Bool)downloadingWithURL:(id)arg1;
- (double)downloadProgressWithURL:(id)arg1;
- (void)removeCallbackWithURL:(id)arg1;
- (void)downloadWithURL:(id)arg1 targetPath:(id)arg2 musicId:(id)arg3 progress:(CDUnknownBlockType)arg4 complete:(CDUnknownBlockType)arg5;
- (void)loadMVusicsData;
- (void)loadMVusicsGenresData;
- (void)loadOnlineData;
- (id)localizedMusicGenreForKey:(id)arg1;
- (id)mvMusicsForID:(id)arg1;
- (id)init;

@end

