//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNPMYOUTHHTTPRequest.h"

@class NSString;
@protocol SNPMYOUTHMP4VedioRequestDelegate;

@interface SNPMYOUTHMP4VedioRequest : SNPMYOUTHHTTPRequest
{
    id <SNPMYOUTHMP4VedioRequestDelegate> _mp4VedioWithRequestDelegate;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak id <SNPMYOUTHMP4VedioRequestDelegate> mp4VedioWithRequestDelegate; // @synthesize mp4VedioWithRequestDelegate=_mp4VedioWithRequestDelegate;
- (void).cxx_destruct;
- (void)requestDidFailed;
- (void)requestDidCompleted;
- (id)requestUrl;
- (void)queryWithPPTVString:(id)arg1;

@end

