//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL;

@interface ODKVHttpClient : NSObject
{
    NSURL *_url;
}

+ (id)sharedClient;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)getUrl:(int)arg1;
- (_Bool)validateResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (void)sendRequest:(id)arg1 eventCount:(int)arg2 withCallback:(CDUnknownBlockType)arg3;
- (id)initUniqueInstance;

@end

