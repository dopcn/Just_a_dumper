//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UCMessageNetFetcher.h"

@class UCCustomerServiceConfig;
@protocol UCCustomerServiceUnReadCountFetcherDelegate;

@interface UCCustomerServiceUnReadCountFetcher : UCMessageNetFetcher
{
    _Bool _isRetry;
    id <UCCustomerServiceUnReadCountFetcherDelegate> _delegate;
    UCCustomerServiceConfig *_serviceConfig;
}

+ (id)paramSN;
+ (_Bool)isParamReady;
+ (id)configWithServiceType:(long long)arg1;
@property(retain, nonatomic) UCCustomerServiceConfig *serviceConfig; // @synthesize serviceConfig=_serviceConfig;
@property(nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property(nonatomic) id <UCCustomerServiceUnReadCountFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyFail;
- (void)notifySucceedWithUnReadCount:(id)arg1 unReadIds:(id)arg2;
- (void)didFetchFailWithError:(long long)arg1;
- (void)didFetchData:(id)arg1;
- (id)httpBodyData;
- (long long)httpMethod;
- (void)dealloc;
- (long long)getEntranceType;
- (id)initWithEntranceType:(long long)arg1;

@end

