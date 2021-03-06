//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDYCPHandlerBase.h"

@class NSObject;
@protocol OS_dispatch_group;

@interface JDYCPEventOpenPlugin : JDYCPHandlerBase
{
    NSObject<OS_dispatch_group> *_pluginCompletionGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *pluginCompletionGroup; // @synthesize pluginCompletionGroup=_pluginCompletionGroup;
- (void).cxx_destruct;
- (_Bool)checkDirectUrlForPlugin:(id)arg1 directURL:(id)arg2;
- (void)openPlugin:(id)arg1 request:(id)arg2 directURL:(id)arg3 specificPage:(id)arg4 extraData:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)pluginInfoUpdateFinished;
- (void)handleRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

