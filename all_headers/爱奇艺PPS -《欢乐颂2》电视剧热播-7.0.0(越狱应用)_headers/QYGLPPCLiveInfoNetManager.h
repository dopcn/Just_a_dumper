//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYGLNetworkManager.h"

@class NSString;

@interface QYGLPPCLiveInfoNetManager : QYGLNetworkManager
{
    NSString *_qpId;
}

+ (void)requestWithQPId:(id)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSString *qpId; // @synthesize qpId=_qpId;
- (void).cxx_destruct;
- (id)valueDicForPost;
- (id)urlStl;
- (id)init;

@end

