//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FKWrapperView, NSError, NSURLRequest;

@protocol FKWrapperViewDelegate <NSObject>

@optional
- (void)wrapperView:(FKWrapperView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)wrapperViewDidFinishLoad:(FKWrapperView *)arg1;
- (void)wrapperViewDidStartLoad:(FKWrapperView *)arg1;
- (_Bool)wrapperView:(FKWrapperView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(unsigned long long)arg3;
- (void)wrapperViewDidInit:(FKWrapperView *)arg1;
@end

