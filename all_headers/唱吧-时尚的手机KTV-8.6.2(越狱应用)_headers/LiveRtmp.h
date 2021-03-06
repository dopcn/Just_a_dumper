//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface LiveRtmp : MTLModel <MTLJSONSerializing>
{
    NSString *_signature;
    NSString *_publishURL;
    NSString *_subscribeURL;
    NSString *_retrySubscribingURL;
}

+ (id)retrySubscribingURLJSONTransformer;
+ (id)subscribeURLJSONTransformer;
+ (id)publishURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *retrySubscribingURL; // @synthesize retrySubscribingURL=_retrySubscribingURL;
@property(retain, nonatomic) NSString *subscribeURL; // @synthesize subscribeURL=_subscribeURL;
@property(retain, nonatomic) NSString *publishURL; // @synthesize publishURL=_publishURL;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
- (void).cxx_destruct;

@end

