//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TTFontDownloadManager : NSObject
{
    NSMutableDictionary *_downloadOperationDic;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    double _progress;
}

+ (id)sharedInstance;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain) NSMutableDictionary *downloadOperationDic; // @synthesize downloadOperationDic=_downloadOperationDic;
- (void).cxx_destruct;
- (id)urlStripDomain:(id)arg1;
- (void)cancelAll;
- (void)cancel:(id)arg1;
- (void)append:(id)arg1 userInfo:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

