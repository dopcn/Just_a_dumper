//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, UmeURLRequest;

@protocol UmeUrlRequestDelegate <NSObject>

@optional
- (void)requestDidCancelLoad:(UmeURLRequest *)arg1;
- (void)request:(UmeURLRequest *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)requestDidFinishLoad:(UmeURLRequest *)arg1;
- (void)requestDidStartLoad:(UmeURLRequest *)arg1;
@end

