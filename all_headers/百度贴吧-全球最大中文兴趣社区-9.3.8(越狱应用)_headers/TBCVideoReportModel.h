//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseModel.h"

@class NSString;

@interface TBCVideoReportModel : TBCBaseModel
{
    _Bool _isClickPlay;
    NSString *_operaThread;
}

+ (id)transPostionForServer:(unsigned long long)arg1;
@property(nonatomic) _Bool isClickPlay; // @synthesize isClickPlay=_isClickPlay;
@property(copy, nonatomic) NSString *operaThread; // @synthesize operaThread=_operaThread;
- (void).cxx_destruct;
- (void)reportVideoVVWithObjResourceID:(id)arg1 videoMD5:(id)arg2 threadID:(id)arg3 objSource:(unsigned long long)arg4 objLocate:(unsigned long long)arg5 isAutoPlay:(_Bool)arg6;
- (void)realReportWithForumID:(id)arg1 threadID:(id)arg2 videoMD5:(id)arg3 lastPage:(unsigned long long)arg4 uid:(id)arg5 position:(unsigned long long)arg6 isAutoPlay:(_Bool)arg7 threadFrom:(id)arg8 weight:(id)arg9 channelId:(id)arg10 abTag:(id)arg11;
- (id)init;
- (void)dealloc;

@end

