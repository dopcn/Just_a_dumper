//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KTVRequest, NSData, NSDictionary, NSError, NSURLResponse;

@protocol KTVRequestDelegate <NSObject>

@optional
- (void)request:(KTVRequest *)arg1 didFinishLoadingWithResult:(NSDictionary *)arg2;
- (void)request:(KTVRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)request:(KTVRequest *)arg1 didReceiveData:(NSData *)arg2;
- (void)request:(KTVRequest *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
@end

