//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QNVideoCommendApi;

@interface QNVideoCommendLoader : NSObject
{
    NSString *_currentChannel;
    QNVideoCommendApi *_requestApi;
}

@property(retain, nonatomic) QNVideoCommendApi *requestApi; // @synthesize requestApi=_requestApi;
@property(copy, nonatomic) NSString *currentChannel; // @synthesize currentChannel=_currentChannel;
- (void).cxx_destruct;
- (void)loadCommendVideo:(id)arg1 type:(long long)arg2 num:(long long)arg3 scence:(long long)arg4 successBlock:(CDUnknownBlockType)arg5 failedBlock:(CDUnknownBlockType)arg6;

@end

