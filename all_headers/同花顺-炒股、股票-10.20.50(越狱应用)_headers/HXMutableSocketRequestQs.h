//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HXSocketRequestQs.h"

@interface HXMutableSocketRequestQs : HXSocketRequestQs
{
}

+ (id)requestWithProtocolId:(int)arg1 paramsDict:(id)arg2 pageId:(int)arg3 instanceId:(int)arg4 wait:(_Bool)arg5;
+ (id)requestWithProtocolId:(int)arg1 paramsDict:(id)arg2 pageId:(int)arg3 instanceId:(int)arg4;
- (id)initWithProtocolId:(int)arg1 paramsDict:(id)arg2 pageId:(int)arg3 instanceId:(int)arg4 wait:(_Bool)arg5;
- (id)initWithProtocolId:(int)arg1 paramsDict:(id)arg2 pageId:(int)arg3 instanceId:(int)arg4;
@property(nonatomic) int protocolId;
@property(nonatomic) int instanceId;
@property(nonatomic) int pageId;

@end

