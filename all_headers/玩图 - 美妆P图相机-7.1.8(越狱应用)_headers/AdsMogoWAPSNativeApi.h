//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AdsMoGoFeedAdNetworkAdapter.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLConnection;

@interface AdsMogoWAPSNativeApi : AdsMoGoFeedAdNetworkAdapter <NSURLConnectionDelegate>
{
    NSURLConnection *urlConnection;
    NSMutableData *receiveData;
    int netType;
    int waps_ad_count;
}

+ (void)load;
+ (int)networkType;
- (void).cxx_destruct;
- (void)dealloc;
- (id)joinIDFA:(id)arg1;
- (void)loadAdTimeOut:(id)arg1;
- (void)stopAd;
- (void)clickAd:(id)arg1;
- (void)attachAdView:(id)arg1 nativeData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)loadAd:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

