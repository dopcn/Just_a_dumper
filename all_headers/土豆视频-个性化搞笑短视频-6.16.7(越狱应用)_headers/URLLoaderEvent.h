//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XYDEvent.h"

@class NSString, NSURLResponse;

@interface URLLoaderEvent : XYDEvent
{
    NSString *mURL;
    NSURLResponse *mHttpResponse;
}

- (void).cxx_destruct;
- (id)getURL;
- (id)getHttpResponse;
- (id)initWithType:(id)arg1 responseStr:(id)arg2 url:(id)arg3 response:(id)arg4;
- (id)initWithType:(id)arg1 reponseDic:(id)arg2 url:(id)arg3 response:(id)arg4;

@end

